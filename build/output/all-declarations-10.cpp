#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block::GGS_ipic_31__38_Block (void) :
mProperty_mAddress (),
mProperty_mLabel (),
mProperty_mInstructionList (),
mProperty_mTerminator (),
mProperty_mTerminatorMin (),
mProperty_mTerminatorMax () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block::GGS_ipic_31__38_Block (const GGS_ipic_31__38_Block & inSource) :
mProperty_mAddress (inSource.mProperty_mAddress),
mProperty_mLabel (inSource.mProperty_mLabel),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mTerminator (inSource.mProperty_mTerminator),
mProperty_mTerminatorMin (inSource.mProperty_mTerminatorMin),
mProperty_mTerminatorMax (inSource.mProperty_mTerminatorMax) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block & GGS_ipic_31__38_Block::operator = (const GGS_ipic_31__38_Block & inSource) {
  mProperty_mAddress = inSource.mProperty_mAddress ;
  mProperty_mLabel = inSource.mProperty_mLabel ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mTerminator = inSource.mProperty_mTerminator ;
  mProperty_mTerminatorMin = inSource.mProperty_mTerminatorMin ;
  mProperty_mTerminatorMax = inSource.mProperty_mTerminatorMax ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ipic_31__38_Block GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (const GGS_uint & in_mAddress,
                                                                           const GGS_lstring & in_mLabel,
                                                                           const GGS_ipic_31__38_SequentialInstructionList & in_mInstructionList,
                                                                           const GGS_ipic_31__38_AbstractBlockTerminator & in_mTerminator,
                                                                           const GGS_uint & in_mTerminatorMin,
                                                                           const GGS_uint & in_mTerminatorMax,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_Block result ;
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

void GGS_ipic_31__38_Block::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block::GGS_ipic_31__38_Block (const GGS_uint & inOperand0,
                                              const GGS_lstring & inOperand1,
                                              const GGS_ipic_31__38_SequentialInstructionList & inOperand2,
                                              const GGS_ipic_31__38_AbstractBlockTerminator & inOperand3,
                                              const GGS_uint & inOperand4,
                                              const GGS_uint & inOperand5) :
mProperty_mAddress (inOperand0),
mProperty_mLabel (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mTerminator (inOperand3),
mProperty_mTerminatorMin (inOperand4),
mProperty_mTerminatorMax (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block GGS_ipic_31__38_Block::class_func_new (const GGS_uint & in_mAddress,
                                                             const GGS_lstring & in_mLabel,
                                                             const GGS_ipic_31__38_SequentialInstructionList & in_mInstructionList,
                                                             const GGS_ipic_31__38_AbstractBlockTerminator & in_mTerminator,
                                                             const GGS_uint & in_mTerminatorMin,
                                                             const GGS_uint & in_mTerminatorMax,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_Block result ;
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

bool GGS_ipic_31__38_Block::isValid (void) const {
  return mProperty_mAddress.isValid () && mProperty_mLabel.isValid () && mProperty_mInstructionList.isValid () && mProperty_mTerminator.isValid () && mProperty_mTerminatorMin.isValid () && mProperty_mTerminatorMax.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_Block::drop (void) {
  mProperty_mAddress.drop () ;
  mProperty_mLabel.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mTerminator.drop () ;
  mProperty_mTerminatorMin.drop () ;
  mProperty_mTerminatorMax.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_Block::description (String & ioString,
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
//     @ipic18Block generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_Block ("ipic18Block",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_Block::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_Block ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_Block::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_Block (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block GGS_ipic_31__38_Block::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_Block result ;
  const GGS_ipic_31__38_Block * p = (const GGS_ipic_31__38_Block *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_Block *> (p)) {
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

ComparisonResult GGS_ipic_31__38_JumpTerminator::objectCompare (const GGS_ipic_31__38_JumpTerminator & inOperand) const {
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

GGS_ipic_31__38_JumpTerminator::GGS_ipic_31__38_JumpTerminator (void) :
GGS_ipic_31__38_SingleInstructionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator GGS_ipic_31__38_JumpTerminator::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mLabel,
                  const GGS_jumpInstructionKind & in_mKind,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_JumpTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_JumpTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_JumpTerminator_init_21__21__21_ (in_mInstructionLocation, in_mLabel, in_mKind, inCompiler) ;
  const GGS_ipic_31__38_JumpTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::
ipic_31__38_JumpTerminator_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mLabel,
                                             const GGS_jumpInstructionKind & in_mKind,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLabel = in_mLabel ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator::GGS_ipic_31__38_JumpTerminator (const cPtr_ipic_31__38_JumpTerminator * inSourcePtr) :
GGS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_JumpTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator GGS_ipic_31__38_JumpTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                               const GGS_lstring & in_mLabel,
                                                                               const GGS_jumpInstructionKind & in_mKind,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_JumpTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_JumpTerminator (in_mInstructionLocation, in_mLabel, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_ipic_31__38_JumpTerminator::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_ipic_31__38_JumpTerminator::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_jumpInstructionKind () ;
  }else{
    cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_JumpTerminator) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18JumpTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_JumpTerminator::cPtr_ipic_31__38_JumpTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (inCompiler COMMA_THERE),
mProperty_mLabel (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_JumpTerminator::cPtr_ipic_31__38_JumpTerminator (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_lstring & in_mLabel,
                                                                  const GGS_jumpInstructionKind & in_mKind,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLabel (),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLabel = in_mLabel ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_JumpTerminator::classDescriptor (void) const {
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

acPtr_class * cPtr_ipic_31__38_JumpTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_JumpTerminator (mProperty_mInstructionLocation, mProperty_mLabel, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ipic18JumpTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ("ipic18JumpTerminator",
                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_JumpTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_JumpTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_JumpTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator GGS_ipic_31__38_JumpTerminator::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_JumpTerminator result ;
  const GGS_ipic_31__38_JumpTerminator * p = (const GGS_ipic_31__38_JumpTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_JumpTerminator *> (p)) {
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

ComparisonResult GGS_ipic_31__38_ConditionalJumpTerminator::objectCompare (const GGS_ipic_31__38_ConditionalJumpTerminator & inOperand) const {
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

GGS_ipic_31__38_ConditionalJumpTerminator::GGS_ipic_31__38_ConditionalJumpTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator GGS_ipic_31__38_ConditionalJumpTerminator::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_conditional_5F_branch & in_mConditionalBranch,
                              const GGS_lstring & in_mTargetLabelWhenTrue,
                              const GGS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                              const GGS_lstring & in_mTargetLabelWhenFalse,
                              const GGS_conditionalBranchMode & in_mBranchModeOnFalseLabel,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_ConditionalJumpTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_ConditionalJumpTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_ConditionalJumpTerminator_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mConditionalBranch, in_mTargetLabelWhenTrue, in_mBranchModeOnTrueLabel, in_mTargetLabelWhenFalse, in_mBranchModeOnFalseLabel, inCompiler) ;
  const GGS_ipic_31__38_ConditionalJumpTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::
ipic_31__38_ConditionalJumpTerminator_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_conditional_5F_branch & in_mConditionalBranch,
                                                                    const GGS_lstring & in_mTargetLabelWhenTrue,
                                                                    const GGS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                                    const GGS_lstring & in_mTargetLabelWhenFalse,
                                                                    const GGS_conditionalBranchMode & in_mBranchModeOnFalseLabel,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConditionalBranch = in_mConditionalBranch ;
  mProperty_mTargetLabelWhenTrue = in_mTargetLabelWhenTrue ;
  mProperty_mBranchModeOnTrueLabel = in_mBranchModeOnTrueLabel ;
  mProperty_mTargetLabelWhenFalse = in_mTargetLabelWhenFalse ;
  mProperty_mBranchModeOnFalseLabel = in_mBranchModeOnFalseLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator::GGS_ipic_31__38_ConditionalJumpTerminator (const cPtr_ipic_31__38_ConditionalJumpTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator GGS_ipic_31__38_ConditionalJumpTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                     const GGS_conditional_5F_branch & in_mConditionalBranch,
                                                                                                     const GGS_lstring & in_mTargetLabelWhenTrue,
                                                                                                     const GGS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                                                                     const GGS_lstring & in_mTargetLabelWhenFalse,
                                                                                                     const GGS_conditionalBranchMode & in_mBranchModeOnFalseLabel,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ConditionalJumpTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ConditionalJumpTerminator (in_mInstructionLocation, in_mConditionalBranch, in_mTargetLabelWhenTrue, in_mBranchModeOnTrueLabel, in_mTargetLabelWhenFalse, in_mBranchModeOnFalseLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_ipic_31__38_ConditionalJumpTerminator::readProperty_mConditionalBranch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_conditional_5F_branch () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mConditionalBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_ipic_31__38_ConditionalJumpTerminator::readProperty_mTargetLabelWhenTrue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mTargetLabelWhenTrue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode GGS_ipic_31__38_ConditionalJumpTerminator::readProperty_mBranchModeOnTrueLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_conditionalBranchMode () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mBranchModeOnTrueLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_ipic_31__38_ConditionalJumpTerminator::readProperty_mTargetLabelWhenFalse (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mTargetLabelWhenFalse ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode GGS_ipic_31__38_ConditionalJumpTerminator::readProperty_mBranchModeOnFalseLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_conditionalBranchMode () ;
  }else{
    cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
    return p->mProperty_mBranchModeOnFalseLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ConditionalJumpTerminator class
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

cPtr_ipic_31__38_ConditionalJumpTerminator::cPtr_ipic_31__38_ConditionalJumpTerminator (const GGS_location & in_mInstructionLocation,
                                                                                        const GGS_conditional_5F_branch & in_mConditionalBranch,
                                                                                        const GGS_lstring & in_mTargetLabelWhenTrue,
                                                                                        const GGS_conditionalBranchMode & in_mBranchModeOnTrueLabel,
                                                                                        const GGS_lstring & in_mTargetLabelWhenFalse,
                                                                                        const GGS_conditionalBranchMode & in_mBranchModeOnFalseLabel,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mConditionalBranch (),
mProperty_mTargetLabelWhenTrue (),
mProperty_mBranchModeOnTrueLabel (),
mProperty_mTargetLabelWhenFalse (),
mProperty_mBranchModeOnFalseLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConditionalBranch = in_mConditionalBranch ;
  mProperty_mTargetLabelWhenTrue = in_mTargetLabelWhenTrue ;
  mProperty_mBranchModeOnTrueLabel = in_mBranchModeOnTrueLabel ;
  mProperty_mTargetLabelWhenFalse = in_mTargetLabelWhenFalse ;
  mProperty_mBranchModeOnFalseLabel = in_mBranchModeOnFalseLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_ConditionalJumpTerminator::classDescriptor (void) const {
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

acPtr_class * cPtr_ipic_31__38_ConditionalJumpTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ConditionalJumpTerminator (mProperty_mInstructionLocation, mProperty_mConditionalBranch, mProperty_mTargetLabelWhenTrue, mProperty_mBranchModeOnTrueLabel, mProperty_mTargetLabelWhenFalse, mProperty_mBranchModeOnFalseLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ipic18ConditionalJumpTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ("ipic18ConditionalJumpTerminator",
                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ConditionalJumpTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ConditionalJumpTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ConditionalJumpTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator GGS_ipic_31__38_ConditionalJumpTerminator::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ConditionalJumpTerminator result ;
  const GGS_ipic_31__38_ConditionalJumpTerminator * p = (const GGS_ipic_31__38_ConditionalJumpTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ConditionalJumpTerminator *> (p)) {
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

ComparisonResult GGS_pic_31__38_RegisterComparisonTerminator::objectCompare (const GGS_pic_31__38_RegisterComparisonTerminator & inOperand) const {
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

GGS_pic_31__38_RegisterComparisonTerminator::GGS_pic_31__38_RegisterComparisonTerminator (void) :
GGS_ipic_31__38_AbstractConditionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator GGS_pic_31__38_RegisterComparisonTerminator::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                          const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                          const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                          const GGS_ipic_31__38_RegisterComparison & in_mComparison,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_RegisterComparisonTerminator * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_RegisterComparisonTerminator (inCompiler COMMA_THERE)) ;
  object->pic_31__38_RegisterComparisonTerminator_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription, in_mComparison, inCompiler) ;
  const GGS_pic_31__38_RegisterComparisonTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::
pic_31__38_RegisterComparisonTerminator_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                  const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                  const GGS_ipic_31__38_RegisterComparison & in_mComparison,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mComparison = in_mComparison ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator::GGS_pic_31__38_RegisterComparisonTerminator (const cPtr_pic_31__38_RegisterComparisonTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_RegisterComparisonTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator GGS_pic_31__38_RegisterComparisonTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                         const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                                         const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                                         const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                         const GGS_ipic_31__38_RegisterComparison & in_mComparison,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparisonTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_RegisterComparisonTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription, in_mComparison,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_pic_31__38_RegisterComparisonTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison GGS_pic_31__38_RegisterComparisonTerminator::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38_RegisterComparison () ;
  }else{
    cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_RegisterComparisonTerminator) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18RegisterComparisonTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterComparisonTerminator::cPtr_pic_31__38_RegisterComparisonTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mComparison () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_RegisterComparisonTerminator::cPtr_pic_31__38_RegisterComparisonTerminator (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                            const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                            const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                            const GGS_ipic_31__38_RegisterComparison & in_mComparison,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mComparison () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mComparison = in_mComparison ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_RegisterComparisonTerminator::classDescriptor (void) const {
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

acPtr_class * cPtr_pic_31__38_RegisterComparisonTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_RegisterComparisonTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mComparison, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @pic18RegisterComparisonTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ("pic18RegisterComparisonTerminator",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RegisterComparisonTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RegisterComparisonTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RegisterComparisonTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator GGS_pic_31__38_RegisterComparisonTerminator::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparisonTerminator result ;
  const GGS_pic_31__38_RegisterComparisonTerminator * p = (const GGS_pic_31__38_RegisterComparisonTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RegisterComparisonTerminator *> (p)) {
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_JSR::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_JSR & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_JSR::GGS_ipic_31__38__5F_intermediate_5F_JSR (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR GGS_ipic_31__38__5F_intermediate_5F_JSR::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mTargetLabel,
                  const GGS_jumpInstructionKind & in_mKind,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_JSR_init_21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mKind, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::
ipic_31__38__5F_intermediate_5F_JSR_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mTargetLabel,
                                                      const GGS_jumpInstructionKind & in_mKind,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR::GGS_ipic_31__38__5F_intermediate_5F_JSR (const cPtr_ipic_31__38__5F_intermediate_5F_JSR * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR GGS_ipic_31__38__5F_intermediate_5F_JSR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_lstring & in_mTargetLabel,
                                                                                                 const GGS_jumpInstructionKind & in_mKind,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_JSR (in_mInstructionLocation, in_mTargetLabel, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_ipic_31__38__5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_jumpInstructionKind GGS_ipic_31__38__5F_intermediate_5F_JSR::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_jumpInstructionKind () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_JSR::cPtr_ipic_31__38__5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_JSR::cPtr_ipic_31__38__5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_lstring & in_mTargetLabel,
                                                                                    const GGS_jumpInstructionKind & in_mKind,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_JSR::classDescriptor (void) const {
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

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ipic18_intermediate_JSR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ("ipic18_intermediate_JSR",
                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR GGS_ipic_31__38__5F_intermediate_5F_JSR::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_JSR result ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR * p = (const GGS_ipic_31__38__5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_JSR *> (p)) {
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mLabel,
                      const GGS_uint & in_mOffset,
                      const GGS_uint & in_mRightShift,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_init_21__21__21__21_ (in_mInstructionLocation, in_mLabel, in_mOffset, in_mRightShift, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::
ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mLabel,
                                                                        const GGS_uint & in_mOffset,
                                                                        const GGS_uint & in_mRightShift,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLabel = in_mLabel ;
  mProperty_mOffset = in_mOffset ;
  mProperty_mRightShift = in_mRightShift ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                             const GGS_lstring & in_mLabel,
                                                                                                                             const GGS_uint & in_mOffset,
                                                                                                                             const GGS_uint & in_mRightShift,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (in_mInstructionLocation, in_mLabel, in_mOffset, in_mRightShift,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::readProperty_mOffset (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    return p->mProperty_mOffset ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::readProperty_mRightShift (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
    return p->mProperty_mRightShift ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_MOV_LABEL_W class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mLabel (),
mProperty_mOffset (),
mProperty_mRightShift () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (const GGS_location & in_mInstructionLocation,
                                                                                                                const GGS_lstring & in_mLabel,
                                                                                                                const GGS_uint & in_mOffset,
                                                                                                                const GGS_uint & in_mRightShift,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLabel (),
mProperty_mOffset (),
mProperty_mRightShift () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLabel = in_mLabel ;
  mProperty_mOffset = in_mOffset ;
  mProperty_mRightShift = in_mRightShift ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::classDescriptor (void) const {
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

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (mProperty_mInstructionLocation, mProperty_mLabel, mProperty_mOffset, mProperty_mRightShift, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ipic18_intermediate_MOV_LABEL_W generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ("ipic18_intermediate_MOV_LABEL_W",
                                                                                                      & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_MOV_LABEL_W", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@branchOverflowMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_branchOverflowMap & ioObject,
                                const GGS_string constinArgument_inKey,
                                const GGS_string constinArgument_inValue,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_branchOverflowMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 400)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringlist var_aList_14744 ;
      const GGS_branchOverflowMap temp_2 = ioObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, var_aList_14744, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 401)) ;
      {
      var_aList_14744.setter_append (constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 402)) ;
      }
      ioObject.mProperty_dictionary.addAssignOperation (constinArgument_inKey, var_aList_14744, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 403)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 405)) ;
    temp_3.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (constinArgument_inValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 405)) ;
    ioObject.mProperty_dictionary.addAssignOperation (constinArgument_inKey, temp_3, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 405)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block display'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_display (const GGS_ipic_31__38_Block inObject,
                              const GGS_string constinArgument_inNextBlockLabel,
                              GGS_string & ioArgument_ioListFileContents,
                              Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("LABEL ").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 12)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 12)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_Block temp_2 = inObject ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_display_block_list.galgas", 13)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_Block temp_3 = inObject ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", ORG ").add_operation (temp_3.readProperty_mAddress ().getter_hexString (SOURCE_FILE ("ipic18_display_block_list.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 14)) ;
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (":\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 16)) ;
  const GGS_ipic_31__38_Block temp_4 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_501 (temp_4.readProperty_mInstructionList ()) ;
  while (enumerator_501.hasCurrentObject ()) {
    GGS_stringlist var_d_553 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_501.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 19)) ;
    UpEnumerator_stringlist enumerator_600 (var_d_553) ;
    while (enumerator_600.hasCurrentObject ()) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_600.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 21)) ;
      enumerator_600.gotoNextObject () ;
    }
    enumerator_501.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 25)) ;
  const GGS_ipic_31__38_Block temp_5 = inObject ;
  ioArgument_ioListFileContents.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_5.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 27)) ;
}


//--------------------------------------------------------------------------------------------------
//Extension method '@registerExpression analyzeRegisterExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_analyzeRegisterExpression (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                const GGS_uint constinArgument_inCurrentBank,
                                                                const GGS_registerTable constinArgument_inRegisterTable,
                                                                const GGS_constantMap constinArgument_inConstantMap,
                                                                const GGS_bool constinArgument_inWriteAccess,
                                                                GGS_ipic_31__38__5F_intermediate_5F_registerExpression & outArgument_outIPICregisterDescription,
                                                                GGS_bitSliceTable & outArgument_outBitSliceTable,
                                                                GGS_stringset & ioArgument_ioUsedRegisters,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_offset_615 ;
  const GGS_registerExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_615, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 19)) ;
  const GGS_registerExpression temp_1 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_1.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 20)) ;
  const GGS_registerExpression temp_2 = this ;
  GGS_string var_assemblyString_730 = temp_2.readProperty_mRegisterName ().readProperty_string () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_offset_615.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_assemblyString_730.plusAssignOperation(GGS_string (" + ").add_operation (var_offset_615.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 24)) ;
    }
  }
  GGS_uint var_registerAddress_874 = GGS_uint (uint32_t (0U)) ;
  GGS_uintlist var_registerAddressList_956 ;
  GGS_uint var_size_991 ;
  GGS_registerProtection var_protection_1034 ;
  const GGS_registerExpression temp_4 = this ;
  GGS_string joker_1022 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_956, var_size_991, outArgument_outBitSliceTable, joker_1022, var_protection_1034, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 28)) ;
  const GGS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_1034, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 36)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::lowerThan, var_offset_615.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_registerExpression temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("offset (").add_operation (var_offset_615.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)).add_operation (GGS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 39)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_615.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 40)).objectCompare (var_size_991)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_registerExpression temp_10 = this ;
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mEndOfOffsetExpression (), GGS_string ("this offset is too large: should be lower than ").add_operation (var_size_991.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 41)) ;
      }
    }
  }
  GGS_bool var_found_1410 = GGS_bool (false) ;
  UpEnumerator_uintlist enumerator_1431 (var_registerAddressList_956) ;
  bool bool_12 = var_found_1410.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 45)).isValidAndTrue () ;
  if (enumerator_1431.hasCurrentObject () && bool_12) {
    while (enumerator_1431.hasCurrentObject () && bool_12) {
      var_found_1410 = GGS_bool (ComparisonKind::lowerThan, enumerator_1431.current_mValue (HERE).objectCompare (constinArgument_inAccessBankSplitOffset)).operator_or (GGS_bool (ComparisonKind::greaterOrEqual, enumerator_1431.current_mValue (HERE).objectCompare (GGS_uint (uint32_t (3840U)).add_operation (constinArgument_inAccessBankSplitOffset, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 46)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 46)) ;
      var_registerAddress_874 = enumerator_1431.current_mValue (HERE) ;
      enumerator_1431.gotoNextObject () ;
      if (enumerator_1431.hasCurrentObject ()) {
        bool_12 = var_found_1410.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 45)).isValidAndTrue () ;
      }
    }
  }
  GGS_bool var_needsBSRaccess_1625 = GGS_bool (false) ;
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = var_found_1410.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 50)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      var_needsBSRaccess_1625 = GGS_bool (true) ;
      var_registerAddressList_956.method_first (var_registerAddress_874, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 52)) ;
      GGS_uint var_neededBank_1757 = var_registerAddress_874.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 53)) ;
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, var_neededBank_1757.objectCompare (constinArgument_inCurrentBank)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_registerExpression temp_15 = this ;
          GGS_string var_errorMessage_1851 = GGS_string ("Accessing the '").add_operation (temp_15.readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)).add_operation (GGS_string ("' needs the bank selection set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)).add_operation (var_neededBank_1757.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 55)) ;
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            test_16 = GGS_bool (ComparisonKind::equal, constinArgument_inCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 56)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              var_errorMessage_1851.plusAssignOperation(GGS_string (", but current bank selection cannot be known"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 57)) ;
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            var_errorMessage_1851.plusAssignOperation(GGS_string (", but current bank selection is set to ").add_operation (constinArgument_inCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 59)) ;
          }
          const GGS_registerExpression temp_17 = this ;
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mRegisterName ().readProperty_location (), var_errorMessage_1851, fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 61)) ;
        }
      }
    }
  }
  outArgument_outIPICregisterDescription = GGS_ipic_31__38__5F_intermediate_5F_registerExpression::init_21__21__21_ (var_assemblyString_730, var_registerAddress_874.add_operation (var_offset_615.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 67)), var_needsBSRaccess_1625, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpression (cPtr_registerExpression * inObject,
                                                    const GGS_uint constin_inAccessBankSplitOffset,
                                                    const GGS_uint constin_inCurrentBank,
                                                    const GGS_registerTable constin_inRegisterTable,
                                                    const GGS_constantMap constin_inConstantMap,
                                                    const GGS_bool constin_inWriteAccess,
                                                    GGS_ipic_31__38__5F_intermediate_5F_registerExpression & out_outIPICregisterDescription,
                                                    GGS_bitSliceTable & out_outBitSliceTable,
                                                    GGS_stringset & io_ioUsedRegisters,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  out_outBitSliceTable.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_analyzeRegisterExpression (constin_inAccessBankSplitOffset, constin_inCurrentBank, constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, out_outIPICregisterDescription, out_outBitSliceTable, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@registerExpression analyzeRegisterExpressionWithoutCheckingBank'
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_analyzeRegisterExpressionWithoutCheckingBank (const GGS_registerTable constinArgument_inRegisterTable,
                                                                                   const GGS_constantMap constinArgument_inConstantMap,
                                                                                   const GGS_bool constinArgument_inWriteAccess,
                                                                                   GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & outArgument_outIPICregisterDescription,
                                                                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_registerExpression temp_0 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_0.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 81)) ;
  const GGS_registerExpression temp_1 = this ;
  GGS_string var_assemblyString_2887 = temp_1.readProperty_mRegisterName ().readProperty_string () ;
  GGS_sint_36__34_ var_offset_2996 ;
  const GGS_registerExpression temp_2 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_2.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_2996, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 84)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_offset_2996.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_assemblyString_2887.plusAssignOperation(GGS_string (" + ").add_operation (var_offset_2996.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)).getter_hexString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 86)) ;
    }
  }
  GGS_uintlist var_registerAddressList_3175 ;
  GGS_uint var_size_3206 ;
  GGS_registerProtection var_protection_3220 ;
  const GGS_registerExpression temp_4 = this ;
  GGS_bitSliceTable joker_3211_2 ; // Joker input parameter
  GGS_string joker_3211_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_4.readProperty_mRegisterName (), var_registerAddressList_3175, var_size_3206, joker_3211_2, joker_3211_1, var_protection_3220, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 89)) ;
  const GGS_registerExpression temp_5 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_5.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_3220, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 90)) ;
  GGS_uint var_registerAddress_3364 ;
  var_registerAddressList_3175.method_first (var_registerAddress_3364, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 91)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_2996.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 93)).objectCompare (var_size_3206)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_registerExpression temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("this offset is too large: should be lower than ").add_operation (var_size_3206.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 94)) ;
    }
  }
  outArgument_outIPICregisterDescription = GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::init_21__21_ (var_assemblyString_2887, var_registerAddress_3364.add_operation (var_offset_2996.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 99)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank (cPtr_registerExpression * inObject,
                                                                       const GGS_registerTable constin_inRegisterTable,
                                                                       const GGS_constantMap constin_inConstantMap,
                                                                       const GGS_bool constin_inWriteAccess,
                                                                       GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & out_outIPICregisterDescription,
                                                                       GGS_stringset & io_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  out_outIPICregisterDescription.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_analyzeRegisterExpressionWithoutCheckingBank (constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, out_outIPICregisterDescription, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@registerExpression getRegisterAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_registerExpression::method_getRegisterAddress (const GGS_registerTable constinArgument_inRegisterTable,
                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                         const GGS_bool constinArgument_inWriteAccess,
                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                         GGS_uint & outArgument_outRegisterAddress,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_registerAddressList_4053 ;
  GGS_uint var_size_4084 ;
  GGS_registerProtection var_protection_4098 ;
  const GGS_registerExpression temp_0 = this ;
  GGS_bitSliceTable joker_4089_2 ; // Joker input parameter
  GGS_string joker_4089_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_0.readProperty_mRegisterName (), var_registerAddressList_4053, var_size_4084, joker_4089_2, joker_4089_1, var_protection_4098, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 112)) ;
  const GGS_registerExpression temp_1 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_1.readProperty_mRegisterName (), constinArgument_inWriteAccess, var_protection_4098, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 113)) ;
  GGS_sint_36__34_ var_offset_4273 ;
  const GGS_registerExpression temp_2 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_2.readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4273, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 115)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::lowerThan, var_offset_4273.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_registerExpression temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfOffsetExpression (), GGS_string ("offset (").add_operation (var_offset_4273.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)).add_operation (GGS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 117)) ;
      outArgument_outRegisterAddress.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_4273.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 118)).objectCompare (var_size_4084)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_registerExpression temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mEndOfOffsetExpression (), GGS_string ("this offset is too large: should be lower than ").add_operation (var_size_4084.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 119)) ;
        outArgument_outRegisterAddress.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      var_registerAddressList_4053.method_first (outArgument_outRegisterAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 121)) ;
      outArgument_outRegisterAddress = outArgument_outRegisterAddress.add_operation (var_offset_4273.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 122)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getRegisterAddress (cPtr_registerExpression * inObject,
                                             const GGS_registerTable constin_inRegisterTable,
                                             const GGS_constantMap constin_inConstantMap,
                                             const GGS_bool constin_inWriteAccess,
                                             GGS_stringset & io_ioUsedRegisters,
                                             GGS_uint & out_outRegisterAddress,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outRegisterAddress.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_registerExpression) ;
    inObject->method_getRegisterAddress (constin_inRegisterTable, constin_inConstantMap, constin_inWriteAccess, io_ioUsedRegisters, out_outRegisterAddress, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block enterReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterReferencedLabels (const GGS_ipic_31__38_Block inObject,
                                            const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                            const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                            GGS_stringset & ioArgument_ioReferencedBlockSet,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  extensionMethod_enterInstructionReferencedLabels (temp_0.readProperty_mInstructionList (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 957)) ;
  const GGS_ipic_31__38_Block temp_1 = inObject ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_1.readProperty_mTerminator ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 962)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block optimize'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_optimize (const GGS_ipic_31__38_Block inObject,
                               const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                               const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                               const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                               GGS_bool & ioArgument_ioOptimizationDone,
                               GGS_string & ioArgument_ioListFileContents,
                               GGS_ipic_31__38_Block & outArgument_outOptimizedBlock,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizedBlock.drop () ; // Release 'out' argument
  GGS_bool var_optimized_37080 ;
  GGS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_37157 ;
  {
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  const GGS_ipic_31__38_Block temp_1 = inObject ;
  routine_instructionListOptimization_3F__3F__3F__3F__3F__21__26__21_ (constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, temp_0.readProperty_mInstructionList (), temp_1.readProperty_mLabel (), var_optimized_37080, ioArgument_ioListFileContents, var_optimizedInstructionList_37157, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 979)) ;
  }
  const GGS_ipic_31__38_Block temp_2 = inObject ;
  GGS_ipic_31__38_AbstractBlockTerminator var_optimizedTerminator_37264 = temp_2.readProperty_mTerminator () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38_Block temp_4 = inObject ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, var_optimizedInstructionList_37157.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 991)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (temp_4.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 991)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_ipic_31__38_SequentialInstruction var_lastInstruction_37472 ;
      GGS_uint joker_37488_2 ; // Joker input parameter
      GGS_uint joker_37488_1 ; // Joker input parameter
      var_optimizedInstructionList_37157.method_last (var_lastInstruction_37472, joker_37488_2, joker_37488_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 992)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation var_op_37504 (dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *> (var_lastInstruction_37472.ptr ())) ;
        if (nullptr == var_op_37504.ptr ()) {
          test_5 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_5) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = constinArgument_inOptimizeFlagStruct.readProperty_mMOVLWfollowedByRETreplacedByRETLW ().operator_and (GGS_bool (ComparisonKind::equal, var_op_37504.readProperty_mLiteralInstruction ().objectCompare (GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 995)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 995)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              GGS_ipic_31__38_SequentialInstruction joker_37830_3 ; // Joker input parameter
              GGS_uint joker_37830_2 ; // Joker input parameter
              GGS_uint joker_37830_1 ; // Joker input parameter
              var_optimizedInstructionList_37157.setter_popLast (joker_37830_3, joker_37830_2, joker_37830_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 996)) ;
              }
              var_optimizedTerminator_37264 = GGS_ipic_31__38_RetlwTerminator::init_21__21_ (var_op_37504.readProperty_mInstructionLocation (), var_op_37504.readProperty_mLiteralValue (), inCompiler COMMA_HERE) ;
              var_optimized_37080 = GGS_bool (true) ;
              const GGS_ipic_31__38_Block temp_7 = inObject ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [M] ").add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)).add_operation (GGS_string (": MOVLW k ; RETURN --> RETLW k\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 999)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          GGS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_38123 (dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (var_lastInstruction_37472.ptr ())) ;
          if (nullptr == var_jsr_38123.ptr ()) {
            test_8 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_8) {
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRfollowedByRETreplacedByJUMP ().boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                {
                GGS_ipic_31__38_SequentialInstruction joker_38333_3 ; // Joker input parameter
                GGS_uint joker_38333_2 ; // Joker input parameter
                GGS_uint joker_38333_1 ; // Joker input parameter
                var_optimizedInstructionList_37157.setter_popLast (joker_38333_3, joker_38333_2, joker_38333_1, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1005)) ;
                }
                var_optimizedTerminator_37264 = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_jsr_38123.readProperty_mInstructionLocation (), var_jsr_38123.readProperty_mTargetLabel (), var_jsr_38123.readProperty_mKind (), inCompiler COMMA_HERE) ;
                var_optimized_37080 = GGS_bool (true) ;
                const GGS_ipic_31__38_Block temp_10 = inObject ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [J] ").add_operation (temp_10.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (GGS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (var_jsr_38123.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (GGS_string (" ; RETURN --> JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (var_jsr_38123.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1008)) ;
              }
            }
          }
        }
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = var_optimized_37080.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 1027)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_ipic_31__38_Block temp_12 = inObject ;
      const GGS_ipic_31__38_Block temp_13 = inObject ;
      callExtensionMethod_optimizeTerminator ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_12.readProperty_mTerminator ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, temp_13.readProperty_mLabel ().readProperty_string (), var_optimized_37080, ioArgument_ioListFileContents, var_optimizedTerminator_37264, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1028)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = var_optimized_37080.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      const GGS_ipic_31__38_Block temp_15 = inObject ;
      const GGS_ipic_31__38_Block temp_16 = inObject ;
      outArgument_outOptimizedBlock = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (temp_15.readProperty_mAddress (), temp_16.readProperty_mLabel (), var_optimizedInstructionList_37157, var_optimizedTerminator_37264, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1046)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    const GGS_ipic_31__38_Block temp_17 = inObject ;
    outArgument_outOptimizedBlock = temp_17 ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block performRelativesResolution'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_performRelativesResolution (const GGS_ipic_31__38_Block inObject,
                                                 const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                 const GGS_string constinArgument_inNextBlockLabel,
                                                 const GGS_uint constinArgument_inBlockStartAddress,
                                                 GGS_uint & ioArgument_ioConversionCount,
                                                 GGS_string & ioArgument_ioListFileContents,
                                                 GGS_ipic_31__38_Block & outArgument_outModifiedBlock,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outModifiedBlock.drop () ; // Release 'out' argument
  GGS_ipic_31__38_SequentialInstructionList var_modifiedInstructionList_367 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_address_440 = constinArgument_inBlockStartAddress ;
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_492 (temp_0.readProperty_mInstructionList ()) ;
  while (enumerator_492.hasCurrentObject ()) {
    GGS_ipic_31__38_SequentialInstruction var_modifiedInstruction_740 ;
    const GGS_ipic_31__38_Block temp_1 = inObject ;
    callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_492.current_mInstruction (HERE).ptr (), var_address_440, temp_1.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedInstruction_740, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 17)) ;
    var_modifiedInstructionList_367.addAssignOperation (var_modifiedInstruction_740, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 25)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 25)) ;
    var_address_440 = var_address_440.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_492.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 26)) ;
    enumerator_492.gotoNextObject () ;
  }
  GGS_ipic_31__38_AbstractBlockTerminator var_modifiedTerminator_1138 ;
  const GGS_ipic_31__38_Block temp_2 = inObject ;
  const GGS_ipic_31__38_Block temp_3 = inObject ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_2.readProperty_mTerminator ().ptr (), var_address_440, temp_3.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedTerminator_1138, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 29)) ;
  const GGS_ipic_31__38_Block temp_4 = inObject ;
  const GGS_ipic_31__38_Block temp_5 = inObject ;
  outArgument_outModifiedBlock = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (temp_4.readProperty_mAddress (), temp_5.readProperty_mLabel (), var_modifiedInstructionList_367, var_modifiedTerminator_1138, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 44)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@ipic18Block blockSize'
//--------------------------------------------------------------------------------------------------

GGS_uint extensionGetter_blockSize (const GGS_ipic_31__38_Block & inObject,
                                    const GGS_string & constinArgument_inNextBlockLabel,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint result_outResult ; // Returned variable
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  result_outResult = callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_0.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 92)) ;
  const GGS_ipic_31__38_Block temp_1 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_2778 (temp_1.readProperty_mInstructionList ()) ;
  while (enumerator_2778.hasCurrentObject ()) {
    result_outResult = result_outResult.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_2778.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 94)) ;
    enumerator_2778.gotoNextObject () ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block relativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_relativeBranchOverflow (const GGS_ipic_31__38_Block inObject,
                                             const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                             const GGS_string constinArgument_inNextBlockLabel,
                                             const GGS_uint constinArgument_inBlockStartAddress,
                                             GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_address_6298 = constinArgument_inBlockStartAddress ;
  const GGS_ipic_31__38_Block temp_0 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_6350 (temp_0.readProperty_mInstructionList ()) ;
  while (enumerator_6350.hasCurrentObject ()) {
    const GGS_ipic_31__38_Block temp_1 = inObject ;
    callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_6350.current_mInstruction (HERE).ptr (), var_address_6298, temp_1.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 201)) ;
    var_address_6298 = var_address_6298.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_6350.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 207)) ;
    enumerator_6350.gotoNextObject () ;
  }
  const GGS_ipic_31__38_Block temp_2 = inObject ;
  const GGS_ipic_31__38_Block temp_3 = inObject ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_2.readProperty_mTerminator ().ptr (), var_address_6298, temp_3.readProperty_mLabel ().readProperty_string (), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 210)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block generateCodeForBlock'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateCodeForBlock (const GGS_ipic_31__38_Block inObject,
                                           const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                           const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataMap,
                                           const GGS_uint constinArgument_inBlockAddress,
                                           const GGS_string constinArgument_inNextBlockLabel,
                                           GGS_string & ioArgument_ioListFileContents,
                                           GGS_string & ioArgument_ioAssemblyString,
                                           GGS_generatedCodeMap & ioArgument_ioGeneratedCodeMap,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Addr.  Code       Duration    Assembly                                           Intermediate Representation\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 98)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_Block temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 100)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      GGS_codeList temp_2 = GGS_codeList::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103)) ;
      const GGS_ipic_31__38_Block temp_3 = inObject ;
      temp_2.plusPlusAssignOperation (GGS_codeList_2E_element::init_21__21_ (temp_3.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103)), GGS_uintlist::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 103)) ;
      GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 104)) ;
      const GGS_ipic_31__38_Block temp_5 = inObject ;
      temp_4.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("LABEL ").add_operation (temp_5.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 104)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 104)) ;
      routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (constinArgument_inBlockAddress, temp_2, temp_4, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 105)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 101)) ;
      }
      const GGS_ipic_31__38_Block temp_6 = inObject ;
      ioArgument_ioAssemblyString.plusAssignOperation(temp_6.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 109)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_codeList var_cd_3550 = GGS_codeList::init (inCompiler COMMA_HERE) ;
    var_cd_3550.addAssignOperation (GGS_string ("ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 112)), GGS_uintlist::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 112)) ;
    const GGS_ipic_31__38_Block temp_7 = inObject ;
    var_cd_3550.addAssignOperation (temp_7.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 113)), GGS_uintlist::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 113)) ;
    {
    GGS_stringlist temp_8 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)) ;
    const GGS_ipic_31__38_Block temp_9 = inObject ;
    temp_8.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("LABEL ").add_operation (temp_9.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)).add_operation (GGS_string (", ORG "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)).add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 117)) ;
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (constinArgument_inBlockAddress, var_cd_3550, temp_8, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 118)), GGS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 114)) ;
    }
    ioArgument_ioAssemblyString.plusAssignOperation(GGS_string ("    ORG ").add_operation (constinArgument_inBlockAddress.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 122)) ;
    const GGS_ipic_31__38_Block temp_10 = inObject ;
    ioArgument_ioAssemblyString.plusAssignOperation(temp_10.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 123)) ;
  }
  GGS_uint var_address_4015 = constinArgument_inBlockAddress ;
  const GGS_ipic_31__38_Block temp_11 = inObject ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_4065 (temp_11.readProperty_mInstructionList ()) ;
  while (enumerator_4065.hasCurrentObject ()) {
    GGS_codeList var_code_4204 ;
    callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_4065.current_mInstruction (HERE).ptr (), var_address_4015, constinArgument_inSymbolTable, constinArgument_inDataMap, var_code_4204, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 128)) ;
    {
    ioArgument_ioGeneratedCodeMap.setter_insertKey (var_address_4015.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 134)).getter_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 134)), var_code_4204, enumerator_4065.current_mInstruction (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 134)) ;
    }
    {
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_address_4015, var_code_4204, callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4065.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 138)), enumerator_4065.current_mMin (HERE), enumerator_4065.current_mMax (HERE), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 135)) ;
    }
    UpEnumerator_codeList enumerator_4475 (var_code_4204) ;
    while (enumerator_4475.hasCurrentObject ()) {
      UpEnumerator_uintlist enumerator_4510 (enumerator_4475.current_mBinaryCode (HERE)) ;
      while (enumerator_4510.hasCurrentObject ()) {
        {
        routine_emitCode_3F_ (enumerator_4510.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 145)) ;
        }
        enumerator_4510.gotoNextObject () ;
      }
      ioArgument_ioAssemblyString.plusAssignOperation(enumerator_4475.current_mAssemblyCode (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 147)) ;
      enumerator_4475.gotoNextObject () ;
    }
    var_address_4015 = var_address_4015.add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4065.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 149)) ;
    GGS_uint var_generatedCodeSize_4759 = GGS_uint (uint32_t (0U)) ;
    UpEnumerator_codeList enumerator_4792 (var_code_4204) ;
    while (enumerator_4792.hasCurrentObject ()) {
      var_generatedCodeSize_4759 = var_generatedCodeSize_4759.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (enumerator_4792.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 153)) ;
      enumerator_4792.gotoNextObject () ;
    }
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::notEqual, var_generatedCodeSize_4759.objectCompare (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4065.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 155)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GGS_string var_s_4968 = GGS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_4759.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 156)).add_operation (GGS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4065.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 157)) ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 158)), var_s_4968, fixItArray13  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 158)) ;
        ioArgument_ioListFileContents.plusAssignOperation(var_s_4968.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 159)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 159)) ;
      }
    }
    enumerator_4065.gotoNextObject () ;
  }
  GGS_codeList var_code_5334 ;
  const GGS_ipic_31__38_Block temp_14 = inObject ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_14.readProperty_mTerminator ().ptr (), var_address_4015, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_code_5334, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 163)) ;
  {
  GGS_stringlist temp_15 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 172)) ;
  const GGS_ipic_31__38_Block temp_16 = inObject ;
  temp_15.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_16.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 172)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 172)) ;
  const GGS_ipic_31__38_Block temp_17 = inObject ;
  const GGS_ipic_31__38_Block temp_18 = inObject ;
  routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_address_4015, var_code_5334, temp_15, temp_17.readProperty_mTerminatorMin (), temp_18.readProperty_mTerminatorMax (), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 169)) ;
  }
  UpEnumerator_codeList enumerator_5557 (var_code_5334) ;
  while (enumerator_5557.hasCurrentObject ()) {
    UpEnumerator_uintlist enumerator_5590 (enumerator_5557.current_mBinaryCode (HERE)) ;
    while (enumerator_5590.hasCurrentObject ()) {
      {
      routine_emitCode_3F_ (enumerator_5590.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 179)) ;
      }
      enumerator_5590.gotoNextObject () ;
    }
    ioArgument_ioAssemblyString.plusAssignOperation(enumerator_5557.current_mAssemblyCode (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 181)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 181)) ;
    enumerator_5557.gotoNextObject () ;
  }
  GGS_bigint var_generatedCodeSize_5769 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 184)) ;
  UpEnumerator_codeList enumerator_5802 (var_code_5334) ;
  while (enumerator_5802.hasCurrentObject ()) {
    var_generatedCodeSize_5769 = var_generatedCodeSize_5769.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (enumerator_5802.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 186)).getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 186)) ;
    enumerator_5802.gotoNextObject () ;
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    const GGS_ipic_31__38_Block temp_20 = inObject ;
    test_19 = GGS_bool (ComparisonKind::notEqual, var_generatedCodeSize_5769.objectCompare (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_20.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 188)).getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 188)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_ipic_31__38_Block temp_21 = inObject ;
      GGS_string var_s_5999 = GGS_string ("*** INTERNAL ERROR ** generated code size (").add_operation (var_generatedCodeSize_5769.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 189)).add_operation (GGS_string (") != instruction size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_AbstractBlockTerminator *) temp_21.readProperty_mTerminator ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 190)) ;
      GenericArray <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_code_generation.galgas", 191)), var_s_5999, fixItArray22  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 191)) ;
      ioArgument_ioListFileContents.plusAssignOperation(var_s_5999.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 192)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 192)) ;
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 195)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@ipic18Block computeDuration'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_computeDuration (const GGS_ipic_31__38_Block inObject,
                                      GGS_blockDurationMap & ioArgument_ioExploredBlockMap,
                                      const GGS_string constinArgument_inNextLabel,
                                      GGS_ipic_31__38_Block & outArgument_outNewBlock,
                                      GGS_bool & ioArgument_ioContinue,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNewBlock.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_Block temp_1 = inObject ;
    const GGS_ipic_31__38_Block temp_2 = inObject ;
    test_0 = GGS_bool (ComparisonKind::lowerOrEqual, temp_1.readProperty_mTerminatorMin ().objectCompare (temp_2.readProperty_mTerminatorMax ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_Block temp_3 = inObject ;
      outArgument_outNewBlock = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_terminatorMin_22380 ;
    GGS_uint var_terminatorMax_22399 ;
    const GGS_ipic_31__38_Block temp_4 = inObject ;
    callExtensionMethod_terminatorMinMaxDuration ((cPtr_ipic_31__38_AbstractBlockTerminator *) temp_4.readProperty_mTerminator ().ptr (), ioArgument_ioExploredBlockMap, constinArgument_inNextLabel, var_terminatorMin_22380, var_terminatorMax_22399, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 593)) ;
    GGS_uint var_min_22422 = var_terminatorMin_22380 ;
    GGS_uint var_max_22450 = var_terminatorMax_22399 ;
    GGS_ipic_31__38_SequentialInstructionList var_computedInstructionList_22511 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    GGS_bool var_ok_22549 = GGS_bool (ComparisonKind::lowerOrEqual, var_min_22422.objectCompare (var_max_22450)) ;
    const GGS_ipic_31__38_Block temp_5 = inObject ;
    DownEnumerator_ipic_31__38_SequentialInstructionList enumerator_22584 (temp_5.readProperty_mInstructionList ()) ;
    while (enumerator_22584.hasCurrentObject ()) {
      GGS_uint var_instructionMin_22691 ;
      GGS_uint var_instructionMax_22725 ;
      callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_22584.current_mInstruction (HERE).ptr (), ioArgument_ioExploredBlockMap, var_instructionMin_22691, var_instructionMax_22725, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 599)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        GGS_bool test_7 = var_ok_22549 ;
        if (GalgasBool::boolTrue == test_7.boolEnum ()) {
          test_7 = GGS_bool (ComparisonKind::lowerOrEqual, var_instructionMin_22691.objectCompare (var_instructionMax_22725)) ;
        }
        test_6 = test_7.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          var_min_22422 = var_min_22422.add_operation (var_instructionMin_22691, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 605)) ;
          var_max_22450 = var_max_22450.add_operation (var_instructionMax_22725, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 606)) ;
          {
          var_computedInstructionList_22511.setter_insertAtIndex (enumerator_22584.current_mInstruction (HERE), var_min_22422, var_max_22450, GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 607)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        var_ok_22549 = GGS_bool (false) ;
        {
        var_computedInstructionList_22511.setter_insertAtIndex (enumerator_22584.current_mInstruction (HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 610)), GGS_uint (uint32_t (0U)), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 610)) ;
        }
      }
      enumerator_22584.gotoNextObject () ;
    }
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_ok_22549.boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_ipic_31__38_Block temp_9 = inObject ;
        const GGS_ipic_31__38_Block temp_10 = inObject ;
        const GGS_ipic_31__38_Block temp_11 = inObject ;
        outArgument_outNewBlock = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (temp_9.readProperty_mAddress (), temp_10.readProperty_mLabel (), var_computedInstructionList_22511, temp_11.readProperty_mTerminator (), var_terminatorMin_22380, var_terminatorMax_22399, inCompiler COMMA_HERE) ;
        ioArgument_ioContinue = GGS_bool (true) ;
        {
        const GGS_ipic_31__38_Block temp_12 = inObject ;
        ioArgument_ioExploredBlockMap.setter_insertKey (temp_12.readProperty_mLabel (), var_min_22422, var_max_22450, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 623)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      const GGS_ipic_31__38_Block temp_13 = inObject ;
      outArgument_outNewBlock = temp_13 ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

GGS_piccoloDeviceModel::GGS_piccoloDeviceModel (void) :
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

GGS_piccoloDeviceModel::GGS_piccoloDeviceModel (const GGS_piccoloDeviceModel & inSource) :
mProperty_mDeviceName (inSource.mProperty_mDeviceName),
mProperty_mProcessorType (inSource.mProperty_mProcessorType),
mProperty_mRomSize (inSource.mProperty_mRomSize),
mProperty_mBankCount (inSource.mProperty_mBankCount),
mProperty_mRegisterTable (inSource.mProperty_mRegisterTable),
mProperty_mRamBankTable (inSource.mProperty_mRamBankTable),
mProperty_mEepromSize (inSource.mProperty_mEepromSize),
mProperty_mEepromAddress (inSource.mProperty_mEepromAddress),
mProperty_mConfigRegisterMap (inSource.mProperty_mConfigRegisterMap),
mProperty_mSharedBankName (inSource.mProperty_mSharedBankName) {
}

//--------------------------------------------------------------------------------------------------

GGS_piccoloDeviceModel & GGS_piccoloDeviceModel::operator = (const GGS_piccoloDeviceModel & inSource) {
  mProperty_mDeviceName = inSource.mProperty_mDeviceName ;
  mProperty_mProcessorType = inSource.mProperty_mProcessorType ;
  mProperty_mRomSize = inSource.mProperty_mRomSize ;
  mProperty_mBankCount = inSource.mProperty_mBankCount ;
  mProperty_mRegisterTable = inSource.mProperty_mRegisterTable ;
  mProperty_mRamBankTable = inSource.mProperty_mRamBankTable ;
  mProperty_mEepromSize = inSource.mProperty_mEepromSize ;
  mProperty_mEepromAddress = inSource.mProperty_mEepromAddress ;
  mProperty_mConfigRegisterMap = inSource.mProperty_mConfigRegisterMap ;
  mProperty_mSharedBankName = inSource.mProperty_mSharedBankName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_piccoloDeviceModel GGS_piccoloDeviceModel::init_21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mDeviceName,
                                                                                             const GGS_processorType & in_mProcessorType,
                                                                                             const GGS_luint & in_mRomSize,
                                                                                             const GGS_luint & in_mBankCount,
                                                                                             const GGS_registerTable & in_mRegisterTable,
                                                                                             const GGS_ramBankTable & in_mRamBankTable,
                                                                                             const GGS_uint & in_mEepromSize,
                                                                                             const GGS_uint & in_mEepromAddress,
                                                                                             const GGS_configRegisterMap & in_mConfigRegisterMap,
                                                                                             const GGS_string & in_mSharedBankName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_piccoloDeviceModel result ;
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

void GGS_piccoloDeviceModel::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_piccoloDeviceModel::GGS_piccoloDeviceModel (const GGS_lstring & inOperand0,
                                                const GGS_processorType & inOperand1,
                                                const GGS_luint & inOperand2,
                                                const GGS_luint & inOperand3,
                                                const GGS_registerTable & inOperand4,
                                                const GGS_ramBankTable & inOperand5,
                                                const GGS_uint & inOperand6,
                                                const GGS_uint & inOperand7,
                                                const GGS_configRegisterMap & inOperand8,
                                                const GGS_string & inOperand9) :
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

GGS_piccoloDeviceModel GGS_piccoloDeviceModel::class_func_new (const GGS_lstring & in_mDeviceName,
                                                               const GGS_processorType & in_mProcessorType,
                                                               const GGS_luint & in_mRomSize,
                                                               const GGS_luint & in_mBankCount,
                                                               const GGS_registerTable & in_mRegisterTable,
                                                               const GGS_ramBankTable & in_mRamBankTable,
                                                               const GGS_uint & in_mEepromSize,
                                                               const GGS_uint & in_mEepromAddress,
                                                               const GGS_configRegisterMap & in_mConfigRegisterMap,
                                                               const GGS_string & in_mSharedBankName,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_piccoloDeviceModel result ;
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

bool GGS_piccoloDeviceModel::isValid (void) const {
  return mProperty_mDeviceName.isValid () && mProperty_mProcessorType.isValid () && mProperty_mRomSize.isValid () && mProperty_mBankCount.isValid () && mProperty_mRegisterTable.isValid () && mProperty_mRamBankTable.isValid () && mProperty_mEepromSize.isValid () && mProperty_mEepromAddress.isValid () && mProperty_mConfigRegisterMap.isValid () && mProperty_mSharedBankName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_piccoloDeviceModel::drop (void) {
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

void GGS_piccoloDeviceModel::description (String & ioString,
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
//     @piccoloDeviceModel generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_piccoloDeviceModel ("piccoloDeviceModel",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_piccoloDeviceModel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_piccoloDeviceModel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_piccoloDeviceModel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_piccoloDeviceModel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_piccoloDeviceModel GGS_piccoloDeviceModel::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_piccoloDeviceModel result ;
  const GGS_piccoloDeviceModel * p = (const GGS_piccoloDeviceModel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_piccoloDeviceModel *> (p)) {
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

void cGrammar_piccoloDevice_5F_grammar::nt_start_5F_symbol_ (GGS_piccoloDeviceModel & parameter_1,
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
                                GGS_lstring inFilePath,
                                GGS_piccoloDeviceModel &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
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
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_piccoloDeviceModel &  parameter_1
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

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) :
mProperty_mValue_30_ (inSource.mProperty_mValue_30_),
mProperty_mValue_31_ (inSource.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element & GGS__32_lstringlist_2E_element::operator = (const GGS__32_lstringlist_2E_element & inSource) {
  mProperty_mValue_30_ = inSource.mProperty_mValue_30_ ;
  mProperty_mValue_31_ = inSource.mProperty_mValue_31_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::class_func_new (const GGS_lstring & in_mValue0,
                                                                               const GGS_lstring & in_mValue1,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue0 ;
  result.mProperty_mValue_31_ = in_mValue1 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
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
//     @2lstringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element::GGS_bitSliceTable_2E_element (void) :
mProperty_lkey (),
mProperty_mSliceIndex (),
mProperty_mSliceSize () {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element::GGS_bitSliceTable_2E_element (const GGS_bitSliceTable_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mSliceIndex (inSource.mProperty_mSliceIndex),
mProperty_mSliceSize (inSource.mProperty_mSliceSize) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element & GGS_bitSliceTable_2E_element::operator = (const GGS_bitSliceTable_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mSliceIndex = inSource.mProperty_mSliceIndex ;
  mProperty_mSliceSize = inSource.mProperty_mSliceSize ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_bitSliceTable_2E_element GGS_bitSliceTable_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_uint & in_mSliceIndex,
                                                                             const GGS_uint & in_mSliceSize,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bitSliceTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSliceIndex = in_mSliceIndex ;
  result.mProperty_mSliceSize = in_mSliceSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element::GGS_bitSliceTable_2E_element (const GGS_lstring & inOperand0,
                                                            const GGS_uint & inOperand1,
                                                            const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mSliceIndex (inOperand1),
mProperty_mSliceSize (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element GGS_bitSliceTable_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                           const GGS_uint & in_mSliceIndex,
                                                                           const GGS_uint & in_mSliceSize,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bitSliceTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSliceIndex = in_mSliceIndex ;
  result.mProperty_mSliceSize = in_mSliceSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bitSliceTable_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSliceIndex.isValid () && mProperty_mSliceSize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSliceIndex.drop () ;
  mProperty_mSliceSize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bitSliceTable.element:") ;
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
//     @bitSliceTable.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitSliceTable_2E_element ("bitSliceTable.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitSliceTable_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitSliceTable_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitSliceTable_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element GGS_bitSliceTable_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_bitSliceTable_2E_element result ;
  const GGS_bitSliceTable_2E_element * p = (const GGS_bitSliceTable_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitSliceTable_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitSliceTable.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @bitSliceTable_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element_3F_::GGS_bitSliceTable_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element_3F_::GGS_bitSliceTable_2E_element_3F_ (const GGS_bitSliceTable_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element_3F_ GGS_bitSliceTable_2E_element_3F_::init_nil (void) {
  GGS_bitSliceTable_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bitSliceTable_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bitSliceTable_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_bitSliceTable_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bitSliceTable_2E_element_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bitSliceTable.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bitSliceTable_2E_element_3F_ ("bitSliceTable.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bitSliceTable_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bitSliceTable_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bitSliceTable_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bitSliceTable_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bitSliceTable_2E_element_3F_ GGS_bitSliceTable_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_bitSliceTable_2E_element_3F_ result ;
  const GGS_bitSliceTable_2E_element_3F_ * p = (const GGS_bitSliceTable_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bitSliceTable_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bitSliceTable.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element::GGS_ramDefinitionList_2E_element (void) :
mProperty_mBankName (),
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element::GGS_ramDefinitionList_2E_element (const GGS_ramDefinitionList_2E_element & inSource) :
mProperty_mBankName (inSource.mProperty_mBankName),
mProperty_mDeclaration (inSource.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element & GGS_ramDefinitionList_2E_element::operator = (const GGS_ramDefinitionList_2E_element & inSource) {
  mProperty_mBankName = inSource.mProperty_mBankName ;
  mProperty_mDeclaration = inSource.mProperty_mDeclaration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ramDefinitionList_2E_element GGS_ramDefinitionList_2E_element::init_21__21_ (const GGS_lstring & in_mBankName,
                                                                                 const GGS_declarationInRamList & in_mDeclaration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ramDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBankName = in_mBankName ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element::GGS_ramDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_declarationInRamList & inOperand1) :
mProperty_mBankName (inOperand0),
mProperty_mDeclaration (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element GGS_ramDefinitionList_2E_element::class_func_new (const GGS_lstring & in_mBankName,
                                                                                   const GGS_declarationInRamList & in_mDeclaration,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ramDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBankName = in_mBankName ;
  result.mProperty_mDeclaration = in_mDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ramDefinitionList_2E_element::isValid (void) const {
  return mProperty_mBankName.isValid () && mProperty_mDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList_2E_element::drop (void) {
  mProperty_mBankName.drop () ;
  mProperty_mDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramDefinitionList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ramDefinitionList.element:") ;
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
//     @ramDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramDefinitionList_2E_element ("ramDefinitionList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ramDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ramDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ramDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramDefinitionList_2E_element GGS_ramDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ramDefinitionList_2E_element result ;
  const GGS_ramDefinitionList_2E_element * p = (const GGS_ramDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ramDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element::GGS_configSettingList_2E_element (void) :
mProperty_mSettingName (),
mProperty_mSettingValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element::GGS_configSettingList_2E_element (const GGS_configSettingList_2E_element & inSource) :
mProperty_mSettingName (inSource.mProperty_mSettingName),
mProperty_mSettingValue (inSource.mProperty_mSettingValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element & GGS_configSettingList_2E_element::operator = (const GGS_configSettingList_2E_element & inSource) {
  mProperty_mSettingName = inSource.mProperty_mSettingName ;
  mProperty_mSettingValue = inSource.mProperty_mSettingValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_configSettingList_2E_element GGS_configSettingList_2E_element::init_21__21_ (const GGS_lstring & in_mSettingName,
                                                                                 const GGS_lstring & in_mSettingValue,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configSettingList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSettingName = in_mSettingName ;
  result.mProperty_mSettingValue = in_mSettingValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element::GGS_configSettingList_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_lstring & inOperand1) :
mProperty_mSettingName (inOperand0),
mProperty_mSettingValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element GGS_configSettingList_2E_element::class_func_new (const GGS_lstring & in_mSettingName,
                                                                                   const GGS_lstring & in_mSettingValue,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configSettingList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSettingName = in_mSettingName ;
  result.mProperty_mSettingValue = in_mSettingValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configSettingList_2E_element::isValid (void) const {
  return mProperty_mSettingName.isValid () && mProperty_mSettingValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList_2E_element::drop (void) {
  mProperty_mSettingName.drop () ;
  mProperty_mSettingValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configSettingList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configSettingList.element:") ;
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
//     @configSettingList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configSettingList_2E_element ("configSettingList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configSettingList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configSettingList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configSettingList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configSettingList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configSettingList_2E_element GGS_configSettingList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_configSettingList_2E_element result ;
  const GGS_configSettingList_2E_element * p = (const GGS_configSettingList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configSettingList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configSettingList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element::GGS_immediatSliceExpressionList_2E_element (void) :
mProperty_mSliceName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element::GGS_immediatSliceExpressionList_2E_element (const GGS_immediatSliceExpressionList_2E_element & inSource) :
mProperty_mSliceName (inSource.mProperty_mSliceName),
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element & GGS_immediatSliceExpressionList_2E_element::operator = (const GGS_immediatSliceExpressionList_2E_element & inSource) {
  mProperty_mSliceName = inSource.mProperty_mSliceName ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element GGS_immediatSliceExpressionList_2E_element::init_21__21_ (const GGS_lstring & in_mSliceName,
                                                                                                     const GGS_immediatExpression & in_mExpression,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_immediatSliceExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceName = in_mSliceName ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element::GGS_immediatSliceExpressionList_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_immediatExpression & inOperand1) :
mProperty_mSliceName (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element GGS_immediatSliceExpressionList_2E_element::class_func_new (const GGS_lstring & in_mSliceName,
                                                                                                       const GGS_immediatExpression & in_mExpression,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_immediatSliceExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSliceName = in_mSliceName ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_immediatSliceExpressionList_2E_element::isValid (void) const {
  return mProperty_mSliceName.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList_2E_element::drop (void) {
  mProperty_mSliceName.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatSliceExpressionList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @immediatSliceExpressionList.element:") ;
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
//     @immediatSliceExpressionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatSliceExpressionList_2E_element ("immediatSliceExpressionList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatSliceExpressionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatSliceExpressionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatSliceExpressionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatSliceExpressionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatSliceExpressionList_2E_element GGS_immediatSliceExpressionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_immediatSliceExpressionList_2E_element result ;
  const GGS_immediatSliceExpressionList_2E_element * p = (const GGS_immediatSliceExpressionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatSliceExpressionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatSliceExpressionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element::GGS_constantDefinitionList_2E_element (void) :
mProperty_mConstantName (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element::GGS_constantDefinitionList_2E_element (const GGS_constantDefinitionList_2E_element & inSource) :
mProperty_mConstantName (inSource.mProperty_mConstantName),
mProperty_mExpression (inSource.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element & GGS_constantDefinitionList_2E_element::operator = (const GGS_constantDefinitionList_2E_element & inSource) {
  mProperty_mConstantName = inSource.mProperty_mConstantName ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constantDefinitionList_2E_element GGS_constantDefinitionList_2E_element::init_21__21_ (const GGS_lstring & in_mConstantName,
                                                                                           const GGS_immediatExpression & in_mExpression,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element::GGS_constantDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_immediatExpression & inOperand1) :
mProperty_mConstantName (inOperand0),
mProperty_mExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element GGS_constantDefinitionList_2E_element::class_func_new (const GGS_lstring & in_mConstantName,
                                                                                             const GGS_immediatExpression & in_mExpression,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mConstantName = in_mConstantName ;
  result.mProperty_mExpression = in_mExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantDefinitionList_2E_element::isValid (void) const {
  return mProperty_mConstantName.isValid () && mProperty_mExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList_2E_element::drop (void) {
  mProperty_mConstantName.drop () ;
  mProperty_mExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantDefinitionList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantDefinitionList.element:") ;
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
//     @constantDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantDefinitionList_2E_element ("constantDefinitionList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantDefinitionList_2E_element GGS_constantDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_constantDefinitionList_2E_element result ;
  const GGS_constantDefinitionList_2E_element * p = (const GGS_constantDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element::GGS_actualConfigurationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddress (),
mProperty_mRegisterValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element::GGS_actualConfigurationMap_2E_element (const GGS_actualConfigurationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRegisterAddress (inSource.mProperty_mRegisterAddress),
mProperty_mRegisterValue (inSource.mProperty_mRegisterValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element & GGS_actualConfigurationMap_2E_element::operator = (const GGS_actualConfigurationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRegisterAddress = inSource.mProperty_mRegisterAddress ;
  mProperty_mRegisterValue = inSource.mProperty_mRegisterValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element GGS_actualConfigurationMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_uint & in_mRegisterAddress,
                                                                                               const GGS_uint & in_mRegisterValue,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualConfigurationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mRegisterValue = in_mRegisterValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element::GGS_actualConfigurationMap_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_uint & inOperand1,
                                                                              const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mRegisterValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element GGS_actualConfigurationMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                             const GGS_uint & in_mRegisterAddress,
                                                                                             const GGS_uint & in_mRegisterValue,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualConfigurationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mRegisterValue = in_mRegisterValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualConfigurationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualConfigurationMap.element:") ;
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
//     @actualConfigurationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element ("actualConfigurationMap.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualConfigurationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualConfigurationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualConfigurationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element GGS_actualConfigurationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_actualConfigurationMap_2E_element result ;
  const GGS_actualConfigurationMap_2E_element * p = (const GGS_actualConfigurationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualConfigurationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualConfigurationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @actualConfigurationMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element_3F_::GGS_actualConfigurationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element_3F_::GGS_actualConfigurationMap_2E_element_3F_ (const GGS_actualConfigurationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element_3F_ GGS_actualConfigurationMap_2E_element_3F_::init_nil (void) {
  GGS_actualConfigurationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualConfigurationMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualConfigurationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_actualConfigurationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualConfigurationMap_2E_element_3F_::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualConfigurationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element_3F_ ("actualConfigurationMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualConfigurationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualConfigurationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actualConfigurationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actualConfigurationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualConfigurationMap_2E_element_3F_ GGS_actualConfigurationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_actualConfigurationMap_2E_element_3F_ result ;
  const GGS_actualConfigurationMap_2E_element_3F_ * p = (const GGS_actualConfigurationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actualConfigurationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualConfigurationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element::GGS_labelMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element::GGS_labelMap_2E_element (const GGS_labelMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element & GGS_labelMap_2E_element::operator = (const GGS_labelMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_labelMap_2E_element GGS_labelMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_labelMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element::GGS_labelMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element GGS_labelMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_labelMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_labelMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @labelMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @labelMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap_2E_element ("labelMap.element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_labelMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_labelMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_labelMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element GGS_labelMap_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_labelMap_2E_element result ;
  const GGS_labelMap_2E_element * p = (const GGS_labelMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_labelMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @labelMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element_3F_::GGS_labelMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element_3F_::GGS_labelMap_2E_element_3F_ (const GGS_labelMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element_3F_ GGS_labelMap_2E_element_3F_::init_nil (void) {
  GGS_labelMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_labelMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_labelMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_labelMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_labelMap_2E_element_3F_::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @labelMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_labelMap_2E_element_3F_ ("labelMap.element?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_labelMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_labelMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_labelMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_labelMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_labelMap_2E_element_3F_ GGS_labelMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_labelMap_2E_element_3F_ result ;
  const GGS_labelMap_2E_element_3F_ * p = (const GGS_labelMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_labelMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("labelMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (void) :
mProperty_lkey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (const GGS_constantMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element & GGS_constantMap_2E_element::operator = (const GGS_constantMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_constantMap_2E_element GGS_constantMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                     const GGS_sint_36__34_ & in_mValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element::GGS_constantMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_sint_36__34_ & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element GGS_constantMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                       const GGS_sint_36__34_ & in_mValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @constantMap.element:") ;
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
//     @constantMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element ("constantMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element GGS_constantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_constantMap_2E_element result ;
  const GGS_constantMap_2E_element * p = (const GGS_constantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @constantMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_::GGS_constantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_::GGS_constantMap_2E_element_3F_ (const GGS_constantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap_2E_element_3F_::init_nil (void) {
  GGS_constantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_constantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantMap_2E_element_3F_::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @constantMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ("constantMap.element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_constantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_constantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantMap_2E_element_3F_ GGS_constantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_constantMap_2E_element_3F_ result ;
  const GGS_constantMap_2E_element_3F_ * p = (const GGS_constantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_constantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("constantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element::GGS_routineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIsNoReturn (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element::GGS_routineMap_2E_element (const GGS_routineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mRequiredBank (inSource.mProperty_mRequiredBank),
mProperty_mReturnedBank (inSource.mProperty_mReturnedBank),
mProperty_mPreservesBank (inSource.mProperty_mPreservesBank) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element & GGS_routineMap_2E_element::operator = (const GGS_routineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mRequiredBank = inSource.mProperty_mRequiredBank ;
  mProperty_mReturnedBank = inSource.mProperty_mReturnedBank ;
  mProperty_mPreservesBank = inSource.mProperty_mPreservesBank ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineMap_2E_element GGS_routineMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                               const GGS_bool & in_mIsNoReturn,
                                                                               const GGS_uint & in_mRequiredBank,
                                                                               const GGS_uint & in_mReturnedBank,
                                                                               const GGS_bool & in_mPreservesBank,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element::GGS_routineMap_2E_element (const GGS_lstring & inOperand0,
                                                      const GGS_bool & inOperand1,
                                                      const GGS_uint & inOperand2,
                                                      const GGS_uint & inOperand3,
                                                      const GGS_bool & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mIsNoReturn (inOperand1),
mProperty_mRequiredBank (inOperand2),
mProperty_mReturnedBank (inOperand3),
mProperty_mPreservesBank (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element GGS_routineMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                     const GGS_bool & in_mIsNoReturn,
                                                                     const GGS_uint & in_mRequiredBank,
                                                                     const GGS_uint & in_mReturnedBank,
                                                                     const GGS_bool & in_mPreservesBank,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineMap.element:") ;
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
//     @routineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap_2E_element ("routineMap.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element GGS_routineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineMap_2E_element result ;
  const GGS_routineMap_2E_element * p = (const GGS_routineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @routineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element_3F_::GGS_routineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element_3F_::GGS_routineMap_2E_element_3F_ (const GGS_routineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element_3F_ GGS_routineMap_2E_element_3F_::init_nil (void) {
  GGS_routineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_routineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineMap_2E_element_3F_::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineMap_2E_element_3F_ ("routineMap.element?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineMap_2E_element_3F_ GGS_routineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineMap_2E_element_3F_ result ;
  const GGS_routineMap_2E_element_3F_ * p = (const GGS_routineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element::GGS_symbolTableForOptimizations_2E_element (void) :
mProperty_lkey (),
mProperty_mDefinitionLineIndex (),
mProperty_mIsDeletable () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element::GGS_symbolTableForOptimizations_2E_element (const GGS_symbolTableForOptimizations_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mDefinitionLineIndex (inSource.mProperty_mDefinitionLineIndex),
mProperty_mIsDeletable (inSource.mProperty_mIsDeletable) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element & GGS_symbolTableForOptimizations_2E_element::operator = (const GGS_symbolTableForOptimizations_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mDefinitionLineIndex = inSource.mProperty_mDefinitionLineIndex ;
  mProperty_mIsDeletable = inSource.mProperty_mIsDeletable ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element GGS_symbolTableForOptimizations_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                         const GGS_uint & in_mDefinitionLineIndex,
                                                                                                         const GGS_bool & in_mIsDeletable,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionLineIndex = in_mDefinitionLineIndex ;
  result.mProperty_mIsDeletable = in_mIsDeletable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element::GGS_symbolTableForOptimizations_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_uint & inOperand1,
                                                                                        const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionLineIndex (inOperand1),
mProperty_mIsDeletable (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element GGS_symbolTableForOptimizations_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                       const GGS_uint & in_mDefinitionLineIndex,
                                                                                                       const GGS_bool & in_mIsDeletable,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionLineIndex = in_mDefinitionLineIndex ;
  result.mProperty_mIsDeletable = in_mIsDeletable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForOptimizations_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionLineIndex.isValid () && mProperty_mIsDeletable.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionLineIndex.drop () ;
  mProperty_mIsDeletable.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForOptimizations.element:") ;
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
//     @symbolTableForOptimizations.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element ("symbolTableForOptimizations.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForOptimizations_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForOptimizations_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForOptimizations_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element GGS_symbolTableForOptimizations_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations_2E_element result ;
  const GGS_symbolTableForOptimizations_2E_element * p = (const GGS_symbolTableForOptimizations_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForOptimizations_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @symbolTableForOptimizations_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element_3F_::GGS_symbolTableForOptimizations_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element_3F_::GGS_symbolTableForOptimizations_2E_element_3F_ (const GGS_symbolTableForOptimizations_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element_3F_ GGS_symbolTableForOptimizations_2E_element_3F_::init_nil (void) {
  GGS_symbolTableForOptimizations_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForOptimizations_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForOptimizations_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_symbolTableForOptimizations_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForOptimizations_2E_element_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForOptimizations.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element_3F_ ("symbolTableForOptimizations.element?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForOptimizations_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForOptimizations_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForOptimizations_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForOptimizations_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForOptimizations_2E_element_3F_ GGS_symbolTableForOptimizations_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_symbolTableForOptimizations_2E_element_3F_ result ;
  const GGS_symbolTableForOptimizations_2E_element_3F_ * p = (const GGS_symbolTableForOptimizations_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForOptimizations_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForOptimizations.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element::GGS_configFieldMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRegisterName (),
mProperty_mMaskValue (),
mProperty_mDescription (),
mProperty_mFieldSettingMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element::GGS_configFieldMap_2E_element (const GGS_configFieldMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRegisterName (inSource.mProperty_mRegisterName),
mProperty_mMaskValue (inSource.mProperty_mMaskValue),
mProperty_mDescription (inSource.mProperty_mDescription),
mProperty_mFieldSettingMap (inSource.mProperty_mFieldSettingMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element & GGS_configFieldMap_2E_element::operator = (const GGS_configFieldMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRegisterName = inSource.mProperty_mRegisterName ;
  mProperty_mMaskValue = inSource.mProperty_mMaskValue ;
  mProperty_mDescription = inSource.mProperty_mDescription ;
  mProperty_mFieldSettingMap = inSource.mProperty_mFieldSettingMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_configFieldMap_2E_element GGS_configFieldMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_lstring & in_mRegisterName,
                                                                                       const GGS_luint & in_mMaskValue,
                                                                                       const GGS_lstring & in_mDescription,
                                                                                       const GGS_fieldSettingMap & in_mFieldSettingMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configFieldMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mMaskValue = in_mMaskValue ;
  result.mProperty_mDescription = in_mDescription ;
  result.mProperty_mFieldSettingMap = in_mFieldSettingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element::GGS_configFieldMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_lstring & inOperand1,
                                                              const GGS_luint & inOperand2,
                                                              const GGS_lstring & inOperand3,
                                                              const GGS_fieldSettingMap & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mRegisterName (inOperand1),
mProperty_mMaskValue (inOperand2),
mProperty_mDescription (inOperand3),
mProperty_mFieldSettingMap (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element GGS_configFieldMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                             const GGS_lstring & in_mRegisterName,
                                                                             const GGS_luint & in_mMaskValue,
                                                                             const GGS_lstring & in_mDescription,
                                                                             const GGS_fieldSettingMap & in_mFieldSettingMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configFieldMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterName = in_mRegisterName ;
  result.mProperty_mMaskValue = in_mMaskValue ;
  result.mProperty_mDescription = in_mDescription ;
  result.mProperty_mFieldSettingMap = in_mFieldSettingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configFieldMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterName.isValid () && mProperty_mMaskValue.isValid () && mProperty_mDescription.isValid () && mProperty_mFieldSettingMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterName.drop () ;
  mProperty_mMaskValue.drop () ;
  mProperty_mDescription.drop () ;
  mProperty_mFieldSettingMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configFieldMap.element:") ;
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
//     @configFieldMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configFieldMap_2E_element ("configFieldMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configFieldMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configFieldMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configFieldMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element GGS_configFieldMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_configFieldMap_2E_element result ;
  const GGS_configFieldMap_2E_element * p = (const GGS_configFieldMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configFieldMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @configFieldMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_::GGS_configFieldMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_::GGS_configFieldMap_2E_element_3F_ (const GGS_configFieldMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_ GGS_configFieldMap_2E_element_3F_::init_nil (void) {
  GGS_configFieldMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configFieldMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configFieldMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_configFieldMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap_2E_element_3F_::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configFieldMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configFieldMap_2E_element_3F_ ("configFieldMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configFieldMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configFieldMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configFieldMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_ GGS_configFieldMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_configFieldMap_2E_element_3F_ result ;
  const GGS_configFieldMap_2E_element_3F_ * p = (const GGS_configFieldMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configFieldMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element::GGS_baseline_5F_routineDefinitionList_2E_element (void) :
mProperty_mRoutineName (),
mProperty_mPage (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element::GGS_baseline_5F_routineDefinitionList_2E_element (const GGS_baseline_5F_routineDefinitionList_2E_element & inSource) :
mProperty_mRoutineName (inSource.mProperty_mRoutineName),
mProperty_mPage (inSource.mProperty_mPage),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfRoutineLocation (inSource.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element & GGS_baseline_5F_routineDefinitionList_2E_element::operator = (const GGS_baseline_5F_routineDefinitionList_2E_element & inSource) {
  mProperty_mRoutineName = inSource.mProperty_mRoutineName ;
  mProperty_mPage = inSource.mProperty_mPage ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfRoutineLocation = inSource.mProperty_mEndOfRoutineLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element GGS_baseline_5F_routineDefinitionList_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                                                                                             const GGS_luint & in_mPage,
                                                                                                                             const GGS_bool & in_mIsNoReturn,
                                                                                                                             const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                                             const GGS_location & in_mEndOfRoutineLocation,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_routineDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mPage = in_mPage ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element::GGS_baseline_5F_routineDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                                                    const GGS_luint & inOperand1,
                                                                                                    const GGS_bool & inOperand2,
                                                                                                    const GGS_baseline_5F_instructionList & inOperand3,
                                                                                                    const GGS_location & inOperand4) :
mProperty_mRoutineName (inOperand0),
mProperty_mPage (inOperand1),
mProperty_mIsNoReturn (inOperand2),
mProperty_mInstructionList (inOperand3),
mProperty_mEndOfRoutineLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element GGS_baseline_5F_routineDefinitionList_2E_element::class_func_new (const GGS_lstring & in_mRoutineName,
                                                                                                                   const GGS_luint & in_mPage,
                                                                                                                   const GGS_bool & in_mIsNoReturn,
                                                                                                                   const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                                   const GGS_location & in_mEndOfRoutineLocation,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_routineDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mPage = in_mPage ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfRoutineLocation = in_mEndOfRoutineLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_routineDefinitionList_2E_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mPage.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList_2E_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mPage.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_routineDefinitionList.element:") ;
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
//     @baseline_routineDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2E_element ("baseline_routineDefinitionList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_routineDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_routineDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_routineDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element GGS_baseline_5F_routineDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_routineDefinitionList_2E_element result ;
  const GGS_baseline_5F_routineDefinitionList_2E_element * p = (const GGS_baseline_5F_routineDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_routineDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_routineDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element::GGS_baseline_5F_declaredRoutineMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element::GGS_baseline_5F_declaredRoutineMap_2E_element (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element & GGS_baseline_5F_declaredRoutineMap_2E_element::operator = (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element GGS_baseline_5F_declaredRoutineMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element::GGS_baseline_5F_declaredRoutineMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element GGS_baseline_5F_declaredRoutineMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_declaredRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_declaredRoutineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_declaredRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element ("baseline_declaredRoutineMap.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_declaredRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_declaredRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_declaredRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element GGS_baseline_5F_declaredRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap_2E_element result ;
  const GGS_baseline_5F_declaredRoutineMap_2E_element * p = (const GGS_baseline_5F_declaredRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_declaredRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @baseline_5F_declaredRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ (const GGS_baseline_5F_declaredRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_baseline_5F_declaredRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_declaredRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element_3F_ ("baseline_declaredRoutineMap.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ result ;
  const GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ * p = (const GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element::GGS_baselineRoutineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIsNoReturn (),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element::GGS_baselineRoutineMap_2E_element (const GGS_baselineRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mPage (inSource.mProperty_mPage) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element & GGS_baselineRoutineMap_2E_element::operator = (const GGS_baselineRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mPage = inSource.mProperty_mPage ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element GGS_baselineRoutineMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_bool & in_mIsNoReturn,
                                                                                       const GGS_luint & in_mPage,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baselineRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mPage = in_mPage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element::GGS_baselineRoutineMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_bool & inOperand1,
                                                                      const GGS_luint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mIsNoReturn (inOperand1),
mProperty_mPage (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element GGS_baselineRoutineMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                     const GGS_bool & in_mIsNoReturn,
                                                                                     const GGS_luint & in_mPage,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baselineRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  result.mProperty_mPage = in_mPage ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mPage.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mPage.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baselineRoutineMap.element:") ;
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
//     @baselineRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element ("baselineRoutineMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baselineRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element GGS_baselineRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baselineRoutineMap_2E_element result ;
  const GGS_baselineRoutineMap_2E_element * p = (const GGS_baselineRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @baselineRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element_3F_::GGS_baselineRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element_3F_::GGS_baselineRoutineMap_2E_element_3F_ (const GGS_baselineRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element_3F_ GGS_baselineRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_baselineRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineRoutineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_baselineRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineRoutineMap_2E_element_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baselineRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element_3F_ ("baselineRoutineMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baselineRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineRoutineMap_2E_element_3F_ GGS_baselineRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baselineRoutineMap_2E_element_3F_ result ;
  const GGS_baselineRoutineMap_2E_element_3F_ * p = (const GGS_baselineRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element::GGS_baselineSymbolTableForOptimizations_2E_element (void) :
mProperty_lkey (),
mProperty_mDefinitionLineIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element::GGS_baselineSymbolTableForOptimizations_2E_element (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mDefinitionLineIndex (inSource.mProperty_mDefinitionLineIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element & GGS_baselineSymbolTableForOptimizations_2E_element::operator = (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mDefinitionLineIndex = inSource.mProperty_mDefinitionLineIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element GGS_baselineSymbolTableForOptimizations_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                     const GGS_uint & in_mDefinitionLineIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionLineIndex = in_mDefinitionLineIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element::GGS_baselineSymbolTableForOptimizations_2E_element (const GGS_lstring & inOperand0,
                                                                                                        const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionLineIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element GGS_baselineSymbolTableForOptimizations_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                                       const GGS_uint & in_mDefinitionLineIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionLineIndex = in_mDefinitionLineIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineSymbolTableForOptimizations_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionLineIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionLineIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baselineSymbolTableForOptimizations.element:") ;
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
//     @baselineSymbolTableForOptimizations.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element ("baselineSymbolTableForOptimizations.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baselineSymbolTableForOptimizations_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineSymbolTableForOptimizations_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineSymbolTableForOptimizations_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element GGS_baselineSymbolTableForOptimizations_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations_2E_element result ;
  const GGS_baselineSymbolTableForOptimizations_2E_element * p = (const GGS_baselineSymbolTableForOptimizations_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineSymbolTableForOptimizations_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @baselineSymbolTableForOptimizations_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element_3F_::GGS_baselineSymbolTableForOptimizations_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element_3F_::GGS_baselineSymbolTableForOptimizations_2E_element_3F_ (const GGS_baselineSymbolTableForOptimizations_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element_3F_ GGS_baselineSymbolTableForOptimizations_2E_element_3F_::init_nil (void) {
  GGS_baselineSymbolTableForOptimizations_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineSymbolTableForOptimizations_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baselineSymbolTableForOptimizations_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_baselineSymbolTableForOptimizations_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baselineSymbolTableForOptimizations_2E_element_3F_::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baselineSymbolTableForOptimizations.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element_3F_ ("baselineSymbolTableForOptimizations.element?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baselineSymbolTableForOptimizations_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baselineSymbolTableForOptimizations_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baselineSymbolTableForOptimizations_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baselineSymbolTableForOptimizations_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baselineSymbolTableForOptimizations_2E_element_3F_ GGS_baselineSymbolTableForOptimizations_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baselineSymbolTableForOptimizations_2E_element_3F_ result ;
  const GGS_baselineSymbolTableForOptimizations_2E_element_3F_ * p = (const GGS_baselineSymbolTableForOptimizations_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baselineSymbolTableForOptimizations_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baselineSymbolTableForOptimizations.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element::GGS_baseline_5F_symbolTable_2E_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element::GGS_baseline_5F_symbolTable_2E_element (const GGS_baseline_5F_symbolTable_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRoutineAddress (inSource.mProperty_mRoutineAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element & GGS_baseline_5F_symbolTable_2E_element::operator = (const GGS_baseline_5F_symbolTable_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRoutineAddress = inSource.mProperty_mRoutineAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element GGS_baseline_5F_symbolTable_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_uint & in_mRoutineAddress,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element::GGS_baseline_5F_symbolTable_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element GGS_baseline_5F_symbolTable_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                               const GGS_uint & in_mRoutineAddress,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_symbolTable_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_symbolTable.element:") ;
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
//     @baseline_symbolTable.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element ("baseline_symbolTable.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_symbolTable_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_symbolTable_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_symbolTable_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element GGS_baseline_5F_symbolTable_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable_2E_element result ;
  const GGS_baseline_5F_symbolTable_2E_element * p = (const GGS_baseline_5F_symbolTable_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_symbolTable_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @baseline_5F_symbolTable_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element_3F_::GGS_baseline_5F_symbolTable_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element_3F_::GGS_baseline_5F_symbolTable_2E_element_3F_ (const GGS_baseline_5F_symbolTable_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element_3F_ GGS_baseline_5F_symbolTable_2E_element_3F_::init_nil (void) {
  GGS_baseline_5F_symbolTable_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_symbolTable_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_symbolTable_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_baseline_5F_symbolTable_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable_2E_element_3F_::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_symbolTable.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element_3F_ ("baseline_symbolTable.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_symbolTable_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_symbolTable_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_symbolTable_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element_3F_ GGS_baseline_5F_symbolTable_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable_2E_element_3F_ result ;
  const GGS_baseline_5F_symbolTable_2E_element_3F_ * p = (const GGS_baseline_5F_symbolTable_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_symbolTable_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element::GGS_midrange_5F_interruptDefinitionList_2E_element (void) :
mProperty_mInterruptLocation (),
mProperty_mInstructionList (),
mProperty_mFirstSaveRegister (),
mProperty_mSecondSaveRegister (),
mProperty_mEndOfInterruptLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element::GGS_midrange_5F_interruptDefinitionList_2E_element (const GGS_midrange_5F_interruptDefinitionList_2E_element & inSource) :
mProperty_mInterruptLocation (inSource.mProperty_mInterruptLocation),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mFirstSaveRegister (inSource.mProperty_mFirstSaveRegister),
mProperty_mSecondSaveRegister (inSource.mProperty_mSecondSaveRegister),
mProperty_mEndOfInterruptLocation (inSource.mProperty_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element & GGS_midrange_5F_interruptDefinitionList_2E_element::operator = (const GGS_midrange_5F_interruptDefinitionList_2E_element & inSource) {
  mProperty_mInterruptLocation = inSource.mProperty_mInterruptLocation ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mFirstSaveRegister = inSource.mProperty_mFirstSaveRegister ;
  mProperty_mSecondSaveRegister = inSource.mProperty_mSecondSaveRegister ;
  mProperty_mEndOfInterruptLocation = inSource.mProperty_mEndOfInterruptLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element GGS_midrange_5F_interruptDefinitionList_2E_element::init_21__21__21__21__21_ (const GGS_location & in_mInterruptLocation,
                                                                                                                                 const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                                 const GGS_lstring & in_mFirstSaveRegister,
                                                                                                                                 const GGS_lstring & in_mSecondSaveRegister,
                                                                                                                                 const GGS_location & in_mEndOfInterruptLocation,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_interruptDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptLocation = in_mInterruptLocation ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mFirstSaveRegister = in_mFirstSaveRegister ;
  result.mProperty_mSecondSaveRegister = in_mSecondSaveRegister ;
  result.mProperty_mEndOfInterruptLocation = in_mEndOfInterruptLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element::GGS_midrange_5F_interruptDefinitionList_2E_element (const GGS_location & inOperand0,
                                                                                                        const GGS_midrange_5F_instructionList & inOperand1,
                                                                                                        const GGS_lstring & inOperand2,
                                                                                                        const GGS_lstring & inOperand3,
                                                                                                        const GGS_location & inOperand4) :
mProperty_mInterruptLocation (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mFirstSaveRegister (inOperand2),
mProperty_mSecondSaveRegister (inOperand3),
mProperty_mEndOfInterruptLocation (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element GGS_midrange_5F_interruptDefinitionList_2E_element::class_func_new (const GGS_location & in_mInterruptLocation,
                                                                                                                       const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                       const GGS_lstring & in_mFirstSaveRegister,
                                                                                                                       const GGS_lstring & in_mSecondSaveRegister,
                                                                                                                       const GGS_location & in_mEndOfInterruptLocation,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_interruptDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptLocation = in_mInterruptLocation ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mFirstSaveRegister = in_mFirstSaveRegister ;
  result.mProperty_mSecondSaveRegister = in_mSecondSaveRegister ;
  result.mProperty_mEndOfInterruptLocation = in_mEndOfInterruptLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_interruptDefinitionList_2E_element::isValid (void) const {
  return mProperty_mInterruptLocation.isValid () && mProperty_mInstructionList.isValid () && mProperty_mFirstSaveRegister.isValid () && mProperty_mSecondSaveRegister.isValid () && mProperty_mEndOfInterruptLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList_2E_element::drop (void) {
  mProperty_mInterruptLocation.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mFirstSaveRegister.drop () ;
  mProperty_mSecondSaveRegister.drop () ;
  mProperty_mEndOfInterruptLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_interruptDefinitionList.element:") ;
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
//     @midrange_interruptDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2E_element ("midrange_interruptDefinitionList.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_interruptDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_interruptDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_interruptDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element GGS_midrange_5F_interruptDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_interruptDefinitionList_2E_element result ;
  const GGS_midrange_5F_interruptDefinitionList_2E_element * p = (const GGS_midrange_5F_interruptDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_interruptDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_interruptDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element::GGS_midrange_5F_routineDefinitionList_2E_element (void) :
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

GGS_midrange_5F_routineDefinitionList_2E_element::GGS_midrange_5F_routineDefinitionList_2E_element (const GGS_midrange_5F_routineDefinitionList_2E_element & inSource) :
mProperty_mRoutineName (inSource.mProperty_mRoutineName),
mProperty_mPage (inSource.mProperty_mPage),
mProperty_mRequiredBank (inSource.mProperty_mRequiredBank),
mProperty_mReturnedBank (inSource.mProperty_mReturnedBank),
mProperty_mPreservesBank (inSource.mProperty_mPreservesBank),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfRoutineLocation (inSource.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element & GGS_midrange_5F_routineDefinitionList_2E_element::operator = (const GGS_midrange_5F_routineDefinitionList_2E_element & inSource) {
  mProperty_mRoutineName = inSource.mProperty_mRoutineName ;
  mProperty_mPage = inSource.mProperty_mPage ;
  mProperty_mRequiredBank = inSource.mProperty_mRequiredBank ;
  mProperty_mReturnedBank = inSource.mProperty_mReturnedBank ;
  mProperty_mPreservesBank = inSource.mProperty_mPreservesBank ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfRoutineLocation = inSource.mProperty_mEndOfRoutineLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element GGS_midrange_5F_routineDefinitionList_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                                                                                                         const GGS_luint & in_mPage,
                                                                                                                                         const GGS_luint & in_mRequiredBank,
                                                                                                                                         const GGS_luint & in_mReturnedBank,
                                                                                                                                         const GGS_bool & in_mPreservesBank,
                                                                                                                                         const GGS_bool & in_mIsNoReturn,
                                                                                                                                         const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                                         const GGS_location & in_mEndOfRoutineLocation,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_routineDefinitionList_2E_element result ;
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

void GGS_midrange_5F_routineDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element::GGS_midrange_5F_routineDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                                                    const GGS_luint & inOperand1,
                                                                                                    const GGS_luint & inOperand2,
                                                                                                    const GGS_luint & inOperand3,
                                                                                                    const GGS_bool & inOperand4,
                                                                                                    const GGS_bool & inOperand5,
                                                                                                    const GGS_midrange_5F_instructionList & inOperand6,
                                                                                                    const GGS_location & inOperand7) :
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

GGS_midrange_5F_routineDefinitionList_2E_element GGS_midrange_5F_routineDefinitionList_2E_element::class_func_new (const GGS_lstring & in_mRoutineName,
                                                                                                                   const GGS_luint & in_mPage,
                                                                                                                   const GGS_luint & in_mRequiredBank,
                                                                                                                   const GGS_luint & in_mReturnedBank,
                                                                                                                   const GGS_bool & in_mPreservesBank,
                                                                                                                   const GGS_bool & in_mIsNoReturn,
                                                                                                                   const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                   const GGS_location & in_mEndOfRoutineLocation,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_routineDefinitionList_2E_element result ;
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

bool GGS_midrange_5F_routineDefinitionList_2E_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mPage.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList_2E_element::drop (void) {
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

void GGS_midrange_5F_routineDefinitionList_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_routineDefinitionList.element:") ;
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
//     @midrange_routineDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2E_element ("midrange_routineDefinitionList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_routineDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_routineDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_routineDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element GGS_midrange_5F_routineDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_routineDefinitionList_2E_element result ;
  const GGS_midrange_5F_routineDefinitionList_2E_element * p = (const GGS_midrange_5F_routineDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_routineDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_routineDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRoutineAddress (inSource.mProperty_mRoutineAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::operator = (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRoutineAddress = inSource.mProperty_mRoutineAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                                         const GGS_uint & in_mRoutineAddress,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (const GGS_lstring & inOperand0,
                                                                                                                            const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                                                           const GGS_uint & in_mRoutineAddress,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_symbolTableForConvertingRelatives.element:") ;
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
//     @midrange_symbolTableForConvertingRelatives.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element ("midrange_symbolTableForConvertingRelatives.element",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element result ;
  const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element * p = (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTableForConvertingRelatives.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::init_nil (void) {
  GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_symbolTableForConvertingRelatives.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ ("midrange_symbolTableForConvertingRelatives.element?",
                                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ result ;
  const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ * p = (const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_symbolTableForConvertingRelatives_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTableForConvertingRelatives.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element::GGS_midrange_5F_symbolTable_2E_element (void) :
mProperty_lkey (),
mProperty_mRoutineAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element::GGS_midrange_5F_symbolTable_2E_element (const GGS_midrange_5F_symbolTable_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRoutineAddress (inSource.mProperty_mRoutineAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element & GGS_midrange_5F_symbolTable_2E_element::operator = (const GGS_midrange_5F_symbolTable_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRoutineAddress = inSource.mProperty_mRoutineAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element GGS_midrange_5F_symbolTable_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_uint & in_mRoutineAddress,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element::GGS_midrange_5F_symbolTable_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mRoutineAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element GGS_midrange_5F_symbolTable_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                               const GGS_uint & in_mRoutineAddress,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRoutineAddress = in_mRoutineAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTable_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRoutineAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRoutineAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_symbolTable.element:") ;
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
//     @midrange_symbolTable.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element ("midrange_symbolTable.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_symbolTable_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_symbolTable_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_symbolTable_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element GGS_midrange_5F_symbolTable_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTable_2E_element result ;
  const GGS_midrange_5F_symbolTable_2E_element * p = (const GGS_midrange_5F_symbolTable_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_symbolTable_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTable.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @midrange_5F_symbolTable_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element_3F_::GGS_midrange_5F_symbolTable_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element_3F_::GGS_midrange_5F_symbolTable_2E_element_3F_ (const GGS_midrange_5F_symbolTable_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element_3F_ GGS_midrange_5F_symbolTable_2E_element_3F_::init_nil (void) {
  GGS_midrange_5F_symbolTable_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTable_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_symbolTable_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_midrange_5F_symbolTable_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_symbolTable_2E_element_3F_::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_symbolTable.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element_3F_ ("midrange_symbolTable.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_symbolTable_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_symbolTable_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_symbolTable_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_symbolTable_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_symbolTable_2E_element_3F_ GGS_midrange_5F_symbolTable_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_symbolTable_2E_element_3F_ result ;
  const GGS_midrange_5F_symbolTable_2E_element_3F_ * p = (const GGS_midrange_5F_symbolTable_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_symbolTable_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_symbolTable.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element::GGS_midrange_5F_declaredRoutineMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element::GGS_midrange_5F_declaredRoutineMap_2E_element (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element & GGS_midrange_5F_declaredRoutineMap_2E_element::operator = (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element GGS_midrange_5F_declaredRoutineMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element::GGS_midrange_5F_declaredRoutineMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element GGS_midrange_5F_declaredRoutineMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_declaredRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_declaredRoutineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_declaredRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element ("midrange_declaredRoutineMap.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_declaredRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_declaredRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_declaredRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element GGS_midrange_5F_declaredRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap_2E_element result ;
  const GGS_midrange_5F_declaredRoutineMap_2E_element * p = (const GGS_midrange_5F_declaredRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_declaredRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_declaredRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @midrange_5F_declaredRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (const GGS_midrange_5F_declaredRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_midrange_5F_declaredRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_declaredRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element_3F_ ("midrange_declaredRoutineMap.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ result ;
  const GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ * p = (const GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_declaredRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element::GGS_bootloaderReservedRAMmap_2E_element (void) :
mProperty_lkey (),
mProperty_mReservedSize () {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element::GGS_bootloaderReservedRAMmap_2E_element (const GGS_bootloaderReservedRAMmap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mReservedSize (inSource.mProperty_mReservedSize) {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element & GGS_bootloaderReservedRAMmap_2E_element::operator = (const GGS_bootloaderReservedRAMmap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mReservedSize = inSource.mProperty_mReservedSize ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element GGS_bootloaderReservedRAMmap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_luint & in_mReservedSize,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bootloaderReservedRAMmap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mReservedSize = in_mReservedSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element::GGS_bootloaderReservedRAMmap_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_luint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mReservedSize (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element GGS_bootloaderReservedRAMmap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                 const GGS_luint & in_mReservedSize,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bootloaderReservedRAMmap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mReservedSize = in_mReservedSize ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bootloaderReservedRAMmap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mReservedSize.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mReservedSize.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bootloaderReservedRAMmap.element:") ;
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
//     @bootloaderReservedRAMmap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element ("bootloaderReservedRAMmap.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bootloaderReservedRAMmap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bootloaderReservedRAMmap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bootloaderReservedRAMmap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element GGS_bootloaderReservedRAMmap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_bootloaderReservedRAMmap_2E_element result ;
  const GGS_bootloaderReservedRAMmap_2E_element * p = (const GGS_bootloaderReservedRAMmap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bootloaderReservedRAMmap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootloaderReservedRAMmap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @bootloaderReservedRAMmap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element_3F_::GGS_bootloaderReservedRAMmap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element_3F_::GGS_bootloaderReservedRAMmap_2E_element_3F_ (const GGS_bootloaderReservedRAMmap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element_3F_ GGS_bootloaderReservedRAMmap_2E_element_3F_::init_nil (void) {
  GGS_bootloaderReservedRAMmap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bootloaderReservedRAMmap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bootloaderReservedRAMmap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_bootloaderReservedRAMmap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap_2E_element_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bootloaderReservedRAMmap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element_3F_ ("bootloaderReservedRAMmap.element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bootloaderReservedRAMmap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootloaderReservedRAMmap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bootloaderReservedRAMmap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bootloaderReservedRAMmap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element_3F_ GGS_bootloaderReservedRAMmap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_bootloaderReservedRAMmap_2E_element_3F_ result ;
  const GGS_bootloaderReservedRAMmap_2E_element_3F_ * p = (const GGS_bootloaderReservedRAMmap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bootloaderReservedRAMmap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootloaderReservedRAMmap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element::GGS_pic_31__38_BlockInstructionBlockList_2E_element (void) :
mProperty_mBlockName (),
mProperty_mInstructionList (),
mProperty_mBlockTerminaisonForBlockInstruction (),
mProperty_mEndOfBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element::GGS_pic_31__38_BlockInstructionBlockList_2E_element (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inSource) :
mProperty_mBlockName (inSource.mProperty_mBlockName),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mBlockTerminaisonForBlockInstruction (inSource.mProperty_mBlockTerminaisonForBlockInstruction),
mProperty_mEndOfBlock (inSource.mProperty_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element & GGS_pic_31__38_BlockInstructionBlockList_2E_element::operator = (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inSource) {
  mProperty_mBlockName = inSource.mProperty_mBlockName ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mBlockTerminaisonForBlockInstruction = inSource.mProperty_mBlockTerminaisonForBlockInstruction ;
  mProperty_mEndOfBlock = inSource.mProperty_mEndOfBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element GGS_pic_31__38_BlockInstructionBlockList_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mBlockName,
                                                                                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                               const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                                               const GGS_location & in_mEndOfBlock,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_BlockInstructionBlockList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlockName = in_mBlockName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mBlockTerminaisonForBlockInstruction = in_mBlockTerminaisonForBlockInstruction ;
  result.mProperty_mEndOfBlock = in_mEndOfBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element::GGS_pic_31__38_BlockInstructionBlockList_2E_element (const GGS_lstring & inOperand0,
                                                                                                          const GGS_pic_31__38_InstructionList & inOperand1,
                                                                                                          const GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                          const GGS_location & inOperand3) :
mProperty_mBlockName (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mBlockTerminaisonForBlockInstruction (inOperand2),
mProperty_mEndOfBlock (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element GGS_pic_31__38_BlockInstructionBlockList_2E_element::class_func_new (const GGS_lstring & in_mBlockName,
                                                                                                                         const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                         const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                                         const GGS_location & in_mEndOfBlock,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_BlockInstructionBlockList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlockName = in_mBlockName ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mBlockTerminaisonForBlockInstruction = in_mBlockTerminaisonForBlockInstruction ;
  result.mProperty_mEndOfBlock = in_mEndOfBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_BlockInstructionBlockList_2E_element::isValid (void) const {
  return mProperty_mBlockName.isValid () && mProperty_mInstructionList.isValid () && mProperty_mBlockTerminaisonForBlockInstruction.isValid () && mProperty_mEndOfBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList_2E_element::drop (void) {
  mProperty_mBlockName.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mBlockTerminaisonForBlockInstruction.drop () ;
  mProperty_mEndOfBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18BlockInstructionBlockList.element:") ;
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
//     @pic18BlockInstructionBlockList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2E_element ("pic18BlockInstructionBlockList.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BlockInstructionBlockList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BlockInstructionBlockList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BlockInstructionBlockList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element GGS_pic_31__38_BlockInstructionBlockList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BlockInstructionBlockList_2E_element result ;
  const GGS_pic_31__38_BlockInstructionBlockList_2E_element * p = (const GGS_pic_31__38_BlockInstructionBlockList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BlockInstructionBlockList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BlockInstructionBlockList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element::GGS_pic_31__38_InterruptDefinitionList_2E_element (void) :
mProperty_mInterruptName (),
mProperty_mFastReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfInterruptLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element::GGS_pic_31__38_InterruptDefinitionList_2E_element (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inSource) :
mProperty_mInterruptName (inSource.mProperty_mInterruptName),
mProperty_mFastReturn (inSource.mProperty_mFastReturn),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInterruptLocation (inSource.mProperty_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element & GGS_pic_31__38_InterruptDefinitionList_2E_element::operator = (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inSource) {
  mProperty_mInterruptName = inSource.mProperty_mInterruptName ;
  mProperty_mFastReturn = inSource.mProperty_mFastReturn ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInterruptLocation = inSource.mProperty_mEndOfInterruptLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element GGS_pic_31__38_InterruptDefinitionList_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mInterruptName,
                                                                                                                           const GGS_bool & in_mFastReturn,
                                                                                                                           const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                           const GGS_location & in_mEndOfInterruptLocation,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptName = in_mInterruptName ;
  result.mProperty_mFastReturn = in_mFastReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInterruptLocation = in_mEndOfInterruptLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element::GGS_pic_31__38_InterruptDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                                                      const GGS_bool & inOperand1,
                                                                                                      const GGS_pic_31__38_InstructionList & inOperand2,
                                                                                                      const GGS_location & inOperand3) :
mProperty_mInterruptName (inOperand0),
mProperty_mFastReturn (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mEndOfInterruptLocation (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element GGS_pic_31__38_InterruptDefinitionList_2E_element::class_func_new (const GGS_lstring & in_mInterruptName,
                                                                                                                     const GGS_bool & in_mFastReturn,
                                                                                                                     const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                     const GGS_location & in_mEndOfInterruptLocation,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInterruptName = in_mInterruptName ;
  result.mProperty_mFastReturn = in_mFastReturn ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInterruptLocation = in_mEndOfInterruptLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_InterruptDefinitionList_2E_element::isValid (void) const {
  return mProperty_mInterruptName.isValid () && mProperty_mFastReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfInterruptLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList_2E_element::drop (void) {
  mProperty_mInterruptName.drop () ;
  mProperty_mFastReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInterruptLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18InterruptDefinitionList.element:") ;
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
//     @pic18InterruptDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2E_element ("pic18InterruptDefinitionList.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_InterruptDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_InterruptDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_InterruptDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element GGS_pic_31__38_InterruptDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList_2E_element result ;
  const GGS_pic_31__38_InterruptDefinitionList_2E_element * p = (const GGS_pic_31__38_InterruptDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_InterruptDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InterruptDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element::GGS_pic_31__38_RoutineDefinitionList_2E_element (void) :
mProperty_mRoutineName (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList (),
mProperty_mEndOfRoutineLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element::GGS_pic_31__38_RoutineDefinitionList_2E_element (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inSource) :
mProperty_mRoutineName (inSource.mProperty_mRoutineName),
mProperty_mRequiredBank (inSource.mProperty_mRequiredBank),
mProperty_mReturnedBank (inSource.mProperty_mReturnedBank),
mProperty_mPreservesBank (inSource.mProperty_mPreservesBank),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfRoutineLocation (inSource.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element & GGS_pic_31__38_RoutineDefinitionList_2E_element::operator = (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inSource) {
  mProperty_mRoutineName = inSource.mProperty_mRoutineName ;
  mProperty_mRequiredBank = inSource.mProperty_mRequiredBank ;
  mProperty_mReturnedBank = inSource.mProperty_mReturnedBank ;
  mProperty_mPreservesBank = inSource.mProperty_mPreservesBank ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfRoutineLocation = inSource.mProperty_mEndOfRoutineLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element GGS_pic_31__38_RoutineDefinitionList_2E_element::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                                                                                                   const GGS_luint & in_mRequiredBank,
                                                                                                                                   const GGS_luint & in_mReturnedBank,
                                                                                                                                   const GGS_bool & in_mPreservesBank,
                                                                                                                                   const GGS_bool & in_mIsNoReturn,
                                                                                                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                                   const GGS_location & in_mEndOfRoutineLocation,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RoutineDefinitionList_2E_element result ;
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

void GGS_pic_31__38_RoutineDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element::GGS_pic_31__38_RoutineDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                                                  const GGS_luint & inOperand1,
                                                                                                  const GGS_luint & inOperand2,
                                                                                                  const GGS_bool & inOperand3,
                                                                                                  const GGS_bool & inOperand4,
                                                                                                  const GGS_pic_31__38_InstructionList & inOperand5,
                                                                                                  const GGS_location & inOperand6) :
mProperty_mRoutineName (inOperand0),
mProperty_mRequiredBank (inOperand1),
mProperty_mReturnedBank (inOperand2),
mProperty_mPreservesBank (inOperand3),
mProperty_mIsNoReturn (inOperand4),
mProperty_mInstructionList (inOperand5),
mProperty_mEndOfRoutineLocation (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element GGS_pic_31__38_RoutineDefinitionList_2E_element::class_func_new (const GGS_lstring & in_mRoutineName,
                                                                                                                 const GGS_luint & in_mRequiredBank,
                                                                                                                 const GGS_luint & in_mReturnedBank,
                                                                                                                 const GGS_bool & in_mPreservesBank,
                                                                                                                 const GGS_bool & in_mIsNoReturn,
                                                                                                                 const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                 const GGS_location & in_mEndOfRoutineLocation,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RoutineDefinitionList_2E_element result ;
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

bool GGS_pic_31__38_RoutineDefinitionList_2E_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfRoutineLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList_2E_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfRoutineLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18RoutineDefinitionList.element:") ;
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
//     @pic18RoutineDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2E_element ("pic18RoutineDefinitionList.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RoutineDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RoutineDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RoutineDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element GGS_pic_31__38_RoutineDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RoutineDefinitionList_2E_element result ;
  const GGS_pic_31__38_RoutineDefinitionList_2E_element * p = (const GGS_pic_31__38_RoutineDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RoutineDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RoutineDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element::GGS_pic_31__38_MacroDefinitionList_2E_element (void) :
mProperty_mMacroName (),
mProperty_mConstantNameList (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element::GGS_pic_31__38_MacroDefinitionList_2E_element (const GGS_pic_31__38_MacroDefinitionList_2E_element & inSource) :
mProperty_mMacroName (inSource.mProperty_mMacroName),
mProperty_mConstantNameList (inSource.mProperty_mConstantNameList),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element & GGS_pic_31__38_MacroDefinitionList_2E_element::operator = (const GGS_pic_31__38_MacroDefinitionList_2E_element & inSource) {
  mProperty_mMacroName = inSource.mProperty_mMacroName ;
  mProperty_mConstantNameList = inSource.mProperty_mConstantNameList ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element GGS_pic_31__38_MacroDefinitionList_2E_element::init_21__21__21_ (const GGS_lstring & in_mMacroName,
                                                                                                               const GGS_lstringlist & in_mConstantNameList,
                                                                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_MacroDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMacroName = in_mMacroName ;
  result.mProperty_mConstantNameList = in_mConstantNameList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element::GGS_pic_31__38_MacroDefinitionList_2E_element (const GGS_lstring & inOperand0,
                                                                                              const GGS_lstringlist & inOperand1,
                                                                                              const GGS_pic_31__38_InstructionList & inOperand2) :
mProperty_mMacroName (inOperand0),
mProperty_mConstantNameList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element GGS_pic_31__38_MacroDefinitionList_2E_element::class_func_new (const GGS_lstring & in_mMacroName,
                                                                                                             const GGS_lstringlist & in_mConstantNameList,
                                                                                                             const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_MacroDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mMacroName = in_mMacroName ;
  result.mProperty_mConstantNameList = in_mConstantNameList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_MacroDefinitionList_2E_element::isValid (void) const {
  return mProperty_mMacroName.isValid () && mProperty_mConstantNameList.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList_2E_element::drop (void) {
  mProperty_mMacroName.drop () ;
  mProperty_mConstantNameList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18MacroDefinitionList.element:") ;
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
//     @pic18MacroDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2E_element ("pic18MacroDefinitionList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_MacroDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_MacroDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_MacroDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element GGS_pic_31__38_MacroDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroDefinitionList_2E_element result ;
  const GGS_pic_31__38_MacroDefinitionList_2E_element * p = (const GGS_pic_31__38_MacroDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_MacroDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element::GGS_pic_31__38_MacroMap_2E_element (void) :
mProperty_lkey (),
mProperty_mConstantNameList (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element::GGS_pic_31__38_MacroMap_2E_element (const GGS_pic_31__38_MacroMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mConstantNameList (inSource.mProperty_mConstantNameList),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element & GGS_pic_31__38_MacroMap_2E_element::operator = (const GGS_pic_31__38_MacroMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mConstantNameList = inSource.mProperty_mConstantNameList ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element GGS_pic_31__38_MacroMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_lstringlist & in_mConstantNameList,
                                                                                         const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstantNameList = in_mConstantNameList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element::GGS_pic_31__38_MacroMap_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_lstringlist & inOperand1,
                                                                        const GGS_pic_31__38_InstructionList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mConstantNameList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element GGS_pic_31__38_MacroMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                       const GGS_lstringlist & in_mConstantNameList,
                                                                                       const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConstantNameList = in_mConstantNameList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_MacroMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConstantNameList.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConstantNameList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18MacroMap.element:") ;
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
//     @pic18MacroMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2E_element ("pic18MacroMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_MacroMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_MacroMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_MacroMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element GGS_pic_31__38_MacroMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap_2E_element result ;
  const GGS_pic_31__38_MacroMap_2E_element * p = (const GGS_pic_31__38_MacroMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_MacroMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @pic_31__38_MacroMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element_3F_::GGS_pic_31__38_MacroMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element_3F_::GGS_pic_31__38_MacroMap_2E_element_3F_ (const GGS_pic_31__38_MacroMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element_3F_ GGS_pic_31__38_MacroMap_2E_element_3F_::init_nil (void) {
  GGS_pic_31__38_MacroMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_MacroMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_MacroMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_pic_31__38_MacroMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap_2E_element_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18MacroMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2E_element_3F_ ("pic18MacroMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_MacroMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_MacroMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_MacroMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element_3F_ GGS_pic_31__38_MacroMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap_2E_element_3F_ result ;
  const GGS_pic_31__38_MacroMap_2E_element_3F_ * p = (const GGS_pic_31__38_MacroMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_MacroMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element::GGS_routineDeclarationList_2E_element (void) :
mProperty_mRoutineName (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element::GGS_routineDeclarationList_2E_element (const GGS_routineDeclarationList_2E_element & inSource) :
mProperty_mRoutineName (inSource.mProperty_mRoutineName),
mProperty_mRequiredBank (inSource.mProperty_mRequiredBank),
mProperty_mReturnedBank (inSource.mProperty_mReturnedBank),
mProperty_mPreservesBank (inSource.mProperty_mPreservesBank),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element & GGS_routineDeclarationList_2E_element::operator = (const GGS_routineDeclarationList_2E_element & inSource) {
  mProperty_mRoutineName = inSource.mProperty_mRoutineName ;
  mProperty_mRequiredBank = inSource.mProperty_mRequiredBank ;
  mProperty_mReturnedBank = inSource.mProperty_mReturnedBank ;
  mProperty_mPreservesBank = inSource.mProperty_mPreservesBank ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineDeclarationList_2E_element GGS_routineDeclarationList_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mRoutineName,
                                                                                                       const GGS_luint & in_mRequiredBank,
                                                                                                       const GGS_luint & in_mReturnedBank,
                                                                                                       const GGS_bool & in_mPreservesBank,
                                                                                                       const GGS_bool & in_mIsNoReturn,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element::GGS_routineDeclarationList_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_luint & inOperand1,
                                                                              const GGS_luint & inOperand2,
                                                                              const GGS_bool & inOperand3,
                                                                              const GGS_bool & inOperand4) :
mProperty_mRoutineName (inOperand0),
mProperty_mRequiredBank (inOperand1),
mProperty_mReturnedBank (inOperand2),
mProperty_mPreservesBank (inOperand3),
mProperty_mIsNoReturn (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element GGS_routineDeclarationList_2E_element::class_func_new (const GGS_lstring & in_mRoutineName,
                                                                                             const GGS_luint & in_mRequiredBank,
                                                                                             const GGS_luint & in_mReturnedBank,
                                                                                             const GGS_bool & in_mPreservesBank,
                                                                                             const GGS_bool & in_mIsNoReturn,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mRoutineName = in_mRoutineName ;
  result.mProperty_mRequiredBank = in_mRequiredBank ;
  result.mProperty_mReturnedBank = in_mReturnedBank ;
  result.mProperty_mPreservesBank = in_mPreservesBank ;
  result.mProperty_mIsNoReturn = in_mIsNoReturn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineDeclarationList_2E_element::isValid (void) const {
  return mProperty_mRoutineName.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList_2E_element::drop (void) {
  mProperty_mRoutineName.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineDeclarationList.element:") ;
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
//     @routineDeclarationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineDeclarationList_2E_element ("routineDeclarationList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineDeclarationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineDeclarationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element GGS_routineDeclarationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineDeclarationList_2E_element result ;
  const GGS_routineDeclarationList_2E_element * p = (const GGS_routineDeclarationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineDeclarationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDeclarationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element::GGS_dataList_2E_element (void) :
mProperty_mDataName (),
mProperty_mValueList (),
mProperty_mIsByteList () {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element::GGS_dataList_2E_element (const GGS_dataList_2E_element & inSource) :
mProperty_mDataName (inSource.mProperty_mDataName),
mProperty_mValueList (inSource.mProperty_mValueList),
mProperty_mIsByteList (inSource.mProperty_mIsByteList) {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element & GGS_dataList_2E_element::operator = (const GGS_dataList_2E_element & inSource) {
  mProperty_mDataName = inSource.mProperty_mDataName ;
  mProperty_mValueList = inSource.mProperty_mValueList ;
  mProperty_mIsByteList = inSource.mProperty_mIsByteList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_dataList_2E_element GGS_dataList_2E_element::init_21__21__21_ (const GGS_lstring & in_mDataName,
                                                                   const GGS_immediatExpressionList & in_mValueList,
                                                                   const GGS_bool & in_mIsByteList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_dataList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDataName = in_mDataName ;
  result.mProperty_mValueList = in_mValueList ;
  result.mProperty_mIsByteList = in_mIsByteList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element::GGS_dataList_2E_element (const GGS_lstring & inOperand0,
                                                  const GGS_immediatExpressionList & inOperand1,
                                                  const GGS_bool & inOperand2) :
mProperty_mDataName (inOperand0),
mProperty_mValueList (inOperand1),
mProperty_mIsByteList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element GGS_dataList_2E_element::class_func_new (const GGS_lstring & in_mDataName,
                                                                 const GGS_immediatExpressionList & in_mValueList,
                                                                 const GGS_bool & in_mIsByteList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_dataList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDataName = in_mDataName ;
  result.mProperty_mValueList = in_mValueList ;
  result.mProperty_mIsByteList = in_mIsByteList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_dataList_2E_element::isValid (void) const {
  return mProperty_mDataName.isValid () && mProperty_mValueList.isValid () && mProperty_mIsByteList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList_2E_element::drop (void) {
  mProperty_mDataName.drop () ;
  mProperty_mValueList.drop () ;
  mProperty_mIsByteList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @dataList.element:") ;
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
//     @dataList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dataList_2E_element ("dataList.element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dataList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dataList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dataList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element GGS_dataList_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_dataList_2E_element result ;
  const GGS_dataList_2E_element * p = (const GGS_dataList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dataList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element::GGS_caseConstantMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element::GGS_caseConstantMap_2E_element (const GGS_caseConstantMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element & GGS_caseConstantMap_2E_element::operator = (const GGS_caseConstantMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_caseConstantMap_2E_element GGS_caseConstantMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_caseConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element::GGS_caseConstantMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element GGS_caseConstantMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_caseConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_caseConstantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @caseConstantMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @caseConstantMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_caseConstantMap_2E_element ("caseConstantMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_caseConstantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_caseConstantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_caseConstantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element GGS_caseConstantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_caseConstantMap_2E_element result ;
  const GGS_caseConstantMap_2E_element * p = (const GGS_caseConstantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_caseConstantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("caseConstantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @caseConstantMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element_3F_::GGS_caseConstantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element_3F_::GGS_caseConstantMap_2E_element_3F_ (const GGS_caseConstantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element_3F_ GGS_caseConstantMap_2E_element_3F_::init_nil (void) {
  GGS_caseConstantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_caseConstantMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_caseConstantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_caseConstantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap_2E_element_3F_::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @caseConstantMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_caseConstantMap_2E_element_3F_ ("caseConstantMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_caseConstantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_caseConstantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_caseConstantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element_3F_ GGS_caseConstantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_caseConstantMap_2E_element_3F_ result ;
  const GGS_caseConstantMap_2E_element_3F_ * p = (const GGS_caseConstantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_caseConstantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("caseConstantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element::GGS_pic_31__38__5F_dataMap_2E_element (void) :
mProperty_lkey (),
mProperty_mData (),
mProperty_mIsData_38_ () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element::GGS_pic_31__38__5F_dataMap_2E_element (const GGS_pic_31__38__5F_dataMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mData (inSource.mProperty_mData),
mProperty_mIsData_38_ (inSource.mProperty_mIsData_38_) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element & GGS_pic_31__38__5F_dataMap_2E_element::operator = (const GGS_pic_31__38__5F_dataMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mData = inSource.mProperty_mData ;
  mProperty_mIsData_38_ = inSource.mProperty_mIsData_38_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element GGS_pic_31__38__5F_dataMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_uintlist & in_mData,
                                                                                               const GGS_bool & in_mIsData_38_,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mData = in_mData ;
  result.mProperty_mIsData_38_ = in_mIsData_38_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element::GGS_pic_31__38__5F_dataMap_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_uintlist & inOperand1,
                                                                              const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mData (inOperand1),
mProperty_mIsData_38_ (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element GGS_pic_31__38__5F_dataMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                             const GGS_uintlist & in_mData,
                                                                                             const GGS_bool & in_mIsData8,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mData = in_mData ;
  result.mProperty_mIsData_38_ = in_mIsData8 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mData.isValid () && mProperty_mIsData_38_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mData.drop () ;
  mProperty_mIsData_38_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18_dataMap.element:") ;
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
//     @pic18_dataMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element ("pic18_dataMap.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element GGS_pic_31__38__5F_dataMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap_2E_element result ;
  const GGS_pic_31__38__5F_dataMap_2E_element * p = (const GGS_pic_31__38__5F_dataMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @pic_31__38__5F_dataMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_::GGS_pic_31__38__5F_dataMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_::GGS_pic_31__38__5F_dataMap_2E_element_3F_ (const GGS_pic_31__38__5F_dataMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_ GGS_pic_31__38__5F_dataMap_2E_element_3F_::init_nil (void) {
  GGS_pic_31__38__5F_dataMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_pic_31__38__5F_dataMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap_2E_element_3F_::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18_dataMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element_3F_ ("pic18_dataMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_ GGS_pic_31__38__5F_dataMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap_2E_element_3F_ result ;
  const GGS_pic_31__38__5F_dataMap_2E_element_3F_ * p = (const GGS_pic_31__38__5F_dataMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element::GGS_ipic_31__38_BlockList_2E_element (void) :
mProperty_mBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element::GGS_ipic_31__38_BlockList_2E_element (const GGS_ipic_31__38_BlockList_2E_element & inSource) :
mProperty_mBlock (inSource.mProperty_mBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element & GGS_ipic_31__38_BlockList_2E_element::operator = (const GGS_ipic_31__38_BlockList_2E_element & inSource) {
  mProperty_mBlock = inSource.mProperty_mBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element GGS_ipic_31__38_BlockList_2E_element::init_21_ (const GGS_ipic_31__38_Block & in_mBlock,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element::GGS_ipic_31__38_BlockList_2E_element (const GGS_ipic_31__38_Block & inOperand0) :
mProperty_mBlock (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element GGS_ipic_31__38_BlockList_2E_element::class_func_new (const GGS_ipic_31__38_Block & in_mBlock,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ipic_31__38_BlockList_2E_element::isValid (void) const {
  return mProperty_mBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList_2E_element::drop (void) {
  mProperty_mBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ipic18BlockList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBlock.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18BlockList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2E_element ("ipic18BlockList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_BlockList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_BlockList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_BlockList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element GGS_ipic_31__38_BlockList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList_2E_element result ;
  const GGS_ipic_31__38_BlockList_2E_element * p = (const GGS_ipic_31__38_BlockList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_BlockList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18BlockList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element::GGS_symbolTableForBlockOptimization_2E_element (void) :
mProperty_lkey (),
mProperty_mDefinitionBlockIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element::GGS_symbolTableForBlockOptimization_2E_element (const GGS_symbolTableForBlockOptimization_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mDefinitionBlockIndex (inSource.mProperty_mDefinitionBlockIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element & GGS_symbolTableForBlockOptimization_2E_element::operator = (const GGS_symbolTableForBlockOptimization_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mDefinitionBlockIndex = inSource.mProperty_mDefinitionBlockIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element GGS_symbolTableForBlockOptimization_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                             const GGS_uint & in_mDefinitionBlockIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionBlockIndex = in_mDefinitionBlockIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element::GGS_symbolTableForBlockOptimization_2E_element (const GGS_lstring & inOperand0,
                                                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDefinitionBlockIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element GGS_symbolTableForBlockOptimization_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                               const GGS_uint & in_mDefinitionBlockIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDefinitionBlockIndex = in_mDefinitionBlockIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForBlockOptimization_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDefinitionBlockIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDefinitionBlockIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForBlockOptimization.element:") ;
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
//     @symbolTableForBlockOptimization.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element ("symbolTableForBlockOptimization.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForBlockOptimization_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForBlockOptimization_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForBlockOptimization_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element GGS_symbolTableForBlockOptimization_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization_2E_element result ;
  const GGS_symbolTableForBlockOptimization_2E_element * p = (const GGS_symbolTableForBlockOptimization_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForBlockOptimization_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @symbolTableForBlockOptimization_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_::GGS_symbolTableForBlockOptimization_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_::GGS_symbolTableForBlockOptimization_2E_element_3F_ (const GGS_symbolTableForBlockOptimization_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_ GGS_symbolTableForBlockOptimization_2E_element_3F_::init_nil (void) {
  GGS_symbolTableForBlockOptimization_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForBlockOptimization_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForBlockOptimization_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_symbolTableForBlockOptimization_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization_2E_element_3F_::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForBlockOptimization.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element_3F_ ("symbolTableForBlockOptimization.element?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForBlockOptimization_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForBlockOptimization_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForBlockOptimization_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_ GGS_symbolTableForBlockOptimization_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization_2E_element_3F_ result ;
  const GGS_symbolTableForBlockOptimization_2E_element_3F_ * p = (const GGS_symbolTableForBlockOptimization_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForBlockOptimization_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element::GGS_symbolTableForClusterOrdering_2E_element (void) :
mProperty_lkey (),
mProperty_mCluster () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element::GGS_symbolTableForClusterOrdering_2E_element (const GGS_symbolTableForClusterOrdering_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mCluster (inSource.mProperty_mCluster) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element & GGS_symbolTableForClusterOrdering_2E_element::operator = (const GGS_symbolTableForClusterOrdering_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mCluster = inSource.mProperty_mCluster ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element GGS_symbolTableForClusterOrdering_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                         const GGS_uint & in_mCluster,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCluster = in_mCluster ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element::GGS_symbolTableForClusterOrdering_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mCluster (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element GGS_symbolTableForClusterOrdering_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                           const GGS_uint & in_mCluster,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCluster = in_mCluster ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForClusterOrdering_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCluster.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCluster.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForClusterOrdering.element:") ;
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
//     @symbolTableForClusterOrdering.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element ("symbolTableForClusterOrdering.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForClusterOrdering_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForClusterOrdering_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForClusterOrdering_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element GGS_symbolTableForClusterOrdering_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering_2E_element result ;
  const GGS_symbolTableForClusterOrdering_2E_element * p = (const GGS_symbolTableForClusterOrdering_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForClusterOrdering_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @symbolTableForClusterOrdering_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_::GGS_symbolTableForClusterOrdering_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_::GGS_symbolTableForClusterOrdering_2E_element_3F_ (const GGS_symbolTableForClusterOrdering_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_ GGS_symbolTableForClusterOrdering_2E_element_3F_::init_nil (void) {
  GGS_symbolTableForClusterOrdering_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForClusterOrdering_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForClusterOrdering_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_symbolTableForClusterOrdering_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering_2E_element_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForClusterOrdering.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element_3F_ ("symbolTableForClusterOrdering.element?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForClusterOrdering_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForClusterOrdering_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForClusterOrdering_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_ GGS_symbolTableForClusterOrdering_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering_2E_element_3F_ result ;
  const GGS_symbolTableForClusterOrdering_2E_element_3F_ * p = (const GGS_symbolTableForClusterOrdering_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForClusterOrdering_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element::GGS_symbolTableForRelativesResolution_2E_element (void) :
mProperty_lkey (),
mProperty_mLabelAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element::GGS_symbolTableForRelativesResolution_2E_element (const GGS_symbolTableForRelativesResolution_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLabelAddress (inSource.mProperty_mLabelAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element & GGS_symbolTableForRelativesResolution_2E_element::operator = (const GGS_symbolTableForRelativesResolution_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLabelAddress = inSource.mProperty_mLabelAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element GGS_symbolTableForRelativesResolution_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                 const GGS_uint & in_mLabelAddress,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLabelAddress = in_mLabelAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element::GGS_symbolTableForRelativesResolution_2E_element (const GGS_lstring & inOperand0,
                                                                                                    const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLabelAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element GGS_symbolTableForRelativesResolution_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                                   const GGS_uint & in_mLabelAddress,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLabelAddress = in_mLabelAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForRelativesResolution_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @symbolTableForRelativesResolution.element:") ;
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
//     @symbolTableForRelativesResolution.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element ("symbolTableForRelativesResolution.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForRelativesResolution_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForRelativesResolution_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForRelativesResolution_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element GGS_symbolTableForRelativesResolution_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution_2E_element result ;
  const GGS_symbolTableForRelativesResolution_2E_element * p = (const GGS_symbolTableForRelativesResolution_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForRelativesResolution_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @symbolTableForRelativesResolution_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_::GGS_symbolTableForRelativesResolution_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_::GGS_symbolTableForRelativesResolution_2E_element_3F_ (const GGS_symbolTableForRelativesResolution_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_ GGS_symbolTableForRelativesResolution_2E_element_3F_::init_nil (void) {
  GGS_symbolTableForRelativesResolution_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForRelativesResolution_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForRelativesResolution_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_symbolTableForRelativesResolution_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution_2E_element_3F_::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @symbolTableForRelativesResolution.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element_3F_ ("symbolTableForRelativesResolution.element?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForRelativesResolution_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForRelativesResolution_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForRelativesResolution_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_ GGS_symbolTableForRelativesResolution_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution_2E_element_3F_ result ;
  const GGS_symbolTableForRelativesResolution_2E_element_3F_ * p = (const GGS_symbolTableForRelativesResolution_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForRelativesResolution_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element::GGS_pic_31__38__5F_dataAddressMap_2E_element (void) :
mProperty_lkey (),
mProperty_mDataAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element::GGS_pic_31__38__5F_dataAddressMap_2E_element (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mDataAddress (inSource.mProperty_mDataAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element & GGS_pic_31__38__5F_dataAddressMap_2E_element::operator = (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mDataAddress = inSource.mProperty_mDataAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element GGS_pic_31__38__5F_dataAddressMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                         const GGS_uint & in_mDataAddress,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDataAddress = in_mDataAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element::GGS_pic_31__38__5F_dataAddressMap_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mDataAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element GGS_pic_31__38__5F_dataAddressMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                           const GGS_uint & in_mDataAddress,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mDataAddress = in_mDataAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataAddressMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mDataAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mDataAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18_dataAddressMap.element:") ;
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
//     @pic18_dataAddressMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element ("pic18_dataAddressMap.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataAddressMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataAddressMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataAddressMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element GGS_pic_31__38__5F_dataAddressMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap_2E_element result ;
  const GGS_pic_31__38__5F_dataAddressMap_2E_element * p = (const GGS_pic_31__38__5F_dataAddressMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataAddressMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @pic_31__38__5F_dataAddressMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::init_nil (void) {
  GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_pic_31__38__5F_dataAddressMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18_dataAddressMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element_3F_ ("pic18_dataAddressMap.element?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ result ;
  const GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ * p = (const GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element::GGS_declaredRoutineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRequiredBank (),
mProperty_mReturnedBank (),
mProperty_mPreservesBank (),
mProperty_mIsNoReturn (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element::GGS_declaredRoutineMap_2E_element (const GGS_declaredRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRequiredBank (inSource.mProperty_mRequiredBank),
mProperty_mReturnedBank (inSource.mProperty_mReturnedBank),
mProperty_mPreservesBank (inSource.mProperty_mPreservesBank),
mProperty_mIsNoReturn (inSource.mProperty_mIsNoReturn),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element & GGS_declaredRoutineMap_2E_element::operator = (const GGS_declaredRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRequiredBank = inSource.mProperty_mRequiredBank ;
  mProperty_mReturnedBank = inSource.mProperty_mReturnedBank ;
  mProperty_mPreservesBank = inSource.mProperty_mPreservesBank ;
  mProperty_mIsNoReturn = inSource.mProperty_mIsNoReturn ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element GGS_declaredRoutineMap_2E_element::init_21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_luint & in_mRequiredBank,
                                                                                                   const GGS_luint & in_mReturnedBank,
                                                                                                   const GGS_bool & in_mPreservesBank,
                                                                                                   const GGS_bool & in_mIsNoReturn,
                                                                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declaredRoutineMap_2E_element result ;
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

void GGS_declaredRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element::GGS_declaredRoutineMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_luint & inOperand1,
                                                                      const GGS_luint & inOperand2,
                                                                      const GGS_bool & inOperand3,
                                                                      const GGS_bool & inOperand4,
                                                                      const GGS_pic_31__38_InstructionList & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mRequiredBank (inOperand1),
mProperty_mReturnedBank (inOperand2),
mProperty_mPreservesBank (inOperand3),
mProperty_mIsNoReturn (inOperand4),
mProperty_mInstructionList (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element GGS_declaredRoutineMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                     const GGS_luint & in_mRequiredBank,
                                                                                     const GGS_luint & in_mReturnedBank,
                                                                                     const GGS_bool & in_mPreservesBank,
                                                                                     const GGS_bool & in_mIsNoReturn,
                                                                                     const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declaredRoutineMap_2E_element result ;
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

bool GGS_declaredRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRequiredBank.isValid () && mProperty_mReturnedBank.isValid () && mProperty_mPreservesBank.isValid () && mProperty_mIsNoReturn.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRequiredBank.drop () ;
  mProperty_mReturnedBank.drop () ;
  mProperty_mPreservesBank.drop () ;
  mProperty_mIsNoReturn.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declaredRoutineMap.element:") ;
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
//     @declaredRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element ("declaredRoutineMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element GGS_declaredRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap_2E_element result ;
  const GGS_declaredRoutineMap_2E_element * p = (const GGS_declaredRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @declaredRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_::GGS_declaredRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_::GGS_declaredRoutineMap_2E_element_3F_ (const GGS_declaredRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_ GGS_declaredRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_declaredRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredRoutineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_declaredRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap_2E_element_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declaredRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element_3F_ ("declaredRoutineMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_ GGS_declaredRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap_2E_element_3F_ result ;
  const GGS_declaredRoutineMap_2E_element_3F_ * p = (const GGS_declaredRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element::GGS_blockInstructionBlockMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInstructionList (),
mProperty_mBlockTerminaisonForBlockInstruction (),
mProperty_mEndOfBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element::GGS_blockInstructionBlockMap_2E_element (const GGS_blockInstructionBlockMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mBlockTerminaisonForBlockInstruction (inSource.mProperty_mBlockTerminaisonForBlockInstruction),
mProperty_mEndOfBlock (inSource.mProperty_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element & GGS_blockInstructionBlockMap_2E_element::operator = (const GGS_blockInstructionBlockMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mBlockTerminaisonForBlockInstruction = inSource.mProperty_mBlockTerminaisonForBlockInstruction ;
  mProperty_mEndOfBlock = inSource.mProperty_mEndOfBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element GGS_blockInstructionBlockMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                       const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                       const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                       const GGS_location & in_mEndOfBlock,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mBlockTerminaisonForBlockInstruction = in_mBlockTerminaisonForBlockInstruction ;
  result.mProperty_mEndOfBlock = in_mEndOfBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element::GGS_blockInstructionBlockMap_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_pic_31__38_InstructionList & inOperand1,
                                                                                  const GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                  const GGS_location & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mBlockTerminaisonForBlockInstruction (inOperand2),
mProperty_mEndOfBlock (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element GGS_blockInstructionBlockMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                 const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                 const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                 const GGS_location & in_mEndOfBlock,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mBlockTerminaisonForBlockInstruction = in_mBlockTerminaisonForBlockInstruction ;
  result.mProperty_mEndOfBlock = in_mEndOfBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInstructionBlockMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInstructionList.isValid () && mProperty_mBlockTerminaisonForBlockInstruction.isValid () && mProperty_mEndOfBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mBlockTerminaisonForBlockInstruction.drop () ;
  mProperty_mEndOfBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockInstructionBlockMap.element:") ;
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
//     @blockInstructionBlockMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element ("blockInstructionBlockMap.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInstructionBlockMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInstructionBlockMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInstructionBlockMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element GGS_blockInstructionBlockMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap_2E_element result ;
  const GGS_blockInstructionBlockMap_2E_element * p = (const GGS_blockInstructionBlockMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInstructionBlockMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @blockInstructionBlockMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_::GGS_blockInstructionBlockMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_::GGS_blockInstructionBlockMap_2E_element_3F_ (const GGS_blockInstructionBlockMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_ GGS_blockInstructionBlockMap_2E_element_3F_::init_nil (void) {
  GGS_blockInstructionBlockMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInstructionBlockMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInstructionBlockMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_blockInstructionBlockMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap_2E_element_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockInstructionBlockMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element_3F_ ("blockInstructionBlockMap.element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInstructionBlockMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInstructionBlockMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInstructionBlockMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_ GGS_blockInstructionBlockMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap_2E_element_3F_ result ;
  const GGS_blockInstructionBlockMap_2E_element_3F_ * p = (const GGS_blockInstructionBlockMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInstructionBlockMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element::GGS_blockInitialBankSelectionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInitialBankSelection (),
mProperty_mSourceBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element::GGS_blockInitialBankSelectionMap_2E_element (const GGS_blockInitialBankSelectionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInitialBankSelection (inSource.mProperty_mInitialBankSelection),
mProperty_mSourceBlock (inSource.mProperty_mSourceBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element & GGS_blockInitialBankSelectionMap_2E_element::operator = (const GGS_blockInitialBankSelectionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInitialBankSelection = inSource.mProperty_mInitialBankSelection ;
  mProperty_mSourceBlock = inSource.mProperty_mSourceBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element GGS_blockInitialBankSelectionMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                           const GGS_uint & in_mInitialBankSelection,
                                                                                                           const GGS_string & in_mSourceBlock,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitialBankSelection = in_mInitialBankSelection ;
  result.mProperty_mSourceBlock = in_mSourceBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element::GGS_blockInitialBankSelectionMap_2E_element (const GGS_lstring & inOperand0,
                                                                                          const GGS_uint & inOperand1,
                                                                                          const GGS_string & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mInitialBankSelection (inOperand1),
mProperty_mSourceBlock (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element GGS_blockInitialBankSelectionMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                         const GGS_uint & in_mInitialBankSelection,
                                                                                                         const GGS_string & in_mSourceBlock,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInitialBankSelection = in_mInitialBankSelection ;
  result.mProperty_mSourceBlock = in_mSourceBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInitialBankSelectionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInitialBankSelection.isValid () && mProperty_mSourceBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInitialBankSelection.drop () ;
  mProperty_mSourceBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockInitialBankSelectionMap.element:") ;
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
//     @blockInitialBankSelectionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element ("blockInitialBankSelectionMap.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInitialBankSelectionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInitialBankSelectionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInitialBankSelectionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element GGS_blockInitialBankSelectionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap_2E_element result ;
  const GGS_blockInitialBankSelectionMap_2E_element * p = (const GGS_blockInitialBankSelectionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInitialBankSelectionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInitialBankSelectionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @blockInitialBankSelectionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_::GGS_blockInitialBankSelectionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_::GGS_blockInitialBankSelectionMap_2E_element_3F_ (const GGS_blockInitialBankSelectionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_ GGS_blockInitialBankSelectionMap_2E_element_3F_::init_nil (void) {
  GGS_blockInitialBankSelectionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInitialBankSelectionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInitialBankSelectionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_blockInitialBankSelectionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap_2E_element_3F_::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockInitialBankSelectionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element_3F_ ("blockInitialBankSelectionMap.element?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInitialBankSelectionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInitialBankSelectionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInitialBankSelectionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_ GGS_blockInitialBankSelectionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap_2E_element_3F_ result ;
  const GGS_blockInitialBankSelectionMap_2E_element_3F_ * p = (const GGS_blockInitialBankSelectionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInitialBankSelectionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInitialBankSelectionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element::GGS_neededConversionForClusterOrder_2E_element (void) :
mProperty_lkey (),
mProperty_mConversions () {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element::GGS_neededConversionForClusterOrder_2E_element (const GGS_neededConversionForClusterOrder_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mConversions (inSource.mProperty_mConversions) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element & GGS_neededConversionForClusterOrder_2E_element::operator = (const GGS_neededConversionForClusterOrder_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mConversions = inSource.mProperty_mConversions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element GGS_neededConversionForClusterOrder_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                             const GGS_uint & in_mConversions,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConversions = in_mConversions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element::GGS_neededConversionForClusterOrder_2E_element (const GGS_lstring & inOperand0,
                                                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mConversions (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element GGS_neededConversionForClusterOrder_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                               const GGS_uint & in_mConversions,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mConversions = in_mConversions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_neededConversionForClusterOrder_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mConversions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mConversions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @neededConversionForClusterOrder.element:") ;
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
//     @neededConversionForClusterOrder.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element ("neededConversionForClusterOrder.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_neededConversionForClusterOrder_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_neededConversionForClusterOrder_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_neededConversionForClusterOrder_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element GGS_neededConversionForClusterOrder_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder_2E_element result ;
  const GGS_neededConversionForClusterOrder_2E_element * p = (const GGS_neededConversionForClusterOrder_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_neededConversionForClusterOrder_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("neededConversionForClusterOrder.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @neededConversionForClusterOrder_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element_3F_::GGS_neededConversionForClusterOrder_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element_3F_::GGS_neededConversionForClusterOrder_2E_element_3F_ (const GGS_neededConversionForClusterOrder_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element_3F_ GGS_neededConversionForClusterOrder_2E_element_3F_::init_nil (void) {
  GGS_neededConversionForClusterOrder_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_neededConversionForClusterOrder_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_neededConversionForClusterOrder_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_neededConversionForClusterOrder_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder_2E_element_3F_::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @neededConversionForClusterOrder.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element_3F_ ("neededConversionForClusterOrder.element?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_neededConversionForClusterOrder_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_neededConversionForClusterOrder_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_neededConversionForClusterOrder_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element_3F_ GGS_neededConversionForClusterOrder_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder_2E_element_3F_ result ;
  const GGS_neededConversionForClusterOrder_2E_element_3F_ * p = (const GGS_neededConversionForClusterOrder_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_neededConversionForClusterOrder_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("neededConversionForClusterOrder.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element::GGS_generatedCodeMap_2E_element (void) :
mProperty_lkey (),
mProperty_mCode (),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element::GGS_generatedCodeMap_2E_element (const GGS_generatedCodeMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mCode (inSource.mProperty_mCode),
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element & GGS_generatedCodeMap_2E_element::operator = (const GGS_generatedCodeMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mCode = inSource.mProperty_mCode ;
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_generatedCodeMap_2E_element GGS_generatedCodeMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_codeList & in_mCode,
                                                                                   const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generatedCodeMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCode = in_mCode ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element::GGS_generatedCodeMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_codeList & inOperand1,
                                                                  const GGS_ipic_31__38_SequentialInstruction & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mCode (inOperand1),
mProperty_mInstruction (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element GGS_generatedCodeMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                 const GGS_codeList & in_mCode,
                                                                                 const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generatedCodeMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCode = in_mCode ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generatedCodeMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCode.isValid () && mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCode.drop () ;
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @generatedCodeMap.element:") ;
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
//     @generatedCodeMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap_2E_element ("generatedCodeMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_generatedCodeMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generatedCodeMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generatedCodeMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element GGS_generatedCodeMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap_2E_element result ;
  const GGS_generatedCodeMap_2E_element * p = (const GGS_generatedCodeMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generatedCodeMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @generatedCodeMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_::GGS_generatedCodeMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_::GGS_generatedCodeMap_2E_element_3F_ (const GGS_generatedCodeMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_ GGS_generatedCodeMap_2E_element_3F_::init_nil (void) {
  GGS_generatedCodeMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generatedCodeMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generatedCodeMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_generatedCodeMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generatedCodeMap_2E_element_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @generatedCodeMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generatedCodeMap_2E_element_3F_ ("generatedCodeMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_generatedCodeMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generatedCodeMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generatedCodeMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generatedCodeMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generatedCodeMap_2E_element_3F_ GGS_generatedCodeMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_generatedCodeMap_2E_element_3F_ result ;
  const GGS_generatedCodeMap_2E_element_3F_ * p = (const GGS_generatedCodeMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generatedCodeMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generatedCodeMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element::GGS_blockMapForStackComputation_2E_element (void) :
mProperty_lkey (),
mProperty_mBlock () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element::GGS_blockMapForStackComputation_2E_element (const GGS_blockMapForStackComputation_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mBlock (inSource.mProperty_mBlock) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element & GGS_blockMapForStackComputation_2E_element::operator = (const GGS_blockMapForStackComputation_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mBlock = inSource.mProperty_mBlock ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element GGS_blockMapForStackComputation_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                     const GGS_ipic_31__38_Block & in_mBlock,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockMapForStackComputation_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element::GGS_blockMapForStackComputation_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_ipic_31__38_Block & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mBlock (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element GGS_blockMapForStackComputation_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                       const GGS_ipic_31__38_Block & in_mBlock,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockMapForStackComputation_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBlock = in_mBlock ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBlock.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBlock.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockMapForStackComputation.element:") ;
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
//     @blockMapForStackComputation.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element ("blockMapForStackComputation.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockMapForStackComputation_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockMapForStackComputation_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockMapForStackComputation_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element GGS_blockMapForStackComputation_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation_2E_element result ;
  const GGS_blockMapForStackComputation_2E_element * p = (const GGS_blockMapForStackComputation_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockMapForStackComputation_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @blockMapForStackComputation_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_::GGS_blockMapForStackComputation_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_::GGS_blockMapForStackComputation_2E_element_3F_ (const GGS_blockMapForStackComputation_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_ GGS_blockMapForStackComputation_2E_element_3F_::init_nil (void) {
  GGS_blockMapForStackComputation_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockMapForStackComputation_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_blockMapForStackComputation_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockMapForStackComputation_2E_element_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockMapForStackComputation.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element_3F_ ("blockMapForStackComputation.element?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockMapForStackComputation_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockMapForStackComputation_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockMapForStackComputation_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockMapForStackComputation_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockMapForStackComputation_2E_element_3F_ GGS_blockMapForStackComputation_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_blockMapForStackComputation_2E_element_3F_ result ;
  const GGS_blockMapForStackComputation_2E_element_3F_ * p = (const GGS_blockMapForStackComputation_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockMapForStackComputation_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockMapForStackComputation.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element::GGS_routineCallMap_2E_element (void) :
mProperty_lkey (),
mProperty_mCalledRoutineSet (),
mProperty_mTerminatorStackNeeds () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element::GGS_routineCallMap_2E_element (const GGS_routineCallMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mCalledRoutineSet (inSource.mProperty_mCalledRoutineSet),
mProperty_mTerminatorStackNeeds (inSource.mProperty_mTerminatorStackNeeds) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element & GGS_routineCallMap_2E_element::operator = (const GGS_routineCallMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mCalledRoutineSet = inSource.mProperty_mCalledRoutineSet ;
  mProperty_mTerminatorStackNeeds = inSource.mProperty_mTerminatorStackNeeds ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineCallMap_2E_element GGS_routineCallMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                               const GGS_stringset & in_mCalledRoutineSet,
                                                                               const GGS_uint & in_mTerminatorStackNeeds,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineCallMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCalledRoutineSet = in_mCalledRoutineSet ;
  result.mProperty_mTerminatorStackNeeds = in_mTerminatorStackNeeds ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element::GGS_routineCallMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_stringset & inOperand1,
                                                              const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mCalledRoutineSet (inOperand1),
mProperty_mTerminatorStackNeeds (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element GGS_routineCallMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                             const GGS_stringset & in_mCalledRoutineSet,
                                                                             const GGS_uint & in_mTerminatorStackNeeds,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineCallMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mCalledRoutineSet = in_mCalledRoutineSet ;
  result.mProperty_mTerminatorStackNeeds = in_mTerminatorStackNeeds ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineCallMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mCalledRoutineSet.isValid () && mProperty_mTerminatorStackNeeds.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mCalledRoutineSet.drop () ;
  mProperty_mTerminatorStackNeeds.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineCallMap.element:") ;
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
//     @routineCallMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap_2E_element ("routineCallMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineCallMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineCallMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineCallMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element GGS_routineCallMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineCallMap_2E_element result ;
  const GGS_routineCallMap_2E_element * p = (const GGS_routineCallMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineCallMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @routineCallMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_::GGS_routineCallMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_::GGS_routineCallMap_2E_element_3F_ (const GGS_routineCallMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_ GGS_routineCallMap_2E_element_3F_::init_nil (void) {
  GGS_routineCallMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineCallMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineCallMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_routineCallMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineCallMap_2E_element_3F_::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineCallMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineCallMap_2E_element_3F_ ("routineCallMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineCallMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineCallMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineCallMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineCallMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineCallMap_2E_element_3F_ GGS_routineCallMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineCallMap_2E_element_3F_ result ;
  const GGS_routineCallMap_2E_element_3F_ * p = (const GGS_routineCallMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineCallMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineCallMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element::GGS_routineStackRequirementMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLevels () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element::GGS_routineStackRequirementMap_2E_element (const GGS_routineStackRequirementMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLevels (inSource.mProperty_mLevels) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element & GGS_routineStackRequirementMap_2E_element::operator = (const GGS_routineStackRequirementMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLevels = inSource.mProperty_mLevels ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element GGS_routineStackRequirementMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_uint & in_mLevels,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineStackRequirementMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLevels = in_mLevels ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element::GGS_routineStackRequirementMap_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLevels (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element GGS_routineStackRequirementMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                     const GGS_uint & in_mLevels,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineStackRequirementMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLevels = in_mLevels ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineStackRequirementMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLevels.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLevels.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @routineStackRequirementMap.element:") ;
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
//     @routineStackRequirementMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element ("routineStackRequirementMap.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineStackRequirementMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineStackRequirementMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineStackRequirementMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element GGS_routineStackRequirementMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap_2E_element result ;
  const GGS_routineStackRequirementMap_2E_element * p = (const GGS_routineStackRequirementMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineStackRequirementMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineStackRequirementMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @routineStackRequirementMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_::GGS_routineStackRequirementMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_::GGS_routineStackRequirementMap_2E_element_3F_ (const GGS_routineStackRequirementMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_ GGS_routineStackRequirementMap_2E_element_3F_::init_nil (void) {
  GGS_routineStackRequirementMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineStackRequirementMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_routineStackRequirementMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_routineStackRequirementMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineStackRequirementMap_2E_element_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @routineStackRequirementMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element_3F_ ("routineStackRequirementMap.element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineStackRequirementMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineStackRequirementMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineStackRequirementMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineStackRequirementMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineStackRequirementMap_2E_element_3F_ GGS_routineStackRequirementMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_routineStackRequirementMap_2E_element_3F_ result ;
  const GGS_routineStackRequirementMap_2E_element_3F_ * p = (const GGS_routineStackRequirementMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineStackRequirementMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineStackRequirementMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element::GGS_blockDurationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mMinDuration (),
mProperty_mMaxDuration () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element::GGS_blockDurationMap_2E_element (const GGS_blockDurationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mMinDuration (inSource.mProperty_mMinDuration),
mProperty_mMaxDuration (inSource.mProperty_mMaxDuration) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element & GGS_blockDurationMap_2E_element::operator = (const GGS_blockDurationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mMinDuration = inSource.mProperty_mMinDuration ;
  mProperty_mMaxDuration = inSource.mProperty_mMaxDuration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_blockDurationMap_2E_element GGS_blockDurationMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_uint & in_mMinDuration,
                                                                                   const GGS_uint & in_mMaxDuration,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockDurationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mMinDuration = in_mMinDuration ;
  result.mProperty_mMaxDuration = in_mMaxDuration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element::GGS_blockDurationMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_uint & inOperand1,
                                                                  const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mMinDuration (inOperand1),
mProperty_mMaxDuration (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element GGS_blockDurationMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                 const GGS_uint & in_mMinDuration,
                                                                                 const GGS_uint & in_mMaxDuration,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_blockDurationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mMinDuration = in_mMinDuration ;
  result.mProperty_mMaxDuration = in_mMaxDuration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockDurationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mMinDuration.isValid () && mProperty_mMaxDuration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mMinDuration.drop () ;
  mProperty_mMaxDuration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @blockDurationMap.element:") ;
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
//     @blockDurationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap_2E_element ("blockDurationMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockDurationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockDurationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockDurationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element GGS_blockDurationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_blockDurationMap_2E_element result ;
  const GGS_blockDurationMap_2E_element * p = (const GGS_blockDurationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockDurationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockDurationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @blockDurationMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element_3F_::GGS_blockDurationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element_3F_::GGS_blockDurationMap_2E_element_3F_ (const GGS_blockDurationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element_3F_ GGS_blockDurationMap_2E_element_3F_::init_nil (void) {
  GGS_blockDurationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockDurationMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockDurationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_blockDurationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockDurationMap_2E_element_3F_::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @blockDurationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockDurationMap_2E_element_3F_ ("blockDurationMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockDurationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockDurationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockDurationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockDurationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockDurationMap_2E_element_3F_ GGS_blockDurationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_blockDurationMap_2E_element_3F_ result ;
  const GGS_blockDurationMap_2E_element_3F_ * p = (const GGS_blockDurationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockDurationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockDurationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element::GGS_declaredByteMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element::GGS_declaredByteMap_2E_element (const GGS_declaredByteMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element & GGS_declaredByteMap_2E_element::operator = (const GGS_declaredByteMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declaredByteMap_2E_element GGS_declaredByteMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declaredByteMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element::GGS_declaredByteMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element GGS_declaredByteMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declaredByteMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredByteMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declaredByteMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declaredByteMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap_2E_element ("declaredByteMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredByteMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredByteMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredByteMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element GGS_declaredByteMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap_2E_element result ;
  const GGS_declaredByteMap_2E_element * p = (const GGS_declaredByteMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredByteMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredByteMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @declaredByteMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_::GGS_declaredByteMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_::GGS_declaredByteMap_2E_element_3F_ (const GGS_declaredByteMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_ GGS_declaredByteMap_2E_element_3F_::init_nil (void) {
  GGS_declaredByteMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredByteMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredByteMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_declaredByteMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredByteMap_2E_element_3F_::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declaredByteMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredByteMap_2E_element_3F_ ("declaredByteMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredByteMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredByteMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredByteMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredByteMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredByteMap_2E_element_3F_ GGS_declaredByteMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_declaredByteMap_2E_element_3F_ result ;
  const GGS_declaredByteMap_2E_element_3F_ * p = (const GGS_declaredByteMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredByteMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredByteMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element::GGS_registerTable_2E_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddressList (),
mProperty_mSize (),
mProperty_mBitSliceTable (),
mProperty_mBitDefinitionString (),
mProperty_mProtection () {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element::GGS_registerTable_2E_element (const GGS_registerTable_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRegisterAddressList (inSource.mProperty_mRegisterAddressList),
mProperty_mSize (inSource.mProperty_mSize),
mProperty_mBitSliceTable (inSource.mProperty_mBitSliceTable),
mProperty_mBitDefinitionString (inSource.mProperty_mBitDefinitionString),
mProperty_mProtection (inSource.mProperty_mProtection) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element & GGS_registerTable_2E_element::operator = (const GGS_registerTable_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRegisterAddressList = inSource.mProperty_mRegisterAddressList ;
  mProperty_mSize = inSource.mProperty_mSize ;
  mProperty_mBitSliceTable = inSource.mProperty_mBitSliceTable ;
  mProperty_mBitDefinitionString = inSource.mProperty_mBitDefinitionString ;
  mProperty_mProtection = inSource.mProperty_mProtection ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_registerTable_2E_element GGS_registerTable_2E_element::init_21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_uintlist & in_mRegisterAddressList,
                                                                                         const GGS_uint & in_mSize,
                                                                                         const GGS_bitSliceTable & in_mBitSliceTable,
                                                                                         const GGS_string & in_mBitDefinitionString,
                                                                                         const GGS_registerProtection & in_mProtection,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerTable_2E_element result ;
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

void GGS_registerTable_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element::GGS_registerTable_2E_element (const GGS_lstring & inOperand0,
                                                            const GGS_uintlist & inOperand1,
                                                            const GGS_uint & inOperand2,
                                                            const GGS_bitSliceTable & inOperand3,
                                                            const GGS_string & inOperand4,
                                                            const GGS_registerProtection & inOperand5) :
mProperty_lkey (inOperand0),
mProperty_mRegisterAddressList (inOperand1),
mProperty_mSize (inOperand2),
mProperty_mBitSliceTable (inOperand3),
mProperty_mBitDefinitionString (inOperand4),
mProperty_mProtection (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element GGS_registerTable_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                           const GGS_uintlist & in_mRegisterAddressList,
                                                                           const GGS_uint & in_mSize,
                                                                           const GGS_bitSliceTable & in_mBitSliceTable,
                                                                           const GGS_string & in_mBitDefinitionString,
                                                                           const GGS_registerProtection & in_mProtection,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerTable_2E_element result ;
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

bool GGS_registerTable_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddressList.isValid () && mProperty_mSize.isValid () && mProperty_mBitSliceTable.isValid () && mProperty_mBitDefinitionString.isValid () && mProperty_mProtection.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddressList.drop () ;
  mProperty_mSize.drop () ;
  mProperty_mBitSliceTable.drop () ;
  mProperty_mBitDefinitionString.drop () ;
  mProperty_mProtection.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @registerTable.element:") ;
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
//     @registerTable.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable_2E_element ("registerTable.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerTable_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerTable_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerTable_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element GGS_registerTable_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_registerTable_2E_element result ;
  const GGS_registerTable_2E_element * p = (const GGS_registerTable_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerTable_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerTable.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @registerTable_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_::GGS_registerTable_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_::GGS_registerTable_2E_element_3F_ (const GGS_registerTable_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_ GGS_registerTable_2E_element_3F_::init_nil (void) {
  GGS_registerTable_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerTable_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_registerTable_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_registerTable_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_registerTable_2E_element_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @registerTable.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_registerTable_2E_element_3F_ ("registerTable.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_registerTable_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_registerTable_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_registerTable_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_registerTable_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerTable_2E_element_3F_ GGS_registerTable_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_registerTable_2E_element_3F_ result ;
  const GGS_registerTable_2E_element_3F_ * p = (const GGS_registerTable_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_registerTable_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("registerTable.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element::GGS_ramBankTable_2E_element (void) :
mProperty_lkey (),
mProperty_mFirstAddress (),
mProperty_mFirstFreeAddress (),
mProperty_mLastAddressPlusOne (),
mProperty_mMirrorOffsetList () {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element::GGS_ramBankTable_2E_element (const GGS_ramBankTable_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFirstAddress (inSource.mProperty_mFirstAddress),
mProperty_mFirstFreeAddress (inSource.mProperty_mFirstFreeAddress),
mProperty_mLastAddressPlusOne (inSource.mProperty_mLastAddressPlusOne),
mProperty_mMirrorOffsetList (inSource.mProperty_mMirrorOffsetList) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element & GGS_ramBankTable_2E_element::operator = (const GGS_ramBankTable_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFirstAddress = inSource.mProperty_mFirstAddress ;
  mProperty_mFirstFreeAddress = inSource.mProperty_mFirstFreeAddress ;
  mProperty_mLastAddressPlusOne = inSource.mProperty_mLastAddressPlusOne ;
  mProperty_mMirrorOffsetList = inSource.mProperty_mMirrorOffsetList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ramBankTable_2E_element GGS_ramBankTable_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_uint & in_mFirstAddress,
                                                                                   const GGS_uint & in_mFirstFreeAddress,
                                                                                   const GGS_uint & in_mLastAddressPlusOne,
                                                                                   const GGS_uintlist & in_mMirrorOffsetList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ramBankTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFirstAddress = in_mFirstAddress ;
  result.mProperty_mFirstFreeAddress = in_mFirstFreeAddress ;
  result.mProperty_mLastAddressPlusOne = in_mLastAddressPlusOne ;
  result.mProperty_mMirrorOffsetList = in_mMirrorOffsetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element::GGS_ramBankTable_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_uint & inOperand1,
                                                          const GGS_uint & inOperand2,
                                                          const GGS_uint & inOperand3,
                                                          const GGS_uintlist & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mFirstAddress (inOperand1),
mProperty_mFirstFreeAddress (inOperand2),
mProperty_mLastAddressPlusOne (inOperand3),
mProperty_mMirrorOffsetList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element GGS_ramBankTable_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                         const GGS_uint & in_mFirstAddress,
                                                                         const GGS_uint & in_mFirstFreeAddress,
                                                                         const GGS_uint & in_mLastAddressPlusOne,
                                                                         const GGS_uintlist & in_mMirrorOffsetList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ramBankTable_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFirstAddress = in_mFirstAddress ;
  result.mProperty_mFirstFreeAddress = in_mFirstFreeAddress ;
  result.mProperty_mLastAddressPlusOne = in_mLastAddressPlusOne ;
  result.mProperty_mMirrorOffsetList = in_mMirrorOffsetList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ramBankTable_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFirstAddress.isValid () && mProperty_mFirstFreeAddress.isValid () && mProperty_mLastAddressPlusOne.isValid () && mProperty_mMirrorOffsetList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFirstAddress.drop () ;
  mProperty_mFirstFreeAddress.drop () ;
  mProperty_mLastAddressPlusOne.drop () ;
  mProperty_mMirrorOffsetList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ramBankTable.element:") ;
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
//     @ramBankTable.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable_2E_element ("ramBankTable.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ramBankTable_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ramBankTable_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ramBankTable_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element GGS_ramBankTable_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_ramBankTable_2E_element result ;
  const GGS_ramBankTable_2E_element * p = (const GGS_ramBankTable_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ramBankTable_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramBankTable.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ramBankTable_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_::GGS_ramBankTable_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_::GGS_ramBankTable_2E_element_3F_ (const GGS_ramBankTable_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_ GGS_ramBankTable_2E_element_3F_::init_nil (void) {
  GGS_ramBankTable_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ramBankTable_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ramBankTable_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ramBankTable_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ramBankTable_2E_element_3F_::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ramBankTable.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ramBankTable_2E_element_3F_ ("ramBankTable.element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ramBankTable_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ramBankTable_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ramBankTable_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ramBankTable_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ramBankTable_2E_element_3F_ GGS_ramBankTable_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ramBankTable_2E_element_3F_ result ;
  const GGS_ramBankTable_2E_element_3F_ * p = (const GGS_ramBankTable_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ramBankTable_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ramBankTable.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element::GGS_illegalMaskList_2E_element (void) :
mProperty_mIllegalValue (),
mProperty_mIllegalMask (),
mProperty_mDescription () {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element::GGS_illegalMaskList_2E_element (const GGS_illegalMaskList_2E_element & inSource) :
mProperty_mIllegalValue (inSource.mProperty_mIllegalValue),
mProperty_mIllegalMask (inSource.mProperty_mIllegalMask),
mProperty_mDescription (inSource.mProperty_mDescription) {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element & GGS_illegalMaskList_2E_element::operator = (const GGS_illegalMaskList_2E_element & inSource) {
  mProperty_mIllegalValue = inSource.mProperty_mIllegalValue ;
  mProperty_mIllegalMask = inSource.mProperty_mIllegalMask ;
  mProperty_mDescription = inSource.mProperty_mDescription ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_illegalMaskList_2E_element GGS_illegalMaskList_2E_element::init_21__21__21_ (const GGS_luint & in_mIllegalValue,
                                                                                 const GGS_luint & in_mIllegalMask,
                                                                                 const GGS_lstring & in_mDescription,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_illegalMaskList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIllegalValue = in_mIllegalValue ;
  result.mProperty_mIllegalMask = in_mIllegalMask ;
  result.mProperty_mDescription = in_mDescription ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element::GGS_illegalMaskList_2E_element (const GGS_luint & inOperand0,
                                                                const GGS_luint & inOperand1,
                                                                const GGS_lstring & inOperand2) :
mProperty_mIllegalValue (inOperand0),
mProperty_mIllegalMask (inOperand1),
mProperty_mDescription (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element GGS_illegalMaskList_2E_element::class_func_new (const GGS_luint & in_mIllegalValue,
                                                                               const GGS_luint & in_mIllegalMask,
                                                                               const GGS_lstring & in_mDescription,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_illegalMaskList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIllegalValue = in_mIllegalValue ;
  result.mProperty_mIllegalMask = in_mIllegalMask ;
  result.mProperty_mDescription = in_mDescription ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_illegalMaskList_2E_element::isValid (void) const {
  return mProperty_mIllegalValue.isValid () && mProperty_mIllegalMask.isValid () && mProperty_mDescription.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList_2E_element::drop (void) {
  mProperty_mIllegalValue.drop () ;
  mProperty_mIllegalMask.drop () ;
  mProperty_mDescription.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_illegalMaskList_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @illegalMaskList.element:") ;
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
//     @illegalMaskList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_illegalMaskList_2E_element ("illegalMaskList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_illegalMaskList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_illegalMaskList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_illegalMaskList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_illegalMaskList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_illegalMaskList_2E_element GGS_illegalMaskList_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_illegalMaskList_2E_element result ;
  const GGS_illegalMaskList_2E_element * p = (const GGS_illegalMaskList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_illegalMaskList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("illegalMaskList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element::GGS_fieldSettingMap_2E_element (void) :
mProperty_lkey (),
mProperty_mValue (),
mProperty_mMask () {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element::GGS_fieldSettingMap_2E_element (const GGS_fieldSettingMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mValue (inSource.mProperty_mValue),
mProperty_mMask (inSource.mProperty_mMask) {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element & GGS_fieldSettingMap_2E_element::operator = (const GGS_fieldSettingMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mValue = inSource.mProperty_mValue ;
  mProperty_mMask = inSource.mProperty_mMask ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fieldSettingMap_2E_element GGS_fieldSettingMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                 const GGS_uint & in_mValue,
                                                                                 const GGS_uint & in_mMask,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fieldSettingMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  result.mProperty_mMask = in_mMask ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element::GGS_fieldSettingMap_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_uint & inOperand1,
                                                                const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mValue (inOperand1),
mProperty_mMask (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element GGS_fieldSettingMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                               const GGS_uint & in_mValue,
                                                                               const GGS_uint & in_mMask,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fieldSettingMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mValue = in_mValue ;
  result.mProperty_mMask = in_mMask ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fieldSettingMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mValue.isValid () && mProperty_mMask.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mValue.drop () ;
  mProperty_mMask.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fieldSettingMap.element:") ;
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
//     @fieldSettingMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fieldSettingMap_2E_element ("fieldSettingMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fieldSettingMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fieldSettingMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fieldSettingMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element GGS_fieldSettingMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_fieldSettingMap_2E_element result ;
  const GGS_fieldSettingMap_2E_element * p = (const GGS_fieldSettingMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fieldSettingMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fieldSettingMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element_3F_::GGS_fieldSettingMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element_3F_::GGS_fieldSettingMap_2E_element_3F_ (const GGS_fieldSettingMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element_3F_ GGS_fieldSettingMap_2E_element_3F_::init_nil (void) {
  GGS_fieldSettingMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fieldSettingMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fieldSettingMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fieldSettingMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fieldSettingMap_2E_element_3F_::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fieldSettingMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fieldSettingMap_2E_element_3F_ ("fieldSettingMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fieldSettingMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fieldSettingMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fieldSettingMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fieldSettingMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap_2E_element_3F_ GGS_fieldSettingMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_fieldSettingMap_2E_element_3F_ result ;
  const GGS_fieldSettingMap_2E_element_3F_ * p = (const GGS_fieldSettingMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fieldSettingMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fieldSettingMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element::GGS_configRegisterMaskMap_2E_element (void) :
mProperty_lkey (),
mProperty_mMaskValue (),
mProperty_mDescription (),
mProperty_mFieldSettingMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element::GGS_configRegisterMaskMap_2E_element (const GGS_configRegisterMaskMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mMaskValue (inSource.mProperty_mMaskValue),
mProperty_mDescription (inSource.mProperty_mDescription),
mProperty_mFieldSettingMap (inSource.mProperty_mFieldSettingMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element & GGS_configRegisterMaskMap_2E_element::operator = (const GGS_configRegisterMaskMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mMaskValue = inSource.mProperty_mMaskValue ;
  mProperty_mDescription = inSource.mProperty_mDescription ;
  mProperty_mFieldSettingMap = inSource.mProperty_mFieldSettingMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element GGS_configRegisterMaskMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                 const GGS_luint & in_mMaskValue,
                                                                                                 const GGS_lstring & in_mDescription,
                                                                                                 const GGS_fieldSettingMap & in_mFieldSettingMap,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configRegisterMaskMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mMaskValue = in_mMaskValue ;
  result.mProperty_mDescription = in_mDescription ;
  result.mProperty_mFieldSettingMap = in_mFieldSettingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element::GGS_configRegisterMaskMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_luint & inOperand1,
                                                                            const GGS_lstring & inOperand2,
                                                                            const GGS_fieldSettingMap & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mMaskValue (inOperand1),
mProperty_mDescription (inOperand2),
mProperty_mFieldSettingMap (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element GGS_configRegisterMaskMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                           const GGS_luint & in_mMaskValue,
                                                                                           const GGS_lstring & in_mDescription,
                                                                                           const GGS_fieldSettingMap & in_mFieldSettingMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configRegisterMaskMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mMaskValue = in_mMaskValue ;
  result.mProperty_mDescription = in_mDescription ;
  result.mProperty_mFieldSettingMap = in_mFieldSettingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMaskMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mMaskValue.isValid () && mProperty_mDescription.isValid () && mProperty_mFieldSettingMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mMaskValue.drop () ;
  mProperty_mDescription.drop () ;
  mProperty_mFieldSettingMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configRegisterMaskMap.element:") ;
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
//     @configRegisterMaskMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element ("configRegisterMaskMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMaskMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configRegisterMaskMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configRegisterMaskMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element GGS_configRegisterMaskMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap_2E_element result ;
  const GGS_configRegisterMaskMap_2E_element * p = (const GGS_configRegisterMaskMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configRegisterMaskMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMaskMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @configRegisterMaskMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_::GGS_configRegisterMaskMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_::GGS_configRegisterMaskMap_2E_element_3F_ (const GGS_configRegisterMaskMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_ GGS_configRegisterMaskMap_2E_element_3F_::init_nil (void) {
  GGS_configRegisterMaskMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMaskMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMaskMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_configRegisterMaskMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMaskMap_2E_element_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configRegisterMaskMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element_3F_ ("configRegisterMaskMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMaskMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMaskMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configRegisterMaskMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configRegisterMaskMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMaskMap_2E_element_3F_ GGS_configRegisterMaskMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_configRegisterMaskMap_2E_element_3F_ result ;
  const GGS_configRegisterMaskMap_2E_element_3F_ * p = (const GGS_configRegisterMaskMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configRegisterMaskMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMaskMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element::GGS_configRegisterMap_2E_element (void) :
mProperty_lkey (),
mProperty_mRegisterAddress (),
mProperty_mRegisterWidth (),
mProperty_mConfigRegisterMaskMap (),
mProperty_mIllegalMaskList () {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element::GGS_configRegisterMap_2E_element (const GGS_configRegisterMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mRegisterAddress (inSource.mProperty_mRegisterAddress),
mProperty_mRegisterWidth (inSource.mProperty_mRegisterWidth),
mProperty_mConfigRegisterMaskMap (inSource.mProperty_mConfigRegisterMaskMap),
mProperty_mIllegalMaskList (inSource.mProperty_mIllegalMaskList) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element & GGS_configRegisterMap_2E_element::operator = (const GGS_configRegisterMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mRegisterAddress = inSource.mProperty_mRegisterAddress ;
  mProperty_mRegisterWidth = inSource.mProperty_mRegisterWidth ;
  mProperty_mConfigRegisterMaskMap = inSource.mProperty_mConfigRegisterMaskMap ;
  mProperty_mIllegalMaskList = inSource.mProperty_mIllegalMaskList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_configRegisterMap_2E_element GGS_configRegisterMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_luint & in_mRegisterAddress,
                                                                                             const GGS_luint & in_mRegisterWidth,
                                                                                             const GGS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                                                             const GGS_illegalMaskList & in_mIllegalMaskList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configRegisterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mRegisterWidth = in_mRegisterWidth ;
  result.mProperty_mConfigRegisterMaskMap = in_mConfigRegisterMaskMap ;
  result.mProperty_mIllegalMaskList = in_mIllegalMaskList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element::GGS_configRegisterMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_luint & inOperand1,
                                                                    const GGS_luint & inOperand2,
                                                                    const GGS_configRegisterMaskMap & inOperand3,
                                                                    const GGS_illegalMaskList & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mRegisterWidth (inOperand2),
mProperty_mConfigRegisterMaskMap (inOperand3),
mProperty_mIllegalMaskList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element GGS_configRegisterMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                   const GGS_luint & in_mRegisterAddress,
                                                                                   const GGS_luint & in_mRegisterWidth,
                                                                                   const GGS_configRegisterMaskMap & in_mConfigRegisterMaskMap,
                                                                                   const GGS_illegalMaskList & in_mIllegalMaskList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configRegisterMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mRegisterWidth = in_mRegisterWidth ;
  result.mProperty_mConfigRegisterMaskMap = in_mConfigRegisterMaskMap ;
  result.mProperty_mIllegalMaskList = in_mIllegalMaskList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mRegisterWidth.isValid () && mProperty_mConfigRegisterMaskMap.isValid () && mProperty_mIllegalMaskList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mRegisterWidth.drop () ;
  mProperty_mConfigRegisterMaskMap.drop () ;
  mProperty_mIllegalMaskList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configRegisterMap.element:") ;
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
//     @configRegisterMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap_2E_element ("configRegisterMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configRegisterMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configRegisterMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element GGS_configRegisterMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap_2E_element result ;
  const GGS_configRegisterMap_2E_element * p = (const GGS_configRegisterMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configRegisterMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @configRegisterMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_::GGS_configRegisterMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_::GGS_configRegisterMap_2E_element_3F_ (const GGS_configRegisterMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_ GGS_configRegisterMap_2E_element_3F_::init_nil (void) {
  GGS_configRegisterMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configRegisterMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_configRegisterMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configRegisterMap_2E_element_3F_::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configRegisterMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configRegisterMap_2E_element_3F_ ("configRegisterMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configRegisterMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configRegisterMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configRegisterMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configRegisterMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configRegisterMap_2E_element_3F_ GGS_configRegisterMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_configRegisterMap_2E_element_3F_ result ;
  const GGS_configRegisterMap_2E_element_3F_ * p = (const GGS_configRegisterMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configRegisterMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configRegisterMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_piccoloOptions_doNotReorderCluster ("piccoloOptions",
                                         "doNotReorderCluster",
                                         78,
                                         "no-relative-resolution",
                                         "Do not try to re order blocks for using relatives branches (PIC18 compiler only)") ;

BoolCommandLineOption gOption_piccoloOptions_doNotWarnRecursive ("piccoloOptions",
                                         "doNotWarnRecursive",
                                         82,
                                         "no-warning-on-recursive-routines",
                                         "Do not warn when there are recursive routines (PIC18 compiler only)") ;

BoolCommandLineOption gOption_piccoloOptions_generateGraphvizFiles ("piccoloOptions",
                                         "generateGraphvizFiles",
                                         71,
                                         "generate-graphviz-files",
                                         "Generate Graphviz files  containing block invocation, block sorting constraints, ...") ;

BoolCommandLineOption gOption_piccoloOptions_generateAssembly ("piccoloOptions",
                                         "generateAssembly",
                                         83,
                                         "asm",
                                         "Generate also an assembly language text file (with .asm extension)") ;

BoolCommandLineOption gOption_piccoloOptions_output_5F_C_5F_Array ("piccoloOptions",
                                         "output_C_Array",
                                         67,
                                         "output-c-files",
                                         "Generate output code in a C header file and C source file") ;

BoolCommandLineOption gOption_piccoloOptions_ouputListingFile ("piccoloOptions",
                                         "ouputListingFile",
                                         76,
                                         "list",
                                         "Output a list file") ;

BoolCommandLineOption gOption_piccoloOptions_performOptimizations ("piccoloOptions",
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

StringCommandLineOption gOption_piccoloOptions_optimizationFlags ("piccoloOptions",
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

void routine_checkCurrentEmitAddress_3F_ (const GGS_uint constinArgument_inCurrentAddress,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_addr_1345 ;
  {
  routine_currentEmitAddress_21_ (var_addr_1345, inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 41)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("intermediate_generic.galgas", 42)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_addr_1345.objectCompare (constinArgument_inCurrentAddress)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 42)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)), GGS_string ("internal error: current emit address is ").add_operation (var_addr_1345.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (GGS_string ("; it should be "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)).add_operation (constinArgument_inCurrentAddress.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 44)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 43)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatInteger eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatInteger::method_eval (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                        GGS_sint_36__34_ & outArgument_outResult,
                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_immediatInteger temp_0 = this ;
  outArgument_outResult = temp_0.readProperty_mValue ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 97)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatRegister eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatRegister::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                         const GGS_constantMap constinArgument_inConstantMap,
                                         GGS_sint_36__34_ & outArgument_outResult,
                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_immediatRegister temp_1 = this ;
    test_0 = constinArgument_inRegisterTable.getter_hasKey (temp_1.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas", 108)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_immediatRegister temp_2 = this ;
      ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_2.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 109)) ;
      GGS_uintlist var_registerAddressList_4032 ;
      GGS_uint var_size_4057 ;
      GGS_registerProtection var_protection_4071 ;
      const GGS_immediatRegister temp_3 = this ;
      GGS_bitSliceTable joker_4062_2 ; // Joker input parameter
      GGS_string joker_4062_1 ; // Joker input parameter
      constinArgument_inRegisterTable.method_searchKey (temp_3.readProperty_mRegister ().readProperty_mRegisterName (), var_registerAddressList_4032, var_size_4057, joker_4062_2, joker_4062_1, var_protection_4071, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 110)) ;
      const GGS_immediatRegister temp_4 = this ;
      extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_4.readProperty_mRegister ().readProperty_mRegisterName (), GGS_bool (false), var_protection_4071, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111)) ;
      GGS_uint var_registerAddress_4221 ;
      var_registerAddressList_4032.method_first (var_registerAddress_4221, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 112)) ;
      GGS_sint_36__34_ var_offset_4316 ;
      const GGS_immediatRegister temp_5 = this ;
      callExtensionMethod_eval ((cPtr_immediatExpression *) temp_5.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4316, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 113)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::lowerThan, var_offset_4316.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_immediatRegister temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index (").add_operation (var_offset_4316.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 116)).add_operation (GGS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 116)), fixItArray8  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 115)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_4316.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)).objectCompare (var_size_4057)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_immediatRegister temp_10 = this ;
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_10.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index (").add_operation (var_offset_4316.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (GGS_string (") should be lower than size ("), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (var_size_4057.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)), fixItArray11  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 118)) ;
          }
        }
      }
      outArgument_outResult = var_registerAddress_4221.getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 121)).add_operation (var_offset_4316, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 121)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_immediatRegister temp_13 = this ;
      test_12 = constinArgument_inConstantMap.getter_hasKey (temp_13.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas", 122)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_immediatRegister temp_14 = this ;
        constinArgument_inConstantMap.method_searchKey (temp_14.readProperty_mRegister ().readProperty_mRegisterName (), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 123)) ;
        GGS_sint_36__34_ var_offset_4911 ;
        const GGS_immediatRegister temp_15 = this ;
        callExtensionMethod_eval ((cPtr_immediatExpression *) temp_15.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4911, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 124)) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = GGS_bool (ComparisonKind::notEqual, GGS_sint_36__34_ (int64_t (0LL)).objectCompare (var_offset_4911)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_immediatRegister temp_17 = this ;
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index notation (").add_operation (var_offset_4911.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 127)).add_operation (GGS_string (") cannot be used with a constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 127)), fixItArray18  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 126)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      const GGS_immediatRegister temp_19 = this ;
      const GGS_immediatRegister temp_20 = this ;
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("'").add_operation (temp_20.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 130)).add_operation (GGS_string ("' should be declared as ram register or as constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 130)), fixItArray21  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 130)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatAdd eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatAdd::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_5564 ;
  const GGS_immediatAdd temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_5564, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 141)) ;
  GGS_sint_36__34_ var_rightResult_5669 ;
  const GGS_immediatAdd temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_5669, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 142)) ;
  outArgument_outResult = var_leftResult_5564.add_operation (var_rightResult_5669, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 143)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatSub eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatSub::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_6056 ;
  const GGS_immediatSub temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6056, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 153)) ;
  GGS_sint_36__34_ var_rightResult_6161 ;
  const GGS_immediatSub temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6161, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 154)) ;
  outArgument_outResult = var_leftResult_6056.substract_operation (var_rightResult_6161, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 155)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatMul eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatMul::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_6548 ;
  const GGS_immediatMul temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6548, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 165)) ;
  GGS_sint_36__34_ var_rightResult_6653 ;
  const GGS_immediatMul temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6653, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 166)) ;
  outArgument_outResult = var_leftResult_6548.multiply_operation (var_rightResult_6653, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 167)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatDiv eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatDiv::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_7040 ;
  const GGS_immediatDiv temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7040, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 177)) ;
  GGS_sint_36__34_ var_rightResult_7145 ;
  const GGS_immediatDiv temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7145, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 178)) ;
  outArgument_outResult = var_leftResult_7040.divide_operation (var_rightResult_7145, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 179)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatMod eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatMod::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_7532 ;
  const GGS_immediatMod temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7532, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 189)) ;
  GGS_sint_36__34_ var_rightResult_7637 ;
  const GGS_immediatMod temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7637, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 190)) ;
  outArgument_outResult = var_leftResult_7532.modulo_operation (var_rightResult_7637, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 191)) ;
}

