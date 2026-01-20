#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

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
// @ipic_31__38_ComputedGotoTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedGotoTerminator::objectCompare (const GGS_ipic_31__38_ComputedGotoTerminator & inOperand) const {
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

GGS_ipic_31__38_ComputedGotoTerminator::GGS_ipic_31__38_ComputedGotoTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator GGS_ipic_31__38_ComputedGotoTerminator::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstringlist & in_mTargetLabels,
                  const GGS_bool & in_mUsesRCALL,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_ComputedGotoTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_ComputedGotoTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_ComputedGotoTerminator_init_21__21__21_ (in_mInstructionLocation, in_mTargetLabels, in_mUsesRCALL, inCompiler) ;
  const GGS_ipic_31__38_ComputedGotoTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::
ipic_31__38_ComputedGotoTerminator_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_lstringlist & in_mTargetLabels,
                                                     const GGS_bool & in_mUsesRCALL,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator::GGS_ipic_31__38_ComputedGotoTerminator (const cPtr_ipic_31__38_ComputedGotoTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedGotoTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator GGS_ipic_31__38_ComputedGotoTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                               const GGS_lstringlist & in_mTargetLabels,
                                                                                               const GGS_bool & in_mUsesRCALL,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedGotoTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ComputedGotoTerminator (in_mInstructionLocation, in_mTargetLabels, in_mUsesRCALL,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_ipic_31__38_ComputedGotoTerminator::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_ComputedGotoTerminator::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedGotoTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedGotoTerminator::cPtr_ipic_31__38_ComputedGotoTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE),
mProperty_mTargetLabels (),
mProperty_mUsesRCALL () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedGotoTerminator::cPtr_ipic_31__38_ComputedGotoTerminator (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_lstringlist & in_mTargetLabels,
                                                                                  const GGS_bool & in_mUsesRCALL,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabels (),
mProperty_mUsesRCALL () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_ComputedGotoTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;
}

void cPtr_ipic_31__38_ComputedGotoTerminator::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18ComputedGotoTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedGotoTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedGotoTerminator (mProperty_mInstructionLocation, mProperty_mTargetLabels, mProperty_mUsesRCALL, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ComputedGotoTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabels.printNonNullClassInstanceProperties ("mTargetLabels") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedGotoTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ("ipic18ComputedGotoTerminator",
                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedGotoTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedGotoTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedGotoTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator GGS_ipic_31__38_ComputedGotoTerminator::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedGotoTerminator result ;
  const GGS_ipic_31__38_ComputedGotoTerminator * p = (const GGS_ipic_31__38_ComputedGotoTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedGotoTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedGotoTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
// @ipic_31__38_InstructionWithNoOperand reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_InstructionWithNoOperand::objectCompare (const GGS_ipic_31__38_InstructionWithNoOperand & inOperand) const {
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

GGS_ipic_31__38_InstructionWithNoOperand::GGS_ipic_31__38_InstructionWithNoOperand (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand GGS_ipic_31__38_InstructionWithNoOperand::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_InstructionWithNoOperand * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_InstructionWithNoOperand (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_InstructionWithNoOperand_init_21__21_ (in_mInstructionLocation, in_mKind, inCompiler) ;
  const GGS_ipic_31__38_InstructionWithNoOperand result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_InstructionWithNoOperand::
ipic_31__38_InstructionWithNoOperand_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                   const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand::GGS_ipic_31__38_InstructionWithNoOperand (const cPtr_ipic_31__38_InstructionWithNoOperand * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_InstructionWithNoOperand) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand GGS_ipic_31__38_InstructionWithNoOperand::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                   const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_InstructionWithNoOperand result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_InstructionWithNoOperand (in_mInstructionLocation, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_ipic_31__38_InstructionWithNoOperand::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_InstructionWithNoOperandKind () ;
  }else{
    cPtr_ipic_31__38_InstructionWithNoOperand * p = (cPtr_ipic_31__38_InstructionWithNoOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_InstructionWithNoOperand) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18InstructionWithNoOperand class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_InstructionWithNoOperand::cPtr_ipic_31__38_InstructionWithNoOperand (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_InstructionWithNoOperand::cPtr_ipic_31__38_InstructionWithNoOperand (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_InstructionWithNoOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;
}

void cPtr_ipic_31__38_InstructionWithNoOperand::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18InstructionWithNoOperand:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_InstructionWithNoOperand::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_InstructionWithNoOperand (mProperty_mInstructionLocation, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_InstructionWithNoOperand::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18InstructionWithNoOperand generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ("ipic18InstructionWithNoOperand",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_InstructionWithNoOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_InstructionWithNoOperand::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_InstructionWithNoOperand (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand GGS_ipic_31__38_InstructionWithNoOperand::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_InstructionWithNoOperand result ;
  const GGS_ipic_31__38_InstructionWithNoOperand * p = (const GGS_ipic_31__38_InstructionWithNoOperand *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_InstructionWithNoOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18InstructionWithNoOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction_5F_FDA_5F_base_5F_code, in_mRegisterDescription, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::
ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                         const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                         const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                         const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = in_mInstruction_5F_FDA_5F_base_5F_code ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                               const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                                               const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                               const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (in_mInstructionLocation, in_mInstruction_5F_FDA_5F_base_5F_code, in_mRegisterDescription, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    return p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FDA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const GGS_location & in_mInstructionLocation,
                                                                                                                  const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code = in_mInstruction_5F_FDA_5F_base_5F_code ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_FDA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FDA_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FDA_base_code") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FDA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ("ipic18_intermediate_instruction_FDA",
                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                  const GGS_uint & in_mLiteralValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mLiteralInstruction, in_mLiteralValue, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::
ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                  const GGS_uint & in_mLiteralValue,
                                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                                         const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                                                         const GGS_uint & in_mLiteralValue,
                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (in_mInstructionLocation, in_mLiteralInstruction, in_mLiteralValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                                                            const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                                            const GGS_uint & in_mLiteralValue,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mLiteralValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mLiteralValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_literalOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ("ipic18_intermediate_instruction_literalOperation",
                                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_FBA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_init_21__21__21__21_ (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::
ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                         const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                         const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                         const GGS_uint & in_mBitNumber,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                               const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                                                               const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                               const GGS_uint & in_mBitNumber,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterDescription, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FBA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const GGS_location & in_mInstructionLocation,
                                                                                                                  const GGS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GGS_uint & in_mBitNumber,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_FBA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBitOrientedOp.printNonNullClassInstanceProperties ("mBitOrientedOp") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FBA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ("ipic18_intermediate_instruction_FBA",
                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FBA", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
// @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_tableAccessOption & in_mOption,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_init_21__21_ (in_mInstructionLocation, in_mOption, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::
ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_tableAccessOption & in_mOption,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOption = in_mOption ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                   const GGS_tableAccessOption & in_mOption,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (in_mInstructionLocation, in_mOption,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableAccessOption () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_TBLRD class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mOption () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const GGS_location & in_mInstructionLocation,
                                                                                                                      const GGS_tableAccessOption & in_mOption,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOption () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOption = in_mOption ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_TBLRD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (mProperty_mInstructionLocation, mProperty_mOption, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_TBLRD generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ("ipic18_intermediate_instruction_TBLRD",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLRD", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//Extension method '@pic18PiccoloInstruction performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_PiccoloInstruction::method_performInlining (const GGS_stringset /* constinArgument_inInlinedRoutineSet */,
                                                                 const GGS_declaredRoutineMap /* constinArgument_inDeclaredRoutineMap */,
                                                                 const GGS_stringset /* constinArgument_inCurrentlyInlinedRoutineSet */,
                                                                 GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_PiccoloInstruction temp_0 = this ;
  ioArgument_ioInstructionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 22)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_performInlining (cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const GGS_stringset constin_inInlinedRoutineSet,
                                          const GGS_declaredRoutineMap constin_inDeclaredRoutineMap,
                                          const GGS_stringset constin_inCurrentlyInlinedRoutineSet,
                                          GGS_pic_31__38_InstructionList & io_ioInstructionList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    inObject->method_performInlining (constin_inInlinedRoutineSet, constin_inDeclaredRoutineMap, constin_inCurrentlyInlinedRoutineSet, io_ioInstructionList, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_LABEL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (void) :
GGS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::
init_21_ (const GGS_lstring & in_mLabel,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_LABEL_init_21_ (in_mLabel, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::
baseline_5F_intermediate_5F_pseudo_5F_LABEL_init_21_ (const GGS_lstring & in_mLabel,
                                                      Compiler * /* inCompiler */) {
  mProperty_mLabel = in_mLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (const GGS_lstring & in_mLabel,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (in_mLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::readProperty_mLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
    return p->mProperty_mLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_LABEL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (const GGS_lstring & in_mLabel,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mLabel () {
  mProperty_mLabel = in_mLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_LABEL:") ;
  mProperty_mLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL (mProperty_mLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mLabel.printNonNullClassInstanceProperties ("mLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_LABEL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ("baseline_intermediate_pseudo_LABEL",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_LABEL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (void) :
GGS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::
init_21__21_ (const GGS_lstring & in_mRoutineName,
              const GGS_bool & in_mIsRegular,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_init_21__21_ (in_mRoutineName, in_mIsRegular, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::
baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_init_21__21_ (const GGS_lstring & in_mRoutineName,
                                                                     const GGS_bool & in_mIsRegular,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::class_func_new (const GGS_lstring & in_mRoutineName,
                                                                                                                                       const GGS_bool & in_mIsRegular,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (in_mRoutineName, in_mIsRegular,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::readProperty_mIsRegular (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
    return p->mProperty_mIsRegular ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_BEGIN_ROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (const GGS_lstring & in_mRoutineName,
                                                                                                                          const GGS_bool & in_mIsRegular,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mIsRegular () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mIsRegular = in_mIsRegular ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_BEGIN_ROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsRegular.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (mProperty_mRoutineName, mProperty_mIsRegular, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mIsRegular.printNonNullClassInstanceProperties ("mIsRegular") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_BEGIN_ROUTINE generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ("baseline_intermediate_pseudo_BEGIN_ROUTINE",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_BEGIN_ROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (void) :
GGS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::
init_21__21_ (const GGS_lstring & in_mRoutineName,
              const GGS_uint & in_mPage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_init_21__21_ (in_mRoutineName, in_mPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::
baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_init_21__21_ (const GGS_lstring & in_mRoutineName,
                                                                   const GGS_uint & in_mPage,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::class_func_new (const GGS_lstring & in_mRoutineName,
                                                                                                                                   const GGS_uint & in_mPage,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (in_mRoutineName, in_mPage,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::readProperty_mPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
    return p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_END_ROUTINE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (const GGS_lstring & in_mRoutineName,
                                                                                                                      const GGS_uint & in_mPage,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mPage () {
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_END_ROUTINE:") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (mProperty_mRoutineName, mProperty_mPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mPage.printNonNullClassInstanceProperties ("mPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_END_ROUTINE generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ("baseline_intermediate_pseudo_END_ROUTINE",
                                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_END_ROUTINE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_GOTO::objectCompare (const GGS_baseline_5F_intermediate_5F_GOTO & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_GOTO::GGS_baseline_5F_intermediate_5F_GOTO (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::
baseline_5F_intermediate_5F_GOTO_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO::GGS_baseline_5F_intermediate_5F_GOTO (const cPtr_baseline_5F_intermediate_5F_GOTO * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mTargetLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_GOTO (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_GOTO::cPtr_baseline_5F_intermediate_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

void cPtr_baseline_5F_intermediate_5F_GOTO::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_GOTO generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ("baseline_intermediate_GOTO",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO result ;
  const GGS_baseline_5F_intermediate_5F_GOTO * p = (const GGS_baseline_5F_intermediate_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JUMP::objectCompare (const GGS_baseline_5F_intermediate_5F_JUMP & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JUMP::GGS_baseline_5F_intermediate_5F_JUMP (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetLabel,
                      const GGS_uint & in_mCurrentPage,
                      const GGS_uint & in_mTargetPage,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_JUMP_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::
baseline_5F_intermediate_5F_JUMP_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_lstring & in_mTargetLabel,
                                                       const GGS_uint & in_mCurrentPage,
                                                       const GGS_uint & in_mTargetPage,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP::GGS_baseline_5F_intermediate_5F_JUMP (const cPtr_baseline_5F_intermediate_5F_JUMP * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mTargetLabel,
                                                                                           const GGS_uint & in_mCurrentPage,
                                                                                           const GGS_uint & in_mTargetPage,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_JUMP (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JUMP::readProperty_mCurrentPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mCurrentPage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JUMP::readProperty_mTargetPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JUMP) ;
    return p->mProperty_mTargetPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JUMP::cPtr_baseline_5F_intermediate_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              const GGS_uint & in_mCurrentPage,
                                                                              const GGS_uint & in_mTargetPage,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

void cPtr_baseline_5F_intermediate_5F_JUMP::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mCurrentPage, mProperty_mTargetPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mCurrentPage.printNonNullClassInstanceProperties ("mCurrentPage") ;
    mProperty_mTargetPage.printNonNullClassInstanceProperties ("mTargetPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_JUMP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ("baseline_intermediate_JUMP",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP result ;
  const GGS_baseline_5F_intermediate_5F_JUMP * p = (const GGS_baseline_5F_intermediate_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_CALL::objectCompare (const GGS_baseline_5F_intermediate_5F_CALL & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_CALL::GGS_baseline_5F_intermediate_5F_CALL (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_CALL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::
baseline_5F_intermediate_5F_CALL_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetLabel,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL::GGS_baseline_5F_intermediate_5F_CALL (const cPtr_baseline_5F_intermediate_5F_CALL * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mTargetLabel,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_CALL (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_CALL::cPtr_baseline_5F_intermediate_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mTargetLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

void cPtr_baseline_5F_intermediate_5F_CALL::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_CALL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ("baseline_intermediate_CALL",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL result ;
  const GGS_baseline_5F_intermediate_5F_CALL * p = (const GGS_baseline_5F_intermediate_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JSR::objectCompare (const GGS_baseline_5F_intermediate_5F_JSR & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JSR::GGS_baseline_5F_intermediate_5F_JSR (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetLabel,
                      const GGS_uint & in_mCurrentPage,
                      const GGS_uint & in_mTargetPage,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_JSR (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_JSR_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::
baseline_5F_intermediate_5F_JSR_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_lstring & in_mTargetLabel,
                                                      const GGS_uint & in_mCurrentPage,
                                                      const GGS_uint & in_mTargetPage,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR::GGS_baseline_5F_intermediate_5F_JSR (const cPtr_baseline_5F_intermediate_5F_JSR * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         const GGS_uint & in_mCurrentPage,
                                                                                         const GGS_uint & in_mTargetPage,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_JSR (in_mInstructionLocation, in_mTargetLabel, in_mCurrentPage, in_mTargetPage,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JSR::readProperty_mCurrentPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mCurrentPage ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_JSR::readProperty_mTargetPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_JSR) ;
    return p->mProperty_mTargetPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_JSR::cPtr_baseline_5F_intermediate_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            const GGS_uint & in_mCurrentPage,
                                                                            const GGS_uint & in_mTargetPage,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel (),
mProperty_mCurrentPage (),
mProperty_mTargetPage () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
  mProperty_mCurrentPage = in_mCurrentPage ;
  mProperty_mTargetPage = in_mTargetPage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

void cPtr_baseline_5F_intermediate_5F_JSR::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCurrentPage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, mProperty_mCurrentPage, mProperty_mTargetPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
    mProperty_mCurrentPage.printNonNullClassInstanceProperties ("mCurrentPage") ;
    mProperty_mTargetPage.printNonNullClassInstanceProperties ("mTargetPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_JSR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ("baseline_intermediate_JSR",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR result ;
  const GGS_baseline_5F_intermediate_5F_JSR * p = (const GGS_baseline_5F_intermediate_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_TRIS reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_TRIS::objectCompare (const GGS_baseline_5F_intermediate_5F_TRIS & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_TRIS::GGS_baseline_5F_intermediate_5F_TRIS (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mOperand,
                  const GGS_uint & in_mOpcode,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_TRIS * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_TRIS (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_TRIS_init_21__21__21_ (in_mInstructionLocation, in_mOperand, in_mOpcode, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_TRIS result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::
baseline_5F_intermediate_5F_TRIS_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                   const GGS_lstring & in_mOperand,
                                                   const GGS_uint & in_mOpcode,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mOpcode = in_mOpcode ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS::GGS_baseline_5F_intermediate_5F_TRIS (const cPtr_baseline_5F_intermediate_5F_TRIS * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstring & in_mOperand,
                                                                                           const GGS_uint & in_mOpcode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_TRIS result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_intermediate_5F_TRIS (in_mInstructionLocation, in_mOperand, in_mOpcode,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_baseline_5F_intermediate_5F_TRIS::readProperty_mOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    return p->mProperty_mOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_TRIS::readProperty_mOpcode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_TRIS) ;
    return p->mProperty_mOpcode ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_TRIS class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_TRIS::cPtr_baseline_5F_intermediate_5F_TRIS (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mOperand (),
mProperty_mOpcode () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_TRIS::cPtr_baseline_5F_intermediate_5F_TRIS (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstring & in_mOperand,
                                                                              const GGS_uint & in_mOpcode,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOperand (),
mProperty_mOpcode () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOperand = in_mOperand ;
  mProperty_mOpcode = in_mOpcode ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_TRIS::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;
}

void cPtr_baseline_5F_intermediate_5F_TRIS::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_TRIS:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOpcode.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_intermediate_5F_TRIS::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_TRIS (mProperty_mInstructionLocation, mProperty_mOperand, mProperty_mOpcode, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_TRIS::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOperand.printNonNullClassInstanceProperties ("mOperand") ;
    mProperty_mOpcode.printNonNullClassInstanceProperties ("mOpcode") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_TRIS generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ("baseline_intermediate_TRIS",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_TRIS::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_TRIS::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_TRIS (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_TRIS result ;
  const GGS_baseline_5F_intermediate_5F_TRIS * p = (const GGS_baseline_5F_intermediate_5F_TRIS *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_TRIS *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_TRIS", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_banksel_5F_register reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_banksel_5F_register::objectCompare (const GGS_midrange_5F_instruction_5F_banksel_5F_register & inOperand) const {
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

GGS_midrange_5F_instruction_5F_banksel_5F_register::GGS_midrange_5F_instruction_5F_banksel_5F_register (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register GGS_midrange_5F_instruction_5F_banksel_5F_register::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_registerExpression & in_mRegister,
                  const GGS_bool & in_mWarningOnUselessBanksel,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_banksel_5F_register * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_banksel_5F_register (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_banksel_5F_register_init_21__21__21_ (in_mInstructionLocation, in_mRegister, in_mWarningOnUselessBanksel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::
midrange_5F_instruction_5F_banksel_5F_register_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_registerExpression & in_mRegister,
                                                                 const GGS_bool & in_mWarningOnUselessBanksel,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register::GGS_midrange_5F_instruction_5F_banksel_5F_register (const cPtr_midrange_5F_instruction_5F_banksel_5F_register * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register GGS_midrange_5F_instruction_5F_banksel_5F_register::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                       const GGS_registerExpression & in_mRegister,
                                                                                                                       const GGS_bool & in_mWarningOnUselessBanksel,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel_5F_register result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register (in_mInstructionLocation, in_mRegister, in_mWarningOnUselessBanksel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_banksel_5F_register::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_banksel_5F_register::readProperty_mWarningOnUselessBanksel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel_5F_register * p = (cPtr_midrange_5F_instruction_5F_banksel_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_banksel_register class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel_5F_register::cPtr_midrange_5F_instruction_5F_banksel_5F_register (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mWarningOnUselessBanksel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel_5F_register::cPtr_midrange_5F_instruction_5F_banksel_5F_register (const GGS_location & in_mInstructionLocation,
                                                                                                          const GGS_registerExpression & in_mRegister,
                                                                                                          const GGS_bool & in_mWarningOnUselessBanksel,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mWarningOnUselessBanksel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_banksel_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;
}

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_banksel_register:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_banksel_5F_register::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_banksel_5F_register (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mWarningOnUselessBanksel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_banksel_5F_register::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
    mProperty_mWarningOnUselessBanksel.printNonNullClassInstanceProperties ("mWarningOnUselessBanksel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_banksel_register generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ("midrange_instruction_banksel_register",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_banksel_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_banksel_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_banksel_5F_register (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_banksel_5F_register GGS_midrange_5F_instruction_5F_banksel_5F_register::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_banksel_5F_register result ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register * p = (const GGS_midrange_5F_instruction_5F_banksel_5F_register *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_banksel_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_savebank reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_savebank::objectCompare (const GGS_midrange_5F_instruction_5F_savebank & inOperand) const {
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

GGS_midrange_5F_instruction_5F_savebank::GGS_midrange_5F_instruction_5F_savebank (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank GGS_midrange_5F_instruction_5F_savebank::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_registerExpression & in_mRegister,
                      const GGS_midrange_5F_instructionList & in_mInstructionList,
                      const GGS_location & in_mEndOfSaveBankInstruction,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_savebank * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_savebank (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_savebank_init_21__21__21__21_ (in_mInstructionLocation, in_mRegister, in_mInstructionList, in_mEndOfSaveBankInstruction, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_savebank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_savebank::
midrange_5F_instruction_5F_savebank_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                          const GGS_registerExpression & in_mRegister,
                                                          const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                          const GGS_location & in_mEndOfSaveBankInstruction,
                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfSaveBankInstruction = in_mEndOfSaveBankInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank::GGS_midrange_5F_instruction_5F_savebank (const cPtr_midrange_5F_instruction_5F_savebank * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_savebank) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank GGS_midrange_5F_instruction_5F_savebank::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_registerExpression & in_mRegister,
                                                                                                 const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                 const GGS_location & in_mEndOfSaveBankInstruction,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_savebank result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_savebank (in_mInstructionLocation, in_mRegister, in_mInstructionList, in_mEndOfSaveBankInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_savebank::readProperty_mRegister (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mRegister ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_savebank::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_instruction_5F_savebank::readProperty_mEndOfSaveBankInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_savebank * p = (cPtr_midrange_5F_instruction_5F_savebank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_savebank) ;
    return p->mProperty_mEndOfSaveBankInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_savebank class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_savebank::cPtr_midrange_5F_instruction_5F_savebank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mInstructionList (),
mProperty_mEndOfSaveBankInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_savebank::cPtr_midrange_5F_instruction_5F_savebank (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_registerExpression & in_mRegister,
                                                                                    const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                    const GGS_location & in_mEndOfSaveBankInstruction,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRegister (),
mProperty_mInstructionList (),
mProperty_mEndOfSaveBankInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegister = in_mRegister ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfSaveBankInstruction = in_mEndOfSaveBankInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_savebank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;
}

void cPtr_midrange_5F_instruction_5F_savebank::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_savebank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegister.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSaveBankInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_savebank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_savebank (mProperty_mInstructionLocation, mProperty_mRegister, mProperty_mInstructionList, mProperty_mEndOfSaveBankInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_savebank::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegister.printNonNullClassInstanceProperties ("mRegister") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfSaveBankInstruction.printNonNullClassInstanceProperties ("mEndOfSaveBankInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_savebank generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ("midrange_instruction_savebank",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_savebank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_savebank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_savebank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_savebank GGS_midrange_5F_instruction_5F_savebank::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_savebank result ;
  const GGS_midrange_5F_instruction_5F_savebank * p = (const GGS_midrange_5F_instruction_5F_savebank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_savebank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_savebank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_STATIC_5F_REPEAT reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::objectCompare (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inOperand) const {
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

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_lstring & in_mConstantName,
                              const GGS_immediatExpression & in_mLowerBoundExpression,
                              const GGS_immediatExpression & in_mUpperBoundExpression,
                              const GGS_midrange_5F_instructionList & in_mInstructionList,
                              const GGS_location & in_mEndOfInstruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::
midrange_5F_instruction_5F_STATIC_5F_REPEAT_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_lstring & in_mConstantName,
                                                                          const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                          const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                          const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                          const GGS_location & in_mEndOfInstruction,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstruction = in_mEndOfInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                 const GGS_lstring & in_mConstantName,
                                                                                                                 const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                                                                 const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                                                                 const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                 const GGS_location & in_mEndOfInstruction,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (in_mInstructionLocation, in_mConstantName, in_mLowerBoundExpression, in_mUpperBoundExpression, in_mInstructionList, in_mEndOfInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mLowerBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mLowerBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mUpperBoundExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mUpperBoundExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::readProperty_mEndOfInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
    return p->mProperty_mEndOfInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_STATIC_REPEAT class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mLowerBoundExpression (),
mProperty_mUpperBoundExpression (),
mProperty_mInstructionList (),
mProperty_mEndOfInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_lstring & in_mConstantName,
                                                                                                    const GGS_immediatExpression & in_mLowerBoundExpression,
                                                                                                    const GGS_immediatExpression & in_mUpperBoundExpression,
                                                                                                    const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                    const GGS_location & in_mEndOfInstruction,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mConstantName (),
mProperty_mLowerBoundExpression (),
mProperty_mUpperBoundExpression (),
mProperty_mInstructionList (),
mProperty_mEndOfInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantName = in_mConstantName ;
  mProperty_mLowerBoundExpression = in_mLowerBoundExpression ;
  mProperty_mUpperBoundExpression = in_mUpperBoundExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstruction = in_mEndOfInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;
}

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_STATIC_REPEAT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLowerBoundExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUpperBoundExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT (mProperty_mInstructionLocation, mProperty_mConstantName, mProperty_mLowerBoundExpression, mProperty_mUpperBoundExpression, mProperty_mInstructionList, mProperty_mEndOfInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
    mProperty_mLowerBoundExpression.printNonNullClassInstanceProperties ("mLowerBoundExpression") ;
    mProperty_mUpperBoundExpression.printNonNullClassInstanceProperties ("mUpperBoundExpression") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstruction.printNonNullClassInstanceProperties ("mEndOfInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_STATIC_REPEAT generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ("midrange_instruction_STATIC_REPEAT",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT * p = (const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_STATIC_REPEAT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FD::objectCompare (const GGS_midrange_5F_instruction_5F_FD & inOperand) const {
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

GGS_midrange_5F_instruction_5F_FD::GGS_midrange_5F_instruction_5F_FD (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD GGS_midrange_5F_instruction_5F_FD::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                      const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FD::
midrange_5F_instruction_5F_FD_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                    const GGS_registerExpression & in_mRegisterExpression,
                                                    const GGS_bool & in_m_5F_W_5F_isDestination,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code = in_mInstruction_5F_FD_5F_base_5F_code ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD::GGS_midrange_5F_instruction_5F_FD (const cPtr_midrange_5F_instruction_5F_FD * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD GGS_midrange_5F_instruction_5F_FD::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                                     const GGS_registerExpression & in_mRegisterExpression,
                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FD (in_mInstructionLocation, in_mInstruction_5F_FD_5F_base_5F_code, in_mRegisterExpression, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code GGS_midrange_5F_instruction_5F_FD::readProperty_mInstruction_5F_FD_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction_5F_FD_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_FD::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FD * p = (cPtr_midrange_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FD::cPtr_midrange_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FD::cPtr_midrange_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction_5F_FD_5F_base_5F_code,
                                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction_5F_FD_5F_base_5F_code (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code = in_mInstruction_5F_FD_5F_base_5F_code ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;
}

void cPtr_midrange_5F_instruction_5F_FD::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_FD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction_5F_FD_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_FD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FD_5F_base_5F_code, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FD_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FD_base_code") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_FD generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ("midrange_instruction_FD",
                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FD GGS_midrange_5F_instruction_5F_FD::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD result ;
  const GGS_midrange_5F_instruction_5F_FD * p = (const GGS_midrange_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_F::objectCompare (const GGS_midrange_5F_instruction_5F_F & inOperand) const {
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

GGS_midrange_5F_instruction_5F_F::GGS_midrange_5F_instruction_5F_F (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F GGS_midrange_5F_instruction_5F_F::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                  const GGS_registerExpression & in_mRegisterExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_F::
midrange_5F_instruction_5F_F_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                               const GGS_registerExpression & in_mRegisterExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F::GGS_midrange_5F_instruction_5F_F (const cPtr_midrange_5F_instruction_5F_F * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F GGS_midrange_5F_instruction_5F_F::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                   const GGS_registerExpression & in_mRegisterExpression,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_F result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_F (in_mInstructionLocation, in_mFAinstruction, in_mRegisterExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_F_5F_instruction_5F_base_5F_code GGS_midrange_5F_instruction_5F_F::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_F::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_F * p = (cPtr_midrange_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_F::cPtr_midrange_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_F::cPtr_midrange_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_midrange_5F_F_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                      const GGS_registerExpression & in_mRegisterExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;
}

void cPtr_midrange_5F_instruction_5F_F::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_F::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mFAinstruction.printNonNullClassInstanceProperties ("mFAinstruction") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_F generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ("midrange_instruction_F",
                                                                                 & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_F GGS_midrange_5F_instruction_5F_F::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_F result ;
  const GGS_midrange_5F_instruction_5F_F * p = (const GGS_midrange_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FB::objectCompare (const GGS_midrange_5F_instruction_5F_FB & inOperand) const {
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

GGS_midrange_5F_instruction_5F_FB::GGS_midrange_5F_instruction_5F_FB (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB GGS_midrange_5F_instruction_5F_FB::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                      const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bitNumberExpression & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FB::
midrange_5F_instruction_5F_FB_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                    const GGS_registerExpression & in_mRegisterExpression,
                                                    const GGS_bitNumberExpression & in_mBitNumber,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB::GGS_midrange_5F_instruction_5F_FB (const cPtr_midrange_5F_instruction_5F_FB * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB GGS_midrange_5F_instruction_5F_FB::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                     const GGS_registerExpression & in_mRegisterExpression,
                                                                                     const GGS_bitNumberExpression & in_mBitNumber,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FB result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FB (in_mInstructionLocation, in_mBitOrientedOp, in_mRegisterExpression, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bit_5F_oriented_5F_op GGS_midrange_5F_instruction_5F_FB::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_FB::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_midrange_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FB * p = (cPtr_midrange_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FB::cPtr_midrange_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FB::cPtr_midrange_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_midrange_5F_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                        const GGS_registerExpression & in_mRegisterExpression,
                                                                        const GGS_bitNumberExpression & in_mBitNumber,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBitOrientedOp (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBitOrientedOp = in_mBitOrientedOp ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;
}

void cPtr_midrange_5F_instruction_5F_FB::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_FB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_FB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBitOrientedOp.printNonNullClassInstanceProperties ("mBitOrientedOp") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_FB generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ("midrange_instruction_FB",
                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FB GGS_midrange_5F_instruction_5F_FB::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FB result ;
  const GGS_midrange_5F_instruction_5F_FB * p = (const GGS_midrange_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_CALL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_CALL::objectCompare (const GGS_midrange_5F_instruction_5F_CALL & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CALL::GGS_midrange_5F_instruction_5F_CALL (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL GGS_midrange_5F_instruction_5F_CALL::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_CALL * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_CALL (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_CALL_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_CALL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::
midrange_5F_instruction_5F_CALL_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL::GGS_midrange_5F_instruction_5F_CALL (const cPtr_midrange_5F_instruction_5F_CALL * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CALL) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL GGS_midrange_5F_instruction_5F_CALL::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CALL result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CALL (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_instruction_5F_CALL::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_CALL * p = (cPtr_midrange_5F_instruction_5F_CALL *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_CALL) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_CALL class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CALL::cPtr_midrange_5F_instruction_5F_CALL (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CALL::cPtr_midrange_5F_instruction_5F_CALL (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_CALL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;
}

void cPtr_midrange_5F_instruction_5F_CALL::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_CALL:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_CALL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CALL (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_CALL::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_CALL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ("midrange_instruction_CALL",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_CALL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_CALL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_CALL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CALL GGS_midrange_5F_instruction_5F_CALL::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CALL result ;
  const GGS_midrange_5F_instruction_5F_CALL * p = (const GGS_midrange_5F_instruction_5F_CALL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_CALL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CALL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_JSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_JSR::objectCompare (const GGS_midrange_5F_instruction_5F_JSR & inOperand) const {
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

GGS_midrange_5F_instruction_5F_JSR::GGS_midrange_5F_instruction_5F_JSR (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR GGS_midrange_5F_instruction_5F_JSR::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_JSR * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_JSR (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_JSR_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_JSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::
midrange_5F_instruction_5F_JSR_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                             const GGS_lstring & in_mTargetLabel,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR::GGS_midrange_5F_instruction_5F_JSR (const cPtr_midrange_5F_instruction_5F_JSR * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_JSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR GGS_midrange_5F_instruction_5F_JSR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_lstring & in_mTargetLabel,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JSR result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_JSR (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_instruction_5F_JSR::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_JSR * p = (cPtr_midrange_5F_instruction_5F_JSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JSR) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_JSR class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JSR::cPtr_midrange_5F_instruction_5F_JSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JSR::cPtr_midrange_5F_instruction_5F_JSR (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_lstring & in_mTargetLabel,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_JSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;
}

void cPtr_midrange_5F_instruction_5F_JSR::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_JSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_JSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_JSR (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_JSR::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_JSR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ("midrange_instruction_JSR",
                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_JSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_JSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_JSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JSR GGS_midrange_5F_instruction_5F_JSR::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JSR result ;
  const GGS_midrange_5F_instruction_5F_JSR * p = (const GGS_midrange_5F_instruction_5F_JSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_JSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_JUMP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_JUMP::objectCompare (const GGS_midrange_5F_instruction_5F_JUMP & inOperand) const {
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

GGS_midrange_5F_instruction_5F_JUMP::GGS_midrange_5F_instruction_5F_JUMP (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP GGS_midrange_5F_instruction_5F_JUMP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_JUMP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_JUMP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_JUMP_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_JUMP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::
midrange_5F_instruction_5F_JUMP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP::GGS_midrange_5F_instruction_5F_JUMP (const cPtr_midrange_5F_instruction_5F_JUMP * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_JUMP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP GGS_midrange_5F_instruction_5F_JUMP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JUMP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_JUMP (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_instruction_5F_JUMP::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_JUMP * p = (cPtr_midrange_5F_instruction_5F_JUMP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_JUMP) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_JUMP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JUMP::cPtr_midrange_5F_instruction_5F_JUMP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_JUMP::cPtr_midrange_5F_instruction_5F_JUMP (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_JUMP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;
}

void cPtr_midrange_5F_instruction_5F_JUMP::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_JUMP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_JUMP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_JUMP (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_JUMP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_JUMP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ("midrange_instruction_JUMP",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_JUMP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_JUMP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_JUMP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_JUMP GGS_midrange_5F_instruction_5F_JUMP::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_JUMP result ;
  const GGS_midrange_5F_instruction_5F_JUMP * p = (const GGS_midrange_5F_instruction_5F_JUMP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_JUMP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JUMP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_GOTO reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_GOTO::objectCompare (const GGS_midrange_5F_instruction_5F_GOTO & inOperand) const {
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

GGS_midrange_5F_instruction_5F_GOTO::GGS_midrange_5F_instruction_5F_GOTO (void) :
GGS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO GGS_midrange_5F_instruction_5F_GOTO::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstring & in_mTargetLabel,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_GOTO * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_GOTO (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_GOTO_init_21__21_ (in_mInstructionLocation, in_mTargetLabel, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_GOTO result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::
midrange_5F_instruction_5F_GOTO_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_lstring & in_mTargetLabel,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO::GGS_midrange_5F_instruction_5F_GOTO (const cPtr_midrange_5F_instruction_5F_GOTO * inSourcePtr) :
GGS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_GOTO) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO GGS_midrange_5F_instruction_5F_GOTO::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                         const GGS_lstring & in_mTargetLabel,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_GOTO result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_GOTO (in_mInstructionLocation, in_mTargetLabel,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_midrange_5F_instruction_5F_GOTO::readProperty_mTargetLabel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_midrange_5F_instruction_5F_GOTO * p = (cPtr_midrange_5F_instruction_5F_GOTO *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_GOTO) ;
    return p->mProperty_mTargetLabel ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_GOTO class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_GOTO::cPtr_midrange_5F_instruction_5F_GOTO (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_GOTO::cPtr_midrange_5F_instruction_5F_GOTO (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_lstring & in_mTargetLabel,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetLabel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabel = in_mTargetLabel ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_GOTO::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;
}

void cPtr_midrange_5F_instruction_5F_GOTO::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_GOTO:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_GOTO::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_GOTO (mProperty_mInstructionLocation, mProperty_mTargetLabel, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_GOTO::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabel.printNonNullClassInstanceProperties ("mTargetLabel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_GOTO generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ("midrange_instruction_GOTO",
                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_GOTO::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_GOTO::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_GOTO (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_GOTO GGS_midrange_5F_instruction_5F_GOTO::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_GOTO result ;
  const GGS_midrange_5F_instruction_5F_GOTO * p = (const GGS_midrange_5F_instruction_5F_GOTO *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_GOTO *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_GOTO", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_IF_5F_BitTest reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_BitTest::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_BitTest::GGS_midrange_5F_instruction_5F_IF_5F_BitTest (void) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest GGS_midrange_5F_instruction_5F_IF_5F_BitTest::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_midrange_5F_instruction & in_mInstruction,
                          const GGS_bool & in_mSkipIfSet,
                          const GGS_registerExpression & in_mRegisterExpression,
                          const GGS_bitNumberExpression & in_mBitNumber,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::
midrange_5F_instruction_5F_IF_5F_BitTest_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_midrange_5F_instruction & in_mInstruction,
                                                                   const GGS_bool & in_mSkipIfSet,
                                                                   const GGS_registerExpression & in_mRegisterExpression,
                                                                   const GGS_bitNumberExpression & in_mBitNumber,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest::GGS_midrange_5F_instruction_5F_IF_5F_BitTest (const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inSourcePtr) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest GGS_midrange_5F_instruction_5F_IF_5F_BitTest::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                           const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                                           const GGS_bool & in_mSkipIfSet,
                                                                                                           const GGS_registerExpression & in_mRegisterExpression,
                                                                                                           const GGS_bitNumberExpression & in_mBitNumber,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (in_mInstructionLocation, in_mInstruction, in_mSkipIfSet, in_mRegisterExpression, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_midrange_5F_instruction_5F_IF_5F_BitTest::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_BitTest class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (const GGS_location & in_mInstructionLocation,
                                                                                              const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                              const GGS_bool & in_mSkipIfSet,
                                                                                              const GGS_registerExpression & in_mRegisterExpression,
                                                                                              const GGS_bitNumberExpression & in_mBitNumber,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction, inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_IF_BitTest:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mSkipIfSet, mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_BitTest generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ("midrange_instruction_IF_BitTest",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_BitTest::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_BitTest::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_BitTest (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest GGS_midrange_5F_instruction_5F_IF_5F_BitTest::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest * p = (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_BitTest *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_BitTest", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_instruction_IF_BitTest getBaseCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_getBaseCode (GGS_uint & outArgument_outBaseCode,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outBaseCode = GGS_uint (uint32_t (7168U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outBaseCode = GGS_uint (uint32_t (6144U)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getBaseCode (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GGS_uint & out_outBaseCode,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outBaseCode.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getBaseCode (out_outBaseCode, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_instruction_IF_BitTest getMnemonic'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_getMnemonic (GGS_string & outArgument_outMnemonic,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outMnemonic = GGS_string ("BTFSS") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outMnemonic = GGS_string ("BTFSC") ;
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getMnemonic (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * inObject,
                                      GGS_string & out_outMnemonic,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  out_outMnemonic.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
    inObject->method_getMnemonic (out_outMnemonic, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_IF_5F_IncDec reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_IncDec::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_IncDec::GGS_midrange_5F_instruction_5F_IF_5F_IncDec (void) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec GGS_midrange_5F_instruction_5F_IF_5F_IncDec::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_midrange_5F_instruction & in_mInstruction,
                          const GGS_bool & in_mIncrement,
                          const GGS_registerExpression & in_mRegisterExpression,
                          const GGS_bool & in_m_5F_W_5F_isDestination,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mIncrement, in_mRegisterExpression, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::
midrange_5F_instruction_5F_IF_5F_IncDec_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_midrange_5F_instruction & in_mInstruction,
                                                                  const GGS_bool & in_mIncrement,
                                                                  const GGS_registerExpression & in_mRegisterExpression,
                                                                  const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec::GGS_midrange_5F_instruction_5F_IF_5F_IncDec (const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * inSourcePtr) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec GGS_midrange_5F_instruction_5F_IF_5F_IncDec::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                         const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                                         const GGS_bool & in_mIncrement,
                                                                                                         const GGS_registerExpression & in_mRegisterExpression,
                                                                                                         const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (in_mInstructionLocation, in_mInstruction, in_mIncrement, in_mRegisterExpression, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_instruction_5F_IF_5F_IncDec::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_IncDec class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (inCompiler COMMA_THERE),
mProperty_mIncrement (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_midrange_5F_instruction & in_mInstruction,
                                                                                            const GGS_bool & in_mIncrement,
                                                                                            const GGS_registerExpression & in_mRegisterExpression,
                                                                                            const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (in_mInstructionLocation, in_mInstruction, inCompiler COMMA_THERE),
mProperty_mIncrement (),
mProperty_mRegisterExpression (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_IF_IncDec:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mIncrement, mProperty_mRegisterExpression, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties () ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_IncDec generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ("midrange_instruction_IF_IncDec",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_IncDec::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_IncDec::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_IncDec (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec GGS_midrange_5F_instruction_5F_IF_5F_IncDec::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec * p = (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_IncDec *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_IncDec", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_incDecRegisterInCondition::objectCompare (const GGS_midrange_5F_incDecRegisterInCondition & inOperand) const {
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

GGS_midrange_5F_incDecRegisterInCondition::GGS_midrange_5F_incDecRegisterInCondition (void) :
GGS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition GGS_midrange_5F_incDecRegisterInCondition::
init_21__21__21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                      const GGS_bool & in_mIncrement,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      const GGS_bool & in_mBranchIfZero,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_incDecRegisterInCondition_init_21__21__21__21_ (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero, inCompiler) ;
  const GGS_midrange_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::
midrange_5F_incDecRegisterInCondition_init_21__21__21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                                                            const GGS_bool & in_mIncrement,
                                                            const GGS_bool & in_m_5F_W_5F_isDestination,
                                                            const GGS_bool & in_mBranchIfZero,
                                                            Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition::GGS_midrange_5F_incDecRegisterInCondition (const cPtr_midrange_5F_incDecRegisterInCondition * inSourcePtr) :
GGS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition GGS_midrange_5F_incDecRegisterInCondition::class_func_new (const GGS_registerExpression & in_mRegisterExpression,
                                                                                                     const GGS_bool & in_mIncrement,
                                                                                                     const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                     const GGS_bool & in_mBranchIfZero,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_incDecRegisterInCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_incDecRegisterInCondition (in_mRegisterExpression, in_mIncrement, in_m_5F_W_5F_isDestination, in_mBranchIfZero,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_incDecRegisterInCondition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_incDecRegisterInCondition::readProperty_mBranchIfZero (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_incDecRegisterInCondition) ;
    return p->mProperty_mBranchIfZero ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_incDecRegisterInCondition::cPtr_midrange_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_incDecRegisterInCondition::cPtr_midrange_5F_incDecRegisterInCondition (const GGS_registerExpression & in_mRegisterExpression,
                                                                                        const GGS_bool & in_mIncrement,
                                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                        const GGS_bool & in_mBranchIfZero,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination (),
mProperty_mBranchIfZero () {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
  mProperty_mBranchIfZero = in_mBranchIfZero ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

void cPtr_midrange_5F_incDecRegisterInCondition::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_incDecRegisterInCondition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranchIfZero.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_incDecRegisterInCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_incDecRegisterInCondition (mProperty_mRegisterExpression, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, mProperty_mBranchIfZero, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_incDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
    mProperty_mBranchIfZero.printNonNullClassInstanceProperties ("mBranchIfZero") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_incDecRegisterInCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ("midrange_incDecRegisterInCondition",
                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition GGS_midrange_5F_incDecRegisterInCondition::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_incDecRegisterInCondition result ;
  const GGS_midrange_5F_incDecRegisterInCondition * p = (const GGS_midrange_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::objectCompare (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inOperand) const {
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

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (void) :
GGS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::
init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
              const GGS_bitNumberExpression & in_mBitNumber,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (in_mRegisterExpression, in_mBitNumber, inCompiler) ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::
midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_init_21__21_ (const GGS_registerExpression & in_mRegisterExpression,
                                                                         const GGS_bitNumberExpression & in_mBitNumber,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * inSourcePtr) :
GGS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::class_func_new (const GGS_registerExpression & in_mRegisterExpression,
                                                                                                                                               const GGS_bitNumberExpression & in_mBitNumber,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (in_mRegisterExpression, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_registerExpression GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mRegisterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_registerExpression () ;
  }else{
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mRegisterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bitNumberExpression GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bitNumberExpression () ;
  }else{
    cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_bitTest_in_structured_if_condition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (const GGS_registerExpression & in_mRegisterExpression,
                                                                                                                                  const GGS_bitNumberExpression & in_mBitNumber,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mRegisterExpression (),
mProperty_mBitNumber () {
  mProperty_mRegisterExpression = in_mRegisterExpression ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_bitTest_in_structured_if_condition:") ;
  mProperty_mRegisterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (mProperty_mRegisterExpression, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterExpression.printNonNullClassInstanceProperties ("mRegisterExpression") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_bitTest_in_structured_if_condition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ("midrange_bitTest_in_structured_if_condition",
                                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bitTest_in_structured_if_condition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model::GGS_midrange_5F_model (void) :
mProperty_mProgramName (),
mProperty_mDeviceName (),
mProperty_mConfigDefinitionList (),
mProperty_mRamDefinitionList (),
mProperty_mUnusedRegisterList (),
mProperty_mInterruptDefinitionList (),
mProperty_mConstantDefinitionList (),
mProperty_mRoutineDefinitionList (),
mProperty_mUnusedRoutineList (),
mProperty_mNeedsComputedGoto_32_ (),
mProperty_mNeedsComputedGoto_34_ (),
mProperty_mEndOfProgram () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model::GGS_midrange_5F_model (const GGS_midrange_5F_model & inSource) :
mProperty_mProgramName (inSource.mProperty_mProgramName),
mProperty_mDeviceName (inSource.mProperty_mDeviceName),
mProperty_mConfigDefinitionList (inSource.mProperty_mConfigDefinitionList),
mProperty_mRamDefinitionList (inSource.mProperty_mRamDefinitionList),
mProperty_mUnusedRegisterList (inSource.mProperty_mUnusedRegisterList),
mProperty_mInterruptDefinitionList (inSource.mProperty_mInterruptDefinitionList),
mProperty_mConstantDefinitionList (inSource.mProperty_mConstantDefinitionList),
mProperty_mRoutineDefinitionList (inSource.mProperty_mRoutineDefinitionList),
mProperty_mUnusedRoutineList (inSource.mProperty_mUnusedRoutineList),
mProperty_mNeedsComputedGoto_32_ (inSource.mProperty_mNeedsComputedGoto_32_),
mProperty_mNeedsComputedGoto_34_ (inSource.mProperty_mNeedsComputedGoto_34_),
mProperty_mEndOfProgram (inSource.mProperty_mEndOfProgram) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model & GGS_midrange_5F_model::operator = (const GGS_midrange_5F_model & inSource) {
  mProperty_mProgramName = inSource.mProperty_mProgramName ;
  mProperty_mDeviceName = inSource.mProperty_mDeviceName ;
  mProperty_mConfigDefinitionList = inSource.mProperty_mConfigDefinitionList ;
  mProperty_mRamDefinitionList = inSource.mProperty_mRamDefinitionList ;
  mProperty_mUnusedRegisterList = inSource.mProperty_mUnusedRegisterList ;
  mProperty_mInterruptDefinitionList = inSource.mProperty_mInterruptDefinitionList ;
  mProperty_mConstantDefinitionList = inSource.mProperty_mConstantDefinitionList ;
  mProperty_mRoutineDefinitionList = inSource.mProperty_mRoutineDefinitionList ;
  mProperty_mUnusedRoutineList = inSource.mProperty_mUnusedRoutineList ;
  mProperty_mNeedsComputedGoto_32_ = inSource.mProperty_mNeedsComputedGoto_32_ ;
  mProperty_mNeedsComputedGoto_34_ = inSource.mProperty_mNeedsComputedGoto_34_ ;
  mProperty_mEndOfProgram = inSource.mProperty_mEndOfProgram ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_model GGS_midrange_5F_model::init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mProgramName,
                                                                                                   const GGS_lstring & in_mDeviceName,
                                                                                                   const GGS_configDefinitionList & in_mConfigDefinitionList,
                                                                                                   const GGS_ramDefinitionList & in_mRamDefinitionList,
                                                                                                   const GGS_lstringlist & in_mUnusedRegisterList,
                                                                                                   const GGS_midrange_5F_interruptDefinitionList & in_mInterruptDefinitionList,
                                                                                                   const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                                                                                   const GGS_midrange_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                                                                                   const GGS_lstringlist & in_mUnusedRoutineList,
                                                                                                   const GGS_bool & in_mNeedsComputedGoto_32_,
                                                                                                   const GGS_bool & in_mNeedsComputedGoto_34_,
                                                                                                   const GGS_location & in_mEndOfProgram,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_model result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProgramName = in_mProgramName ;
  result.mProperty_mDeviceName = in_mDeviceName ;
  result.mProperty_mConfigDefinitionList = in_mConfigDefinitionList ;
  result.mProperty_mRamDefinitionList = in_mRamDefinitionList ;
  result.mProperty_mUnusedRegisterList = in_mUnusedRegisterList ;
  result.mProperty_mInterruptDefinitionList = in_mInterruptDefinitionList ;
  result.mProperty_mConstantDefinitionList = in_mConstantDefinitionList ;
  result.mProperty_mRoutineDefinitionList = in_mRoutineDefinitionList ;
  result.mProperty_mUnusedRoutineList = in_mUnusedRoutineList ;
  result.mProperty_mNeedsComputedGoto_32_ = in_mNeedsComputedGoto_32_ ;
  result.mProperty_mNeedsComputedGoto_34_ = in_mNeedsComputedGoto_34_ ;
  result.mProperty_mEndOfProgram = in_mEndOfProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_model::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model::GGS_midrange_5F_model (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1,
                                              const GGS_configDefinitionList & inOperand2,
                                              const GGS_ramDefinitionList & inOperand3,
                                              const GGS_lstringlist & inOperand4,
                                              const GGS_midrange_5F_interruptDefinitionList & inOperand5,
                                              const GGS_constantDefinitionList & inOperand6,
                                              const GGS_midrange_5F_routineDefinitionList & inOperand7,
                                              const GGS_lstringlist & inOperand8,
                                              const GGS_bool & inOperand9,
                                              const GGS_bool & inOperand10,
                                              const GGS_location & inOperand11) :
mProperty_mProgramName (inOperand0),
mProperty_mDeviceName (inOperand1),
mProperty_mConfigDefinitionList (inOperand2),
mProperty_mRamDefinitionList (inOperand3),
mProperty_mUnusedRegisterList (inOperand4),
mProperty_mInterruptDefinitionList (inOperand5),
mProperty_mConstantDefinitionList (inOperand6),
mProperty_mRoutineDefinitionList (inOperand7),
mProperty_mUnusedRoutineList (inOperand8),
mProperty_mNeedsComputedGoto_32_ (inOperand9),
mProperty_mNeedsComputedGoto_34_ (inOperand10),
mProperty_mEndOfProgram (inOperand11) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model GGS_midrange_5F_model::class_func_new (const GGS_lstring & in_mProgramName,
                                                             const GGS_lstring & in_mDeviceName,
                                                             const GGS_configDefinitionList & in_mConfigDefinitionList,
                                                             const GGS_ramDefinitionList & in_mRamDefinitionList,
                                                             const GGS_lstringlist & in_mUnusedRegisterList,
                                                             const GGS_midrange_5F_interruptDefinitionList & in_mInterruptDefinitionList,
                                                             const GGS_constantDefinitionList & in_mConstantDefinitionList,
                                                             const GGS_midrange_5F_routineDefinitionList & in_mRoutineDefinitionList,
                                                             const GGS_lstringlist & in_mUnusedRoutineList,
                                                             const GGS_bool & in_mNeedsComputedGoto2,
                                                             const GGS_bool & in_mNeedsComputedGoto4,
                                                             const GGS_location & in_mEndOfProgram,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_model result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProgramName = in_mProgramName ;
  result.mProperty_mDeviceName = in_mDeviceName ;
  result.mProperty_mConfigDefinitionList = in_mConfigDefinitionList ;
  result.mProperty_mRamDefinitionList = in_mRamDefinitionList ;
  result.mProperty_mUnusedRegisterList = in_mUnusedRegisterList ;
  result.mProperty_mInterruptDefinitionList = in_mInterruptDefinitionList ;
  result.mProperty_mConstantDefinitionList = in_mConstantDefinitionList ;
  result.mProperty_mRoutineDefinitionList = in_mRoutineDefinitionList ;
  result.mProperty_mUnusedRoutineList = in_mUnusedRoutineList ;
  result.mProperty_mNeedsComputedGoto_32_ = in_mNeedsComputedGoto2 ;
  result.mProperty_mNeedsComputedGoto_34_ = in_mNeedsComputedGoto4 ;
  result.mProperty_mEndOfProgram = in_mEndOfProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_model::isValid (void) const {
  return mProperty_mProgramName.isValid () && mProperty_mDeviceName.isValid () && mProperty_mConfigDefinitionList.isValid () && mProperty_mRamDefinitionList.isValid () && mProperty_mUnusedRegisterList.isValid () && mProperty_mInterruptDefinitionList.isValid () && mProperty_mConstantDefinitionList.isValid () && mProperty_mRoutineDefinitionList.isValid () && mProperty_mUnusedRoutineList.isValid () && mProperty_mNeedsComputedGoto_32_.isValid () && mProperty_mNeedsComputedGoto_34_.isValid () && mProperty_mEndOfProgram.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_model::drop (void) {
  mProperty_mProgramName.drop () ;
  mProperty_mDeviceName.drop () ;
  mProperty_mConfigDefinitionList.drop () ;
  mProperty_mRamDefinitionList.drop () ;
  mProperty_mUnusedRegisterList.drop () ;
  mProperty_mInterruptDefinitionList.drop () ;
  mProperty_mConstantDefinitionList.drop () ;
  mProperty_mRoutineDefinitionList.drop () ;
  mProperty_mUnusedRoutineList.drop () ;
  mProperty_mNeedsComputedGoto_32_.drop () ;
  mProperty_mNeedsComputedGoto_34_.drop () ;
  mProperty_mEndOfProgram.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_model::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_model:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProgramName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeviceName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConfigDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRamDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnusedRegisterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInterruptDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mConstantDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRoutineDefinitionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnusedRoutineList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeedsComputedGoto_32_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeedsComputedGoto_34_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfProgram.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_model generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_model ("midrange_model",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_model::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_model ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_model::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_model (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_model GGS_midrange_5F_model::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_model result ;
  const GGS_midrange_5F_model * p = (const GGS_midrange_5F_model *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_model *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_model", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
//                             N O N    T E R M I N A L    N A M E S                                
//
//--------------------------------------------------------------------------------------------------

static const char * gNonTerminalNames_baseline_include_grammar [77] = {
  "<configuration_definition>",// Index 0
  "<ram_definition>",// Index 1
  "<constant_definition>",// Index 2
  "<register_parsing>",// Index 3
  "<optional_w_as_dest>",// Index 4
  "<bit_number_parsing>",// Index 5
  "<immediate_expression>",// Index 6
  "<section_list>",// Index 7
  "<baseline_instruction_list>",// Index 8
  "<baseline_routine_definition>",// Index 9
  "<baseline_structured_instruction>",// Index 10
  "<baseline_structured_if_instruction>",// Index 11
  "<baseline_simple_instruction>",// Index 12
  "<baseline_condition_factor>",// Index 13
  "<baseline_condition_expression>",// Index 14
  "<baseline_condition_term>",// Index 15
  "<declaration_in_ram>",// Index 16
  "<immediate_bitwise_term>",// Index 17
  "<immediate_bitwise_factor>",// Index 18
  "<immediate_term>",// Index 19
  "<immediate_factor>",// Index 20
  "<immediate_primary>",// Index 21
  "<select_baseline_5F_syntax_0>",// Index 22
  "<select_baseline_5F_syntax_1>",// Index 23
  "<select_baseline_5F_syntax_2>",// Index 24
  "<select_baseline_5F_syntax_3>",// Index 25
  "<select_baseline_5F_syntax_4>",// Index 26
  "<select_baseline_5F_syntax_5>",// Index 27
  "<select_baseline_5F_syntax_6>",// Index 28
  "<select_baseline_5F_syntax_7>",// Index 29
  "<select_baseline_5F_syntax_8>",// Index 30
  "<select_baseline_5F_syntax_9>",// Index 31
  "<select_baseline_5F_syntax_10>",// Index 32
  "<select_baseline_5F_syntax_11>",// Index 33
  "<select_baseline_5F_syntax_12>",// Index 34
  "<select_baseline_5F_syntax_13>",// Index 35
  "<select_baseline_5F_syntax_14>",// Index 36
  "<select_baseline_5F_syntax_15>",// Index 37
  "<select_baseline_5F_syntax_16>",// Index 38
  "<select_baseline_5F_syntax_17>",// Index 39
  "<select_baseline_5F_syntax_18>",// Index 40
  "<select_baseline_5F_syntax_19>",// Index 41
  "<select_baseline_5F_syntax_20>",// Index 42
  "<select_baseline_5F_syntax_21>",// Index 43
  "<select_baseline_5F_syntax_22>",// Index 44
  "<select_baseline_5F_syntax_23>",// Index 45
  "<select_baseline_5F_syntax_24>",// Index 46
  "<select_baseline_5F_syntax_25>",// Index 47
  "<select_baseline_5F_syntax_26>",// Index 48
  "<select_baseline_5F_syntax_27>",// Index 49
  "<select_baseline_5F_syntax_28>",// Index 50
  "<select_baseline_5F_syntax_29>",// Index 51
  "<select_baseline_5F_syntax_30>",// Index 52
  "<select_baseline_5F_syntax_31>",// Index 53
  "<select_baseline_5F_syntax_32>",// Index 54
  "<select_communs_0>",// Index 55
  "<select_communs_1>",// Index 56
  "<select_communs_2>",// Index 57
  "<select_communs_3>",// Index 58
  "<select_communs_4>",// Index 59
  "<select_communs_5>",// Index 60
  "<select_communs_6>",// Index 61
  "<select_communs_7>",// Index 62
  "<select_communs_8>",// Index 63
  "<select_communs_9>",// Index 64
  "<select_communs_10>",// Index 65
  "<select_communs_11>",// Index 66
  "<select_communs_12>",// Index 67
  "<select_communs_13>",// Index 68
  "<select_communs_14>",// Index 69
  "<select_communs_15>",// Index 70
  "<select_communs_16>",// Index 71
  "<select_communs_17>",// Index 72
  "<select_communs_18>",// Index 73
  "<select_communs_19>",// Index 74
  "<select_communs_20>",// Index 75
  "<>"// Index 76
} ;

//--------------------------------------------------------------------------------------------------
//
//                      S L R    A N A L Y Z E R    A C T I O N    T A B L E                        
//
//--------------------------------------------------------------------------------------------------

// Action tables handle shift and reduce actions:
//  - a shift action is (terminal_symbol, SHIFT (n)): if shifts to state n;
//  - the accept action is (terminal_symbol, ACCEPT);
//  - a reduce action is (terminal_symbol, REDUCE (n)); if reduces to state n.

static const int32_t gActionTable_baseline_include_grammar [] = {
// State S0 (index = 0)
  Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_SHIFT (1)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (40)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_SHIFT (2)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_SHIFT (3)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_SHIFT (4)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_SHIFT (5)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S1 (index = 15)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_SHIFT (13)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_SHIFT (14)
, BOTTOM_UP_END
// State S2 (index = 20)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (41)
, BOTTOM_UP_END
// State S3 (index = 23)
, Lexique_piccolo_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (15)
, BOTTOM_UP_END
// State S4 (index = 26)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (16)
, BOTTOM_UP_END
// State S5 (index = 29)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (17)
, BOTTOM_UP_END
// State S6 (index = 32)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_SHIFT (1)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (40)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_SHIFT (2)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_SHIFT (3)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_SHIFT (4)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_SHIFT (5)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S7 (index = 47)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_SHIFT (1)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (40)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_SHIFT (2)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_SHIFT (3)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_SHIFT (4)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_SHIFT (5)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S8 (index = 62)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_SHIFT (1)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (40)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_SHIFT (2)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_SHIFT (3)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_SHIFT (4)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_SHIFT (5)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S9 (index = 77)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_ACCEPT
, BOTTOM_UP_END
// State S10 (index = 80)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_SHIFT (1)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (40)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_SHIFT (2)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_SHIFT (3)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_SHIFT (4)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_SHIFT (5)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S11 (index = 95)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END
// State S12 (index = 98)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S13 (index = 101)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (23)
, BOTTOM_UP_END
// State S14 (index = 104)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (24)
, BOTTOM_UP_END
// State S15 (index = 107)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (25)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (129)
, BOTTOM_UP_END
// State S16 (index = 112)
, Lexique_piccolo_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (27)
, BOTTOM_UP_END
// State S17 (index = 115)
, Lexique_piccolo_5F_lexique::kToken__3D_, BOTTOM_UP_SHIFT (28)
, BOTTOM_UP_END
// State S18 (index = 118)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (29)
, BOTTOM_UP_END
// State S19 (index = 121)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (30)
, BOTTOM_UP_END
// State S20 (index = 124)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (31)
, BOTTOM_UP_END
// State S21 (index = 127)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (32)
, BOTTOM_UP_END
// State S22 (index = 130)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (29)
, BOTTOM_UP_END
// State S23 (index = 133)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (30)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (33)
, BOTTOM_UP_END
// State S24 (index = 150)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (32)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (35)
, BOTTOM_UP_END
// State S25 (index = 167)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (34)
, BOTTOM_UP_END
// State S26 (index = 170)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (35)
, BOTTOM_UP_END
// State S27 (index = 173)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_REDUCE (133)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (149)
, Lexique_piccolo_5F_lexique::kToken_protected, BOTTOM_UP_SHIFT (36)
, Lexique_piccolo_5F_lexique::kToken_private, BOTTOM_UP_SHIFT (37)
, BOTTOM_UP_END
// State S28 (index = 182)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S29 (index = 195)
, Lexique_piccolo_5F_lexique::kToken_page, BOTTOM_UP_SHIFT (54)
, Lexique_piccolo_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (42)
, BOTTOM_UP_END
// State S30 (index = 200)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (56)
, BOTTOM_UP_END
// State S31 (index = 203)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_SHIFT (1)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (40)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_SHIFT (2)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_SHIFT (3)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_SHIFT (4)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_SHIFT (5)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S32 (index = 218)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (58)
, BOTTOM_UP_END
// State S33 (index = 221)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_SHIFT (1)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (40)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_SHIFT (2)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_SHIFT (3)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_SHIFT (4)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_SHIFT (5)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S34 (index = 236)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (60)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (61)
, BOTTOM_UP_END
// State S35 (index = 241)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (11)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (11)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (11)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (11)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (11)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (11)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (11)
, BOTTOM_UP_END
// State S36 (index = 256)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_REDUCE (134)
, BOTTOM_UP_END
// State S37 (index = 259)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_REDUCE (135)
, BOTTOM_UP_END
// State S38 (index = 262)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_REDUCE (133)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (149)
, Lexique_piccolo_5F_lexique::kToken_protected, BOTTOM_UP_SHIFT (36)
, Lexique_piccolo_5F_lexique::kToken_private, BOTTOM_UP_SHIFT (37)
, BOTTOM_UP_END
// State S39 (index = 271)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_SHIFT (64)
, BOTTOM_UP_END
// State S40 (index = 274)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (65)
, BOTTOM_UP_END
// State S41 (index = 277)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (66)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (67)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_REDUCE (179)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (179)
, BOTTOM_UP_END
// State S42 (index = 414)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_REDUCE (174)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (174)
, BOTTOM_UP_END
// State S43 (index = 547)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S44 (index = 560)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S45 (index = 573)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S46 (index = 586)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_REDUCE (175)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (175)
, BOTTOM_UP_END
// State S47 (index = 719)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (14)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (14)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (14)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (14)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (14)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (14)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (14)
, BOTTOM_UP_END
// State S48 (index = 734)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (72)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (73)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (151)
, BOTTOM_UP_END
// State S49 (index = 839)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (75)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (154)
, BOTTOM_UP_END
// State S50 (index = 946)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_SHIFT (77)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_SHIFT (78)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (156)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_SHIFT (79)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_SHIFT (80)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_SHIFT (81)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_SHIFT (82)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (156)
, BOTTOM_UP_END
// State S51 (index = 1065)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (84)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_SHIFT (85)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_SHIFT (86)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_SHIFT (87)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (163)
, BOTTOM_UP_END
// State S52 (index = 1192)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_SHIFT (89)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_SHIFT (90)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_SHIFT (91)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (168)
, BOTTOM_UP_END
// State S53 (index = 1325)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_REDUCE (20)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END
// State S54 (index = 1458)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (93)
, BOTTOM_UP_END
// State S55 (index = 1461)
, Lexique_piccolo_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (94)
, BOTTOM_UP_END
// State S56 (index = 1464)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (30)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (33)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (33)
, BOTTOM_UP_END
// State S57 (index = 1481)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (27)
, BOTTOM_UP_END
// State S58 (index = 1484)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (32)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (35)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (35)
, BOTTOM_UP_END
// State S59 (index = 1501)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (28)
, BOTTOM_UP_END
// State S60 (index = 1504)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (131)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (131)
, BOTTOM_UP_END
// State S61 (index = 1509)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (132)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (132)
, BOTTOM_UP_END
// State S62 (index = 1514)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (25)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (129)
, BOTTOM_UP_END
// State S63 (index = 1519)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (150)
, BOTTOM_UP_END
// State S64 (index = 1522)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (98)
, BOTTOM_UP_END
// State S65 (index = 1525)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (13)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (13)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (13)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (13)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (13)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (13)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (13)
, BOTTOM_UP_END
// State S66 (index = 1540)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (99)
, BOTTOM_UP_END
// State S67 (index = 1543)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S68 (index = 1556)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_REDUCE (176)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (176)
, BOTTOM_UP_END
// State S69 (index = 1689)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (101)
, BOTTOM_UP_END
// State S70 (index = 1692)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_REDUCE (172)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (172)
, BOTTOM_UP_END
// State S71 (index = 1825)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_REDUCE (173)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (173)
, BOTTOM_UP_END
// State S72 (index = 1958)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S73 (index = 1971)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S74 (index = 1984)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (15)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (15)
, BOTTOM_UP_END
// State S75 (index = 2085)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S76 (index = 2098)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (16)
, BOTTOM_UP_END
// State S77 (index = 2203)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S78 (index = 2216)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S79 (index = 2229)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S80 (index = 2242)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S81 (index = 2255)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S82 (index = 2268)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S83 (index = 2281)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (17)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (17)
, BOTTOM_UP_END
// State S84 (index = 2388)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S85 (index = 2401)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S86 (index = 2414)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S87 (index = 2427)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S88 (index = 2440)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END
// State S89 (index = 2559)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S90 (index = 2572)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S91 (index = 2585)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S92 (index = 2598)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (19)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (19)
, BOTTOM_UP_END
// State S93 (index = 2725)
, Lexique_piccolo_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (43)
, BOTTOM_UP_END
// State S94 (index = 2728)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_SHIFT (118)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_SHIFT (119)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_SHIFT (120)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_SHIFT (121)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_SHIFT (122)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_SHIFT (125)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S95 (index = 2807)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (34)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (34)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (34)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (34)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (34)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (34)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END
// State S96 (index = 2822)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (36)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (36)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (36)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (36)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (36)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (36)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (36)
, BOTTOM_UP_END
// State S97 (index = 2837)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (130)
, BOTTOM_UP_END
// State S98 (index = 2840)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_REDUCE (136)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (136)
, Lexique_piccolo_5F_lexique::kToken_protected, BOTTOM_UP_REDUCE (136)
, Lexique_piccolo_5F_lexique::kToken_private, BOTTOM_UP_REDUCE (136)
, Lexique_piccolo_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (162)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (136)
, BOTTOM_UP_END
// State S99 (index = 2853)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (164)
, BOTTOM_UP_END
// State S100 (index = 2856)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (165)
, BOTTOM_UP_END
// State S101 (index = 2859)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_REDUCE (177)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (177)
, BOTTOM_UP_END
// State S102 (index = 2992)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (72)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (73)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (151)
, BOTTOM_UP_END
// State S103 (index = 3097)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (72)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (151)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (73)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (151)
, BOTTOM_UP_END
// State S104 (index = 3202)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (75)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (154)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (154)
, BOTTOM_UP_END
// State S105 (index = 3309)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (162)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (162)
, BOTTOM_UP_END
// State S106 (index = 3416)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (161)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (161)
, BOTTOM_UP_END
// State S107 (index = 3523)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (157)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (157)
, BOTTOM_UP_END
// State S108 (index = 3630)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (158)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (158)
, BOTTOM_UP_END
// State S109 (index = 3737)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (159)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (159)
, BOTTOM_UP_END
// State S110 (index = 3844)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (160)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (160)
, BOTTOM_UP_END
// State S111 (index = 3951)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (84)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_SHIFT (85)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_SHIFT (86)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_SHIFT (87)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (163)
, BOTTOM_UP_END
// State S112 (index = 4078)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (84)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_SHIFT (85)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_SHIFT (86)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_SHIFT (87)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (163)
, BOTTOM_UP_END
// State S113 (index = 4205)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (84)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_SHIFT (85)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_SHIFT (86)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_SHIFT (87)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (163)
, BOTTOM_UP_END
// State S114 (index = 4332)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (84)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (163)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_SHIFT (85)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_SHIFT (86)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_SHIFT (87)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (163)
, BOTTOM_UP_END
// State S115 (index = 4459)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_SHIFT (89)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_SHIFT (90)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_SHIFT (91)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (168)
, BOTTOM_UP_END
// State S116 (index = 4592)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_SHIFT (89)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_SHIFT (90)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_SHIFT (91)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (168)
, BOTTOM_UP_END
// State S117 (index = 4725)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_SHIFT (89)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_SHIFT (90)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (168)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_SHIFT (91)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (168)
, BOTTOM_UP_END
// State S118 (index = 4858)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (176)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (53)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (71)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (71)
, BOTTOM_UP_END
// State S119 (index = 4933)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (179)
, BOTTOM_UP_END
// State S120 (index = 4936)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (180)
, BOTTOM_UP_END
// State S121 (index = 4939)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (181)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (57)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (57)
, BOTTOM_UP_END
// State S122 (index = 5012)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (184)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (67)
, Lexique_piccolo_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (185)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (186)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (187)
, BOTTOM_UP_END
// State S123 (index = 5025)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (102)
, BOTTOM_UP_END
// State S124 (index = 5028)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (103)
, BOTTOM_UP_END
// State S125 (index = 5031)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (192)
, BOTTOM_UP_END
// State S126 (index = 5034)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (99)
, BOTTOM_UP_END
// State S127 (index = 5037)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (100)
, BOTTOM_UP_END
// State S128 (index = 5040)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (101)
, BOTTOM_UP_END
// State S129 (index = 5043)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (104)
, BOTTOM_UP_END
// State S130 (index = 5046)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (105)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_SHIFT (193)
, BOTTOM_UP_END
// State S131 (index = 5051)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (106)
, BOTTOM_UP_END
// State S132 (index = 5054)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (107)
, BOTTOM_UP_END
// State S133 (index = 5057)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (108)
, BOTTOM_UP_END
// State S134 (index = 5060)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (109)
, BOTTOM_UP_END
// State S135 (index = 5063)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (110)
, BOTTOM_UP_END
// State S136 (index = 5066)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (111)
, BOTTOM_UP_END
// State S137 (index = 5069)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (112)
, BOTTOM_UP_END
// State S138 (index = 5072)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (113)
, BOTTOM_UP_END
// State S139 (index = 5075)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (114)
, BOTTOM_UP_END
// State S140 (index = 5078)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (194)
, BOTTOM_UP_END
// State S141 (index = 5081)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (195)
, BOTTOM_UP_END
// State S142 (index = 5084)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (92)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (92)
, BOTTOM_UP_END
// State S143 (index = 5163)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (93)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (93)
, BOTTOM_UP_END
// State S144 (index = 5242)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (94)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (94)
, BOTTOM_UP_END
// State S145 (index = 5321)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (95)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (95)
, BOTTOM_UP_END
// State S146 (index = 5400)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (96)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (96)
, BOTTOM_UP_END
// State S147 (index = 5479)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (196)
, BOTTOM_UP_END
// State S148 (index = 5482)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (115)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (115)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (115)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (115)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (115)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_REDUCE (115)
, BOTTOM_UP_END
// State S149 (index = 5495)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (116)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (116)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (116)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (116)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (116)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_REDUCE (116)
, BOTTOM_UP_END
// State S150 (index = 5508)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (117)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (117)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (117)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (117)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (117)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_REDUCE (117)
, BOTTOM_UP_END
// State S151 (index = 5521)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (118)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (118)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (118)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (118)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (118)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_REDUCE (118)
, BOTTOM_UP_END
// State S152 (index = 5534)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (197)
, BOTTOM_UP_END
// State S153 (index = 5537)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_SHIFT (118)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_SHIFT (119)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_SHIFT (120)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_SHIFT (121)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_SHIFT (122)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_SHIFT (125)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S154 (index = 5616)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_SHIFT (118)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_SHIFT (119)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_SHIFT (120)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_SHIFT (121)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_SHIFT (122)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_SHIFT (125)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S155 (index = 5695)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (1)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (1)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (1)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (1)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S156 (index = 5706)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (3)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END
// State S157 (index = 5785)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (5)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END
// State S158 (index = 5864)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, BOTTOM_UP_END
// State S159 (index = 5867)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, BOTTOM_UP_END
// State S160 (index = 5870)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, BOTTOM_UP_END
// State S161 (index = 5873)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S162 (index = 5886)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S163 (index = 5899)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_REDUCE (138)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (138)
, Lexique_piccolo_5F_lexique::kToken_protected, BOTTOM_UP_REDUCE (138)
, Lexique_piccolo_5F_lexique::kToken_private, BOTTOM_UP_REDUCE (138)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_SHIFT (205)
, BOTTOM_UP_END
// State S164 (index = 5910)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S165 (index = 5923)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_REDUCE (180)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (180)
, BOTTOM_UP_END
// State S166 (index = 6056)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (152)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (152)
, BOTTOM_UP_END
// State S167 (index = 6157)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (153)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (153)
, BOTTOM_UP_END
// State S168 (index = 6258)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (155)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (155)
, BOTTOM_UP_END
// State S169 (index = 6363)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (165)
, BOTTOM_UP_END
// State S170 (index = 6482)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (164)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (164)
, BOTTOM_UP_END
// State S171 (index = 6601)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (166)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (166)
, BOTTOM_UP_END
// State S172 (index = 6720)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (167)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (167)
, BOTTOM_UP_END
// State S173 (index = 6839)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (169)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (169)
, BOTTOM_UP_END
// State S174 (index = 6966)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (171)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (171)
, BOTTOM_UP_END
// State S175 (index = 7093)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (170)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (170)
, BOTTOM_UP_END
// State S176 (index = 7220)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (54)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (72)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (72)
, BOTTOM_UP_END
// State S177 (index = 7293)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (208)
, BOTTOM_UP_END
// State S178 (index = 7296)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_SHIFT (118)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_SHIFT (119)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_SHIFT (120)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_SHIFT (121)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_SHIFT (122)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_SHIFT (125)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S179 (index = 7375)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (45)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (45)
, BOTTOM_UP_END
// State S180 (index = 7454)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (46)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S181 (index = 7533)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (58)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (58)
, BOTTOM_UP_END
// State S182 (index = 7604)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_SHIFT (118)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_SHIFT (119)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_SHIFT (120)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_SHIFT (121)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_SHIFT (122)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_SHIFT (125)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S183 (index = 7683)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken__2E_, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (183)
, Lexique_piccolo_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (211)
, BOTTOM_UP_END
// State S184 (index = 7770)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (68)
, BOTTOM_UP_END
// State S185 (index = 7773)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, BOTTOM_UP_END
// State S186 (index = 7776)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (63)
, BOTTOM_UP_END
// State S187 (index = 7779)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (64)
, BOTTOM_UP_END
// State S188 (index = 7782)
, Lexique_piccolo_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (214)
, BOTTOM_UP_END
// State S189 (index = 7785)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (215)
, BOTTOM_UP_END
// State S190 (index = 7788)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, BOTTOM_UP_END
// State S191 (index = 7791)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (217)
, BOTTOM_UP_END
// State S192 (index = 7794)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (52)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (52)
, BOTTOM_UP_END
// State S193 (index = 7873)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (220)
, BOTTOM_UP_END
// State S194 (index = 7876)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (90)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (90)
, BOTTOM_UP_END
// State S195 (index = 7955)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (91)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (91)
, BOTTOM_UP_END
// State S196 (index = 8034)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (97)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (97)
, BOTTOM_UP_END
// State S197 (index = 8113)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (2)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (2)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (2)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (2)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (2)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (2)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S198 (index = 8128)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (39)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (39)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (39)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (39)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (39)
, BOTTOM_UP_END
// State S199 (index = 8139)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (38)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (38)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (38)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (38)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (38)
, BOTTOM_UP_END
// State S200 (index = 8150)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (221)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (187)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (187)
, BOTTOM_UP_END
// State S201 (index = 8231)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (88)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (88)
, BOTTOM_UP_END
// State S202 (index = 8310)
, Lexique_piccolo_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (224)
, BOTTOM_UP_END
// State S203 (index = 8313)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (98)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (98)
, BOTTOM_UP_END
// State S204 (index = 8392)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (225)
, BOTTOM_UP_END
// State S205 (index = 8395)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (226)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (227)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (228)
, BOTTOM_UP_END
// State S206 (index = 8402)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_REDUCE (12)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (12)
, Lexique_piccolo_5F_lexique::kToken_protected, BOTTOM_UP_REDUCE (12)
, Lexique_piccolo_5F_lexique::kToken_private, BOTTOM_UP_REDUCE (12)
, BOTTOM_UP_END
// State S207 (index = 8411)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (230)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (181)
, BOTTOM_UP_END
// State S208 (index = 8416)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (232)
, BOTTOM_UP_END
// State S209 (index = 8419)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_SHIFT (233)
, BOTTOM_UP_END
// State S210 (index = 8422)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_SHIFT (234)
, BOTTOM_UP_END
// State S211 (index = 8425)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S212 (index = 8438)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken__2E_, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (21)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END
// State S213 (index = 8523)
, Lexique_piccolo_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (236)
, BOTTOM_UP_END
// State S214 (index = 8526)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (237)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (238)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (239)
, BOTTOM_UP_END
// State S215 (index = 8533)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S216 (index = 8590)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (65)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (242)
, BOTTOM_UP_END
// State S217 (index = 8595)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (217)
, Lexique_piccolo_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (244)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (245)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (246)
, BOTTOM_UP_END
// State S218 (index = 8606)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_SHIFT (253)
, BOTTOM_UP_END
// State S219 (index = 8609)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_SHIFT (118)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_SHIFT (119)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_SHIFT (120)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_SHIFT (121)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_SHIFT (122)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_SHIFT (125)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S220 (index = 8688)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, BOTTOM_UP_END
// State S221 (index = 8691)
, Lexique_piccolo_5F_lexique::kToken_w, BOTTOM_UP_SHIFT (256)
, BOTTOM_UP_END
// State S222 (index = 8694)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (86)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (86)
, BOTTOM_UP_END
// State S223 (index = 8773)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (25)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (25)
, BOTTOM_UP_END
// State S224 (index = 8852)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (237)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (238)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (239)
, BOTTOM_UP_END
// State S225 (index = 8859)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_REDUCE (137)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (137)
, Lexique_piccolo_5F_lexique::kToken_protected, BOTTOM_UP_REDUCE (137)
, Lexique_piccolo_5F_lexique::kToken_private, BOTTOM_UP_REDUCE (137)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (137)
, BOTTOM_UP_END
// State S226 (index = 8870)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (147)
, Lexique_piccolo_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (258)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (147)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (147)
, BOTTOM_UP_END
// State S227 (index = 8879)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (144)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (144)
, BOTTOM_UP_END
// State S228 (index = 8884)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (143)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (143)
, BOTTOM_UP_END
// State S229 (index = 8889)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (260)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (140)
, BOTTOM_UP_END
// State S230 (index = 8894)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (262)
, BOTTOM_UP_END
// State S231 (index = 8897)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (263)
, BOTTOM_UP_END
// State S232 (index = 8900)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (264)
, BOTTOM_UP_END
// State S233 (index = 8903)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (265)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (75)
, BOTTOM_UP_END
// State S234 (index = 8908)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (267)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (59)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (59)
, BOTTOM_UP_END
// State S235 (index = 8989)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (269)
, BOTTOM_UP_END
// State S236 (index = 8992)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (237)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (238)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (239)
, BOTTOM_UP_END
// State S237 (index = 8999)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (185)
, Lexique_piccolo_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (271)
, BOTTOM_UP_END
// State S238 (index = 9088)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (23)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (23)
, BOTTOM_UP_END
// State S239 (index = 9175)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S240 (index = 9188)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (62)
, BOTTOM_UP_END
// State S241 (index = 9191)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (48)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (48)
, BOTTOM_UP_END
// State S242 (index = 9270)
, Lexique_piccolo_5F_lexique::kToken_w, BOTTOM_UP_SHIFT (274)
, BOTTOM_UP_END
// State S243 (index = 9273)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (275)
, BOTTOM_UP_END
// State S244 (index = 9276)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (217)
, Lexique_piccolo_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (244)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (245)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (246)
, BOTTOM_UP_END
// State S245 (index = 9287)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (122)
, BOTTOM_UP_END
// State S246 (index = 9290)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (121)
, BOTTOM_UP_END
// State S247 (index = 9293)
, Lexique_piccolo_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (277)
, BOTTOM_UP_END
// State S248 (index = 9296)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (127)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (127)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (278)
, BOTTOM_UP_END
// State S249 (index = 9303)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (7)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (7)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (7)
, BOTTOM_UP_END
// State S250 (index = 9310)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (125)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (280)
, BOTTOM_UP_END
// State S251 (index = 9315)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (8)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (8)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (8)
, BOTTOM_UP_END
// State S252 (index = 9322)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, BOTTOM_UP_END
// State S253 (index = 9325)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (283)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (69)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (69)
, BOTTOM_UP_END
// State S254 (index = 9406)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (79)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_SHIFT (285)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_SHIFT (286)
, BOTTOM_UP_END
// State S255 (index = 9413)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (87)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (87)
, BOTTOM_UP_END
// State S256 (index = 9492)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (188)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (188)
, BOTTOM_UP_END
// State S257 (index = 9571)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (89)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (89)
, BOTTOM_UP_END
// State S258 (index = 9650)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (288)
, BOTTOM_UP_END
// State S259 (index = 9653)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (145)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_SHIFT (289)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (145)
, BOTTOM_UP_END
// State S260 (index = 9660)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (226)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (227)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (228)
, BOTTOM_UP_END
// State S261 (index = 9667)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_SHIFT (292)
, BOTTOM_UP_END
// State S262 (index = 9670)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (293)
, BOTTOM_UP_END
// State S263 (index = 9673)
, Lexique_piccolo_5F_lexique::kToken_unused, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_routine, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_noreturn, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__2A_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_configuration, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_ram, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_const, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__2B_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__3C__3C_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__3E__3E_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken__25_, BOTTOM_UP_REDUCE (178)
, Lexique_piccolo_5F_lexique::kToken_, BOTTOM_UP_REDUCE (178)
, BOTTOM_UP_END
// State S264 (index = 9806)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S265 (index = 9819)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (76)
, BOTTOM_UP_END
// State S266 (index = 9822)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (217)
, BOTTOM_UP_END
// State S267 (index = 9825)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (60)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (60)
, BOTTOM_UP_END
// State S268 (index = 9904)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (47)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (47)
, BOTTOM_UP_END
// State S269 (index = 9983)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken__2E_, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (184)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (184)
, BOTTOM_UP_END
// State S270 (index = 10068)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (61)
, BOTTOM_UP_END
// State S271 (index = 10071)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (296)
, BOTTOM_UP_END
// State S272 (index = 10074)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (22)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (22)
, BOTTOM_UP_END
// State S273 (index = 10161)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (297)
, BOTTOM_UP_END
// State S274 (index = 10164)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (66)
, BOTTOM_UP_END
// State S275 (index = 10167)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (298)
, BOTTOM_UP_END
// State S276 (index = 10170)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (6)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (6)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (6)
, BOTTOM_UP_END
// State S277 (index = 10177)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (237)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (238)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (239)
, BOTTOM_UP_END
// State S278 (index = 10184)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (217)
, Lexique_piccolo_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (244)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (245)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (246)
, BOTTOM_UP_END
// State S279 (index = 10195)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (10)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (10)
, BOTTOM_UP_END
// State S280 (index = 10200)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (217)
, Lexique_piccolo_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (244)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (245)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (246)
, BOTTOM_UP_END
// State S281 (index = 10211)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (302)
, BOTTOM_UP_END
// State S282 (index = 10214)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (123)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (303)
, BOTTOM_UP_END
// State S283 (index = 10219)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (70)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (70)
, BOTTOM_UP_END
// State S284 (index = 10298)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (50)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (50)
, BOTTOM_UP_END
// State S285 (index = 10377)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (305)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (82)
, BOTTOM_UP_END
// State S286 (index = 10382)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (307)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (84)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (84)
, BOTTOM_UP_END
// State S287 (index = 10455)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (4)
, BOTTOM_UP_END
// State S288 (index = 10458)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (309)
, BOTTOM_UP_END
// State S289 (index = 10461)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (310)
, BOTTOM_UP_END
// State S290 (index = 10464)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (142)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (142)
, BOTTOM_UP_END
// State S291 (index = 10469)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (260)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (140)
, BOTTOM_UP_END
// State S292 (index = 10474)
, Lexique_piccolo_5F_lexique::kToken_byte, BOTTOM_UP_REDUCE (139)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (139)
, Lexique_piccolo_5F_lexique::kToken_protected, BOTTOM_UP_REDUCE (139)
, Lexique_piccolo_5F_lexique::kToken_private, BOTTOM_UP_REDUCE (139)
, BOTTOM_UP_END
// State S293 (index = 10483)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S294 (index = 10496)
, Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_, BOTTOM_UP_SHIFT (313)
, BOTTOM_UP_END
// State S295 (index = 10499)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_SHIFT (118)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_SHIFT (119)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_SHIFT (120)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_SHIFT (121)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_SHIFT (122)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_SHIFT (125)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S296 (index = 10578)
, Lexique_piccolo_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (315)
, BOTTOM_UP_END
// State S297 (index = 10581)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (24)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (24)
, BOTTOM_UP_END
// State S298 (index = 10668)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S299 (index = 10725)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (120)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (120)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (120)
, BOTTOM_UP_END
// State S300 (index = 10732)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (127)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (127)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (278)
, BOTTOM_UP_END
// State S301 (index = 10739)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (125)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (280)
, BOTTOM_UP_END
// State S302 (index = 10744)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (9)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (9)
, BOTTOM_UP_END
// State S303 (index = 10827)
, Lexique_piccolo_5F_lexique::kToken_w, BOTTOM_UP_SHIFT (319)
, BOTTOM_UP_END
// State S304 (index = 10830)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (320)
, BOTTOM_UP_END
// State S305 (index = 10833)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (83)
, BOTTOM_UP_END
// State S306 (index = 10836)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (217)
, BOTTOM_UP_END
// State S307 (index = 10839)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (85)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (85)
, BOTTOM_UP_END
// State S308 (index = 10910)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_SHIFT (118)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_SHIFT (119)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_SHIFT (120)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_SHIFT (121)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_SHIFT (122)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_SHIFT (125)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S309 (index = 10989)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (148)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (148)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (148)
, BOTTOM_UP_END
// State S310 (index = 10996)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (147)
, Lexique_piccolo_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (258)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_REDUCE (147)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (147)
, BOTTOM_UP_END
// State S311 (index = 11005)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (141)
, BOTTOM_UP_END
// State S312 (index = 11008)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (230)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (181)
, BOTTOM_UP_END
// State S313 (index = 11013)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (41)
, Lexique_piccolo_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (42)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (43)
, Lexique_piccolo_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (44)
, Lexique_piccolo_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (45)
, Lexique_piccolo_5F_lexique::kToken_literal_5F_char, BOTTOM_UP_SHIFT (46)
, BOTTOM_UP_END
// State S314 (index = 11026)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (73)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_SHIFT (326)
, BOTTOM_UP_END
// State S315 (index = 11031)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (186)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (186)
, BOTTOM_UP_END
// State S316 (index = 11118)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (49)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (49)
, BOTTOM_UP_END
// State S317 (index = 11197)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (128)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (128)
, BOTTOM_UP_END
// State S318 (index = 11202)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (126)
, BOTTOM_UP_END
// State S319 (index = 11205)
, Lexique_piccolo_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (124)
, BOTTOM_UP_END
// State S320 (index = 11208)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (119)
, Lexique_piccolo_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (119)
, Lexique_piccolo_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (119)
, BOTTOM_UP_END
// State S321 (index = 11215)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (80)
, BOTTOM_UP_END
// State S322 (index = 11218)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (81)
, BOTTOM_UP_END
// State S323 (index = 11221)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (145)
, Lexique_piccolo_5F_lexique::kToken__2F_, BOTTOM_UP_SHIFT (289)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (145)
, BOTTOM_UP_END
// State S324 (index = 11228)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (182)
, BOTTOM_UP_END
// State S325 (index = 11231)
, Lexique_piccolo_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (329)
, BOTTOM_UP_END
// State S326 (index = 11234)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (265)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (75)
, BOTTOM_UP_END
// State S327 (index = 11239)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_SHIFT (331)
, BOTTOM_UP_END
// State S328 (index = 11242)
, Lexique_piccolo_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (146)
, Lexique_piccolo_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (146)
, BOTTOM_UP_END
// State S329 (index = 11247)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_SHIFT (118)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_SHIFT (119)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_SHIFT (120)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_SHIFT (121)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_SHIFT (122)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_SHIFT (125)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S330 (index = 11326)
, Lexique_piccolo_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (217)
, BOTTOM_UP_END
// State S331 (index = 11329)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (334)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (77)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (77)
, BOTTOM_UP_END
// State S332 (index = 11410)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_SHIFT (336)
, BOTTOM_UP_END
// State S333 (index = 11413)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_SHIFT (118)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_SHIFT (119)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_SHIFT (120)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_SHIFT (121)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_SHIFT (122)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_SHIFT (123)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_SHIFT (124)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_SHIFT (125)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_SHIFT (126)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_SHIFT (127)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_SHIFT (128)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_SHIFT (129)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_SHIFT (130)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_SHIFT (131)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_SHIFT (132)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_SHIFT (133)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_SHIFT (134)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_SHIFT (135)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_SHIFT (136)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_SHIFT (137)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_SHIFT (138)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_SHIFT (139)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_SHIFT (140)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_SHIFT (141)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_SHIFT (142)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_SHIFT (143)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_SHIFT (144)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_SHIFT (145)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_SHIFT (146)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_SHIFT (147)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_SHIFT (148)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_SHIFT (149)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_SHIFT (150)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S334 (index = 11492)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (78)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (78)
, BOTTOM_UP_END
// State S335 (index = 11571)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (51)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S336 (index = 11650)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_label, BOTTOM_UP_SHIFT (338)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (55)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (55)
, BOTTOM_UP_END
// State S337 (index = 11731)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (73)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_SHIFT (326)
, BOTTOM_UP_END
// State S338 (index = 11736)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (56)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (56)
, BOTTOM_UP_END
// State S339 (index = 11815)
, Lexique_piccolo_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_do, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_jump, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_jsr, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_forever, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_if, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_decf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_incf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_while, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_mnop, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_elsif, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_else, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_addwf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_andwf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_comf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_iorwf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_movf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_rlf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_rrf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_subwf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_swapf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_xorwf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_clrf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_movwf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_bcf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_bsf, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_goto, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_call, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_clrw, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_clrwdt, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_nop, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_option, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_sleep, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_tris, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_andlw, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_iorlw, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_movlw, BOTTOM_UP_REDUCE (44)
, Lexique_piccolo_5F_lexique::kToken_xorlw, BOTTOM_UP_REDUCE (44)
, BOTTOM_UP_END
// State S340 (index = 11894)
, Lexique_piccolo_5F_lexique::kToken_end, BOTTOM_UP_REDUCE (74)
, BOTTOM_UP_END} ;

static const uint32_t gActionTableIndex_baseline_include_grammar [341] = {
  0  // S0
, 15  // S1
, 20  // S2
, 23  // S3
, 26  // S4
, 29  // S5
, 32  // S6
, 47  // S7
, 62  // S8
, 77  // S9
, 80  // S10
, 95  // S11
, 98  // S12
, 101  // S13
, 104  // S14
, 107  // S15
, 112  // S16
, 115  // S17
, 118  // S18
, 121  // S19
, 124  // S20
, 127  // S21
, 130  // S22
, 133  // S23
, 150  // S24
, 167  // S25
, 170  // S26
, 173  // S27
, 182  // S28
, 195  // S29
, 200  // S30
, 203  // S31
, 218  // S32
, 221  // S33
, 236  // S34
, 241  // S35
, 256  // S36
, 259  // S37
, 262  // S38
, 271  // S39
, 274  // S40
, 277  // S41
, 414  // S42
, 547  // S43
, 560  // S44
, 573  // S45
, 586  // S46
, 719  // S47
, 734  // S48
, 839  // S49
, 946  // S50
, 1065  // S51
, 1192  // S52
, 1325  // S53
, 1458  // S54
, 1461  // S55
, 1464  // S56
, 1481  // S57
, 1484  // S58
, 1501  // S59
, 1504  // S60
, 1509  // S61
, 1514  // S62
, 1519  // S63
, 1522  // S64
, 1525  // S65
, 1540  // S66
, 1543  // S67
, 1556  // S68
, 1689  // S69
, 1692  // S70
, 1825  // S71
, 1958  // S72
, 1971  // S73
, 1984  // S74
, 2085  // S75
, 2098  // S76
, 2203  // S77
, 2216  // S78
, 2229  // S79
, 2242  // S80
, 2255  // S81
, 2268  // S82
, 2281  // S83
, 2388  // S84
, 2401  // S85
, 2414  // S86
, 2427  // S87
, 2440  // S88
, 2559  // S89
, 2572  // S90
, 2585  // S91
, 2598  // S92
, 2725  // S93
, 2728  // S94
, 2807  // S95
, 2822  // S96
, 2837  // S97
, 2840  // S98
, 2853  // S99
, 2856  // S100
, 2859  // S101
, 2992  // S102
, 3097  // S103
, 3202  // S104
, 3309  // S105
, 3416  // S106
, 3523  // S107
, 3630  // S108
, 3737  // S109
, 3844  // S110
, 3951  // S111
, 4078  // S112
, 4205  // S113
, 4332  // S114
, 4459  // S115
, 4592  // S116
, 4725  // S117
, 4858  // S118
, 4933  // S119
, 4936  // S120
, 4939  // S121
, 5012  // S122
, 5025  // S123
, 5028  // S124
, 5031  // S125
, 5034  // S126
, 5037  // S127
, 5040  // S128
, 5043  // S129
, 5046  // S130
, 5051  // S131
, 5054  // S132
, 5057  // S133
, 5060  // S134
, 5063  // S135
, 5066  // S136
, 5069  // S137
, 5072  // S138
, 5075  // S139
, 5078  // S140
, 5081  // S141
, 5084  // S142
, 5163  // S143
, 5242  // S144
, 5321  // S145
, 5400  // S146
, 5479  // S147
, 5482  // S148
, 5495  // S149
, 5508  // S150
, 5521  // S151
, 5534  // S152
, 5537  // S153
, 5616  // S154
, 5695  // S155
, 5706  // S156
, 5785  // S157
, 5864  // S158
, 5867  // S159
, 5870  // S160
, 5873  // S161
, 5886  // S162
, 5899  // S163
, 5910  // S164
, 5923  // S165
, 6056  // S166
, 6157  // S167
, 6258  // S168
, 6363  // S169
, 6482  // S170
, 6601  // S171
, 6720  // S172
, 6839  // S173
, 6966  // S174
, 7093  // S175
, 7220  // S176
, 7293  // S177
, 7296  // S178
, 7375  // S179
, 7454  // S180
, 7533  // S181
, 7604  // S182
, 7683  // S183
, 7770  // S184
, 7773  // S185
, 7776  // S186
, 7779  // S187
, 7782  // S188
, 7785  // S189
, 7788  // S190
, 7791  // S191
, 7794  // S192
, 7873  // S193
, 7876  // S194
, 7955  // S195
, 8034  // S196
, 8113  // S197
, 8128  // S198
, 8139  // S199
, 8150  // S200
, 8231  // S201
, 8310  // S202
, 8313  // S203
, 8392  // S204
, 8395  // S205
, 8402  // S206
, 8411  // S207
, 8416  // S208
, 8419  // S209
, 8422  // S210
, 8425  // S211
, 8438  // S212
, 8523  // S213
, 8526  // S214
, 8533  // S215
, 8590  // S216
, 8595  // S217
, 8606  // S218
, 8609  // S219
, 8688  // S220
, 8691  // S221
, 8694  // S222
, 8773  // S223
, 8852  // S224
, 8859  // S225
, 8870  // S226
, 8879  // S227
, 8884  // S228
, 8889  // S229
, 8894  // S230
, 8897  // S231
, 8900  // S232
, 8903  // S233
, 8908  // S234
, 8989  // S235
, 8992  // S236
, 8999  // S237
, 9088  // S238
, 9175  // S239
, 9188  // S240
, 9191  // S241
, 9270  // S242
, 9273  // S243
, 9276  // S244
, 9287  // S245
, 9290  // S246
, 9293  // S247
, 9296  // S248
, 9303  // S249
, 9310  // S250
, 9315  // S251
, 9322  // S252
, 9325  // S253
, 9406  // S254
, 9413  // S255
, 9492  // S256
, 9571  // S257
, 9650  // S258
, 9653  // S259
, 9660  // S260
, 9667  // S261
, 9670  // S262
, 9673  // S263
, 9806  // S264
, 9819  // S265
, 9822  // S266
, 9825  // S267
, 9904  // S268
, 9983  // S269
, 10068  // S270
, 10071  // S271
, 10074  // S272
, 10161  // S273
, 10164  // S274
, 10167  // S275
, 10170  // S276
, 10177  // S277
, 10184  // S278
, 10195  // S279
, 10200  // S280
, 10211  // S281
, 10214  // S282
, 10219  // S283
, 10298  // S284
, 10377  // S285
, 10382  // S286
, 10455  // S287
, 10458  // S288
, 10461  // S289
, 10464  // S290
, 10469  // S291
, 10474  // S292
, 10483  // S293
, 10496  // S294
, 10499  // S295
, 10578  // S296
, 10581  // S297
, 10668  // S298
, 10725  // S299
, 10732  // S300
, 10739  // S301
, 10744  // S302
, 10827  // S303
, 10830  // S304
, 10833  // S305
, 10836  // S306
, 10839  // S307
, 10910  // S308
, 10989  // S309
, 10996  // S310
, 11005  // S311
, 11008  // S312
, 11013  // S313
, 11026  // S314
, 11031  // S315
, 11118  // S316
, 11197  // S317
, 11202  // S318
, 11205  // S319
, 11208  // S320
, 11215  // S321
, 11218  // S322
, 11221  // S323
, 11228  // S324
, 11231  // S325
, 11234  // S326
, 11239  // S327
, 11242  // S328
, 11247  // S329
, 11326  // S330
, 11329  // S331
, 11410  // S332
, 11413  // S333
, 11492  // S334
, 11571  // S335
, 11650  // S336
, 11731  // S337
, 11736  // S338
, 11815  // S339
, 11894  // S340
} ;

//--------------------------------------------------------------------------------------------------
//
//                                  SLR states successors table                                     
//
//--------------------------------------------------------------------------------------------------

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int32_t gSuccessorTable_baseline_include_grammar_0 [15] = {0, 6,
  1, 7,
  2, 8,
  7, 9,
  9, 10,
  22, 11,
  26, 12, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_6 [13] = {0, 6,
  1, 7,
  2, 8,
  9, 10,
  22, 18,
  26, 12, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_7 [13] = {0, 6,
  1, 7,
  2, 8,
  9, 10,
  22, 19,
  26, 12, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_8 [13] = {0, 6,
  1, 7,
  2, 8,
  9, 10,
  22, 20,
  26, 12, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_10 [13] = {0, 6,
  1, 7,
  2, 8,
  9, 10,
  22, 21,
  26, 12, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_15 [3] = {55, 26, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_23 [3] = {23, 31, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_24 [3] = {24, 33, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_27 [7] = {16, 38,
  57, 39,
  64, 40, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_28 [15] = {6, 47,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_29 [3] = {27, 55, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_31 [13] = {0, 6,
  1, 7,
  2, 8,
  9, 10,
  22, 57,
  26, 12, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_33 [13] = {0, 6,
  1, 7,
  2, 8,
  9, 10,
  22, 59,
  26, 12, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_34 [3] = {56, 62, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_38 [7] = {16, 38,
  57, 39,
  64, 63, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_41 [3] = {71, 68, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_43 [15] = {6, 69,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_44 [5] = {21, 70,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_45 [5] = {21, 71,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_48 [3] = {65, 74, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_49 [3] = {66, 76, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_50 [3] = {67, 83, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_51 [3] = {68, 88, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_52 [3] = {69, 92, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_56 [3] = {23, 95, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_58 [3] = {24, 96, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_62 [3] = {55, 97, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_67 [15] = {6, 100,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_72 [13] = {17, 102,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_73 [13] = {17, 103,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_75 [11] = {18, 104,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_77 [9] = {19, 105,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_78 [9] = {19, 106,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_79 [9] = {19, 107,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_80 [9] = {19, 108,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_81 [9] = {19, 109,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_82 [9] = {19, 110,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_84 [7] = {20, 111,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_85 [7] = {20, 112,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_86 [7] = {20, 113,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_87 [7] = {20, 114,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_89 [5] = {21, 115,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_90 [5] = {21, 116,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_91 [5] = {21, 117,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_94 [21] = {8, 152,
  10, 153,
  12, 154,
  25, 155,
  28, 156,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_98 [3] = {58, 163, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_102 [3] = {65, 166, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_103 [3] = {65, 167, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_104 [3] = {66, 168, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_111 [3] = {68, 169, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_112 [3] = {68, 170, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_113 [3] = {68, 171, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_114 [3] = {68, 172, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_115 [3] = {69, 173, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_116 [3] = {69, 174, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_117 [3] = {69, 175, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_118 [5] = {29, 177,
  38, 178, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_121 [3] = {31, 182, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_122 [9] = {3, 188,
  33, 189,
  34, 190,
  36, 191, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_153 [19] = {10, 153,
  12, 154,
  25, 198,
  28, 156,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_154 [19] = {10, 153,
  12, 154,
  25, 199,
  28, 156,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_158 [3] = {3, 200, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_159 [3] = {3, 201, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_160 [3] = {3, 202, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_161 [15] = {6, 203,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_162 [15] = {6, 204,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_163 [3] = {59, 206, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_164 [15] = {6, 207,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_178 [21] = {8, 209,
  10, 153,
  12, 154,
  25, 155,
  28, 156,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_182 [21] = {8, 210,
  10, 153,
  12, 154,
  25, 155,
  28, 156,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_183 [3] = {73, 212, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_185 [3] = {3, 213, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_190 [3] = {3, 216, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_191 [5] = {11, 218,
  14, 219, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_200 [5] = {4, 222,
  75, 223, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_205 [3] = {61, 229, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_207 [3] = {72, 231, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_211 [15] = {6, 235,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_214 [3] = {5, 240, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_215 [13] = {12, 241,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_216 [3] = {35, 243, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_217 [13] = {3, 247,
  13, 248,
  14, 249,
  15, 250,
  50, 251,
  51, 252, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_219 [21] = {8, 254,
  10, 153,
  12, 154,
  25, 155,
  28, 156,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_220 [3] = {3, 255, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_224 [3] = {5, 257, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_226 [3] = {63, 259, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_229 [3] = {60, 261, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_233 [3] = {40, 266, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_234 [3] = {32, 268, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_236 [3] = {5, 270, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_237 [3] = {74, 272, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_239 [15] = {6, 273,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_244 [11] = {3, 247,
  13, 276,
  14, 249,
  50, 251,
  51, 252, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_248 [3] = {54, 279, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_250 [3] = {53, 281, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_252 [3] = {3, 282, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_253 [3] = {37, 284, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_254 [3] = {42, 287, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_259 [3] = {62, 290, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_260 [3] = {61, 291, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_264 [15] = {6, 294,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_266 [3] = {14, 295, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_277 [3] = {5, 299, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_278 [11] = {3, 247,
  13, 300,
  14, 249,
  50, 251,
  51, 252, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_280 [13] = {3, 247,
  13, 248,
  14, 249,
  15, 301,
  50, 251,
  51, 252, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_282 [3] = {52, 304, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_285 [3] = {43, 306, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_286 [3] = {44, 308, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_291 [3] = {60, 311, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_293 [15] = {6, 312,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_295 [21] = {8, 314,
  10, 153,
  12, 154,
  25, 155,
  28, 156,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_298 [13] = {12, 316,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_300 [3] = {54, 317, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_301 [3] = {53, 318, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_306 [5] = {11, 321,
  14, 219, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_308 [21] = {8, 322,
  10, 153,
  12, 154,
  25, 155,
  28, 156,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_310 [3] = {63, 323, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_312 [3] = {72, 324, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_313 [15] = {6, 325,
  17, 48,
  18, 49,
  19, 50,
  20, 51,
  21, 52,
  70, 53, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_314 [3] = {39, 327, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_323 [3] = {62, 328, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_326 [3] = {40, 330, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_329 [21] = {8, 332,
  10, 153,
  12, 154,
  25, 155,
  28, 156,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_330 [3] = {14, 333, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_331 [3] = {41, 335, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_333 [21] = {8, 337,
  10, 153,
  12, 154,
  25, 155,
  28, 156,
  45, 157,
  46, 158,
  47, 159,
  48, 160,
  49, 161, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_336 [3] = {30, 339, -1} ;

static const int32_t gSuccessorTable_baseline_include_grammar_337 [3] = {39, 340, -1} ;

static const int32_t * gSuccessorTable_baseline_include_grammar [341] = {
gSuccessorTable_baseline_include_grammar_0, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_6, gSuccessorTable_baseline_include_grammar_7, 
  gSuccessorTable_baseline_include_grammar_8, nullptr, gSuccessorTable_baseline_include_grammar_10, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_baseline_include_grammar_15, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_baseline_include_grammar_23, 
  gSuccessorTable_baseline_include_grammar_24, nullptr, nullptr, gSuccessorTable_baseline_include_grammar_27, 
  gSuccessorTable_baseline_include_grammar_28, gSuccessorTable_baseline_include_grammar_29, nullptr, gSuccessorTable_baseline_include_grammar_31, 
  nullptr, gSuccessorTable_baseline_include_grammar_33, gSuccessorTable_baseline_include_grammar_34, nullptr, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_38, nullptr, 
  nullptr, gSuccessorTable_baseline_include_grammar_41, nullptr, gSuccessorTable_baseline_include_grammar_43, 
  gSuccessorTable_baseline_include_grammar_44, gSuccessorTable_baseline_include_grammar_45, nullptr, nullptr, 
  gSuccessorTable_baseline_include_grammar_48, gSuccessorTable_baseline_include_grammar_49, gSuccessorTable_baseline_include_grammar_50, gSuccessorTable_baseline_include_grammar_51, 
  gSuccessorTable_baseline_include_grammar_52, nullptr, nullptr, nullptr, 
  gSuccessorTable_baseline_include_grammar_56, nullptr, gSuccessorTable_baseline_include_grammar_58, nullptr, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_62, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_baseline_include_grammar_67, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_baseline_include_grammar_72, gSuccessorTable_baseline_include_grammar_73, nullptr, gSuccessorTable_baseline_include_grammar_75, 
  nullptr, gSuccessorTable_baseline_include_grammar_77, gSuccessorTable_baseline_include_grammar_78, gSuccessorTable_baseline_include_grammar_79, 
  gSuccessorTable_baseline_include_grammar_80, gSuccessorTable_baseline_include_grammar_81, gSuccessorTable_baseline_include_grammar_82, nullptr, 
  gSuccessorTable_baseline_include_grammar_84, gSuccessorTable_baseline_include_grammar_85, gSuccessorTable_baseline_include_grammar_86, gSuccessorTable_baseline_include_grammar_87, 
  nullptr, gSuccessorTable_baseline_include_grammar_89, gSuccessorTable_baseline_include_grammar_90, gSuccessorTable_baseline_include_grammar_91, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_94, nullptr, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_98, nullptr, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_102, gSuccessorTable_baseline_include_grammar_103, 
  gSuccessorTable_baseline_include_grammar_104, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_baseline_include_grammar_111, 
  gSuccessorTable_baseline_include_grammar_112, gSuccessorTable_baseline_include_grammar_113, gSuccessorTable_baseline_include_grammar_114, gSuccessorTable_baseline_include_grammar_115, 
  gSuccessorTable_baseline_include_grammar_116, gSuccessorTable_baseline_include_grammar_117, gSuccessorTable_baseline_include_grammar_118, nullptr, 
  nullptr, gSuccessorTable_baseline_include_grammar_121, gSuccessorTable_baseline_include_grammar_122, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_baseline_include_grammar_153, gSuccessorTable_baseline_include_grammar_154, nullptr, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_158, gSuccessorTable_baseline_include_grammar_159, 
  gSuccessorTable_baseline_include_grammar_160, gSuccessorTable_baseline_include_grammar_161, gSuccessorTable_baseline_include_grammar_162, gSuccessorTable_baseline_include_grammar_163, 
  gSuccessorTable_baseline_include_grammar_164, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_178, nullptr, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_182, gSuccessorTable_baseline_include_grammar_183, 
  nullptr, gSuccessorTable_baseline_include_grammar_185, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_190, gSuccessorTable_baseline_include_grammar_191, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_baseline_include_grammar_200, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_baseline_include_grammar_205, nullptr, gSuccessorTable_baseline_include_grammar_207, 
  nullptr, nullptr, nullptr, gSuccessorTable_baseline_include_grammar_211, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_214, gSuccessorTable_baseline_include_grammar_215, 
  gSuccessorTable_baseline_include_grammar_216, gSuccessorTable_baseline_include_grammar_217, nullptr, gSuccessorTable_baseline_include_grammar_219, 
  gSuccessorTable_baseline_include_grammar_220, nullptr, nullptr, nullptr, 
  gSuccessorTable_baseline_include_grammar_224, nullptr, gSuccessorTable_baseline_include_grammar_226, nullptr, 
  nullptr, gSuccessorTable_baseline_include_grammar_229, nullptr, nullptr, 
  nullptr, gSuccessorTable_baseline_include_grammar_233, gSuccessorTable_baseline_include_grammar_234, nullptr, 
  gSuccessorTable_baseline_include_grammar_236, gSuccessorTable_baseline_include_grammar_237, nullptr, gSuccessorTable_baseline_include_grammar_239, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_baseline_include_grammar_244, nullptr, nullptr, nullptr, 
  gSuccessorTable_baseline_include_grammar_248, nullptr, gSuccessorTable_baseline_include_grammar_250, nullptr, 
  gSuccessorTable_baseline_include_grammar_252, gSuccessorTable_baseline_include_grammar_253, gSuccessorTable_baseline_include_grammar_254, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_baseline_include_grammar_259, 
  gSuccessorTable_baseline_include_grammar_260, nullptr, nullptr, nullptr, 
  gSuccessorTable_baseline_include_grammar_264, nullptr, gSuccessorTable_baseline_include_grammar_266, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_baseline_include_grammar_277, gSuccessorTable_baseline_include_grammar_278, nullptr, 
  gSuccessorTable_baseline_include_grammar_280, nullptr, gSuccessorTable_baseline_include_grammar_282, nullptr, 
  nullptr, gSuccessorTable_baseline_include_grammar_285, gSuccessorTable_baseline_include_grammar_286, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_baseline_include_grammar_291, 
  nullptr, gSuccessorTable_baseline_include_grammar_293, nullptr, gSuccessorTable_baseline_include_grammar_295, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_298, nullptr, 
  gSuccessorTable_baseline_include_grammar_300, gSuccessorTable_baseline_include_grammar_301, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_306, nullptr, 
  gSuccessorTable_baseline_include_grammar_308, nullptr, gSuccessorTable_baseline_include_grammar_310, nullptr, 
  gSuccessorTable_baseline_include_grammar_312, gSuccessorTable_baseline_include_grammar_313, gSuccessorTable_baseline_include_grammar_314, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_baseline_include_grammar_323, 
  nullptr, nullptr, gSuccessorTable_baseline_include_grammar_326, nullptr, 
  nullptr, gSuccessorTable_baseline_include_grammar_329, gSuccessorTable_baseline_include_grammar_330, gSuccessorTable_baseline_include_grammar_331, 
  nullptr, gSuccessorTable_baseline_include_grammar_333, nullptr, nullptr, 
  gSuccessorTable_baseline_include_grammar_336, gSuccessorTable_baseline_include_grammar_337, nullptr, nullptr, 
  nullptr} ;

//--------------------------------------------------------------------------------------------------
//
//                Production rules infos (left non terminal, size of right string)                  
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionsTable_baseline_include_grammar [190 * 2] = {
  7, 1,
  8, 1,
  9, 7,
  10, 1,
  11, 3,
  12, 1,
  13, 2,
  13, 1,
  13, 1,
  14, 4,
  15, 2,
  0, 4,
  16, 5,
  1, 5,
  2, 4,
  6, 2,
  17, 2,
  18, 2,
  19, 2,
  20, 2,
  21, 1,
  3, 2,
  5, 2,
  5, 1,
  5, 3,
  4, 1,
  22, 0,
  22, 5,
  22, 5,
  22, 2,
  22, 2,
  22, 2,
  22, 2,
  23, 0,
  23, 3,
  24, 0,
  24, 3,
  25, 0,
  25, 2,
  25, 2,
  26, 0,
  26, 1,
  27, 0,
  27, 2,
  28, 12,
  28, 2,
  28, 2,
  28, 5,
  28, 4,
  28, 7,
  28, 5,
  28, 10,
  28, 2,
  29, 0,
  29, 1,
  30, 0,
  30, 1,
  31, 0,
  31, 1,
  32, 0,
  32, 1,
  33, 4,
  33, 3,
  34, 1,
  34, 1,
  35, 0,
  35, 2,
  36, 0,
  36, 1,
  37, 0,
  37, 1,
  38, 0,
  38, 1,
  39, 0,
  39, 5,
  40, 0,
  40, 1,
  41, 0,
  41, 1,
  42, 0,
  42, 3,
  42, 3,
  43, 0,
  43, 1,
  44, 0,
  44, 1,
  45, 3,
  45, 4,
  45, 2,
  45, 4,
  45, 2,
  45, 2,
  45, 1,
  45, 1,
  45, 1,
  45, 1,
  45, 1,
  45, 2,
  45, 2,
  46, 1,
  46, 1,
  46, 1,
  46, 1,
  46, 1,
  46, 1,
  46, 1,
  46, 1,
  46, 1,
  46, 1,
  46, 1,
  46, 1,
  47, 1,
  47, 1,
  48, 1,
  48, 1,
  49, 1,
  49, 1,
  49, 1,
  49, 1,
  50, 4,
  50, 3,
  51, 1,
  51, 1,
  52, 0,
  52, 2,
  53, 0,
  53, 3,
  54, 0,
  54, 3,
  55, 0,
  55, 4,
  56, 1,
  56, 1,
  57, 0,
  57, 1,
  57, 1,
  58, 0,
  58, 3,
  59, 0,
  59, 4,
  60, 0,
  60, 3,
  61, 3,
  61, 1,
  61, 1,
  62, 0,
  62, 4,
  63, 0,
  63, 3,
  64, 0,
  64, 2,
  65, 0,
  65, 3,
  65, 3,
  66, 0,
  66, 3,
  67, 0,
  67, 2,
  67, 2,
  67, 2,
  67, 2,
  67, 2,
  67, 2,
  68, 0,
  68, 3,
  68, 3,
  68, 3,
  68, 3,
  69, 0,
  69, 3,
  69, 3,
  69, 3,
  70, 2,
  70, 2,
  70, 1,
  70, 1,
  70, 2,
  70, 3,
  70, 7,
  71, 0,
  71, 3,
  72, 0,
  72, 5,
  73, 0,
  73, 3,
  74, 0,
  74, 3,
  75, 0,
  75, 2,
  76, 1
} ;

//--------------------------------------------------------------------------------------------------
//
//                     'configuration_definition' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_configuration_5F_definition_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 11) {
  rule_communs_configuration_5F_definition_i0_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_configuration_5F_definition_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 11) {
  rule_communs_configuration_5F_definition_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_configuration_5F_definition_ (GGS_configDefinitionList &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 11) {
  rule_communs_configuration_5F_definition_i0_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                          'ram_definition' non terminal implementation                            
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_ram_5F_definition_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 13) {
  rule_communs_ram_5F_definition_i2_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_ram_5F_definition_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 13) {
  rule_communs_ram_5F_definition_i2_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_ram_5F_definition_ (GGS_ramDefinitionList &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 13) {
  rule_communs_ram_5F_definition_i2_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'constant_definition' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_constant_5F_definition_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 14) {
  rule_communs_constant_5F_definition_i3_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_constant_5F_definition_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 14) {
  rule_communs_constant_5F_definition_i3_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_constant_5F_definition_ (GGS_constantDefinitionList &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 14) {
  rule_communs_constant_5F_definition_i3_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                         'register_parsing' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_register_5F_parsing_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 21) {
  rule_communs_register_5F_parsing_i10_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_register_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 21) {
  rule_communs_register_5F_parsing_i10_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_register_5F_parsing_ (GGS_registerExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 21) {
  rule_communs_register_5F_parsing_i10_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'optional_w_as_dest' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_optional_5F_w_5F_as_5F_dest_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 25) {
  rule_communs_optional_5F_w_5F_as_5F_dest_i14_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_optional_5F_w_5F_as_5F_dest_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 25) {
  rule_communs_optional_5F_w_5F_as_5F_dest_i14_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_optional_5F_w_5F_as_5F_dest_ (GGS_bool &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 25) {
  rule_communs_optional_5F_w_5F_as_5F_dest_i14_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'bit_number_parsing' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_bit_5F_number_5F_parsing_parse (Lexique_piccolo_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_communs_bit_5F_number_5F_parsing_i11_parse(inLexique) ;
    break ;
  case 23 :
      rule_communs_bit_5F_number_5F_parsing_i12_parse(inLexique) ;
    break ;
  case 24 :
      rule_communs_bit_5F_number_5F_parsing_i13_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_bit_5F_number_5F_parsing_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_communs_bit_5F_number_5F_parsing_i11_indexing(inLexique) ;
    break ;
  case 23 :
      rule_communs_bit_5F_number_5F_parsing_i12_indexing(inLexique) ;
    break ;
  case 24 :
      rule_communs_bit_5F_number_5F_parsing_i13_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_bit_5F_number_5F_parsing_ (GGS_bitNumberExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_communs_bit_5F_number_5F_parsing_i11_(parameter_1, inLexique) ;
    break ;
  case 23 :
      rule_communs_bit_5F_number_5F_parsing_i12_(parameter_1, inLexique) ;
    break ;
  case 24 :
      rule_communs_bit_5F_number_5F_parsing_i13_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'immediate_expression' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_expression_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 15) {
  rule_communs_immediate_5F_expression_i4_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_expression_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 15) {
  rule_communs_immediate_5F_expression_i4_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_expression_ (GGS_immediatExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 15) {
  rule_communs_immediate_5F_expression_i4_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                           'section_list' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_section_5F_list_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_baseline_5F_syntax_section_5F_list_i0_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_section_5F_list_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_baseline_5F_syntax_section_5F_list_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_section_5F_list_ (GGS_baseline_5F_routineDefinitionList &  parameter_1,
                                GGS_lstringlist &  parameter_2,
                                GGS_ramDefinitionList &  parameter_3,
                                GGS_lstringlist &  parameter_4,
                                GGS_configDefinitionList &  parameter_5,
                                GGS_constantDefinitionList &  parameter_6,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_baseline_5F_syntax_section_5F_list_i0_(parameter_1, parameter_2, parameter_3, parameter_4, parameter_5, parameter_6, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_piccolo_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_piccolo_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performBottomUpParsing (gActionTable_baseline_include_grammar, gNonTerminalNames_baseline_include_grammar,
                                                     gActionTableIndex_baseline_include_grammar, gSuccessorTable_baseline_include_grammar,
                                                     gProductionsTable_baseline_include_grammar) ;
    if (ok) {
      cGrammar_baseline_5F_include_5F_grammar grammar ;
      grammar.nt_section_5F_list_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_baseline_5F_include_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_piccolo_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_piccolo_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_baseline_5F_include_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_piccolo_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_piccolo_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_baseline_include_grammar, gNonTerminalNames_baseline_include_grammar,
                                     gActionTableIndex_baseline_include_grammar, gSuccessorTable_baseline_include_grammar,
                                     gProductionsTable_baseline_include_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_baseline_5F_routineDefinitionList &  parameter_1,
                                GGS_lstringlist &  parameter_2,
                                GGS_ramDefinitionList &  parameter_3,
                                GGS_lstringlist &  parameter_4,
                                GGS_configDefinitionList &  parameter_5,
                                GGS_constantDefinitionList &  parameter_6
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
      Lexique_piccolo_5F_lexique * scanner = nullptr ;
      macroMyNew (scanner, Lexique_piccolo_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_baseline_include_grammar, gNonTerminalNames_baseline_include_grammar,
                                                         gActionTableIndex_baseline_include_grammar, gSuccessorTable_baseline_include_grammar,
                                                         gProductionsTable_baseline_include_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_baseline_5F_include_5F_grammar grammar ;
          grammar.nt_section_5F_list_ (parameter_1, parameter_2, parameter_3, parameter_4, parameter_5, parameter_6, scanner) ;
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

void cGrammar_baseline_5F_include_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_baseline_5F_routineDefinitionList &  parameter_1,
                                GGS_lstringlist &  parameter_2,
                                GGS_ramDefinitionList &  parameter_3,
                                GGS_lstringlist &  parameter_4,
                                GGS_configDefinitionList &  parameter_5,
                                GGS_constantDefinitionList &  parameter_6
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_piccolo_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_piccolo_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_baseline_include_grammar, gNonTerminalNames_baseline_include_grammar,
                                                       gActionTableIndex_baseline_include_grammar, gSuccessorTable_baseline_include_grammar,
                                                       gProductionsTable_baseline_include_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_baseline_5F_include_5F_grammar grammar ;
        grammar.nt_section_5F_list_ (parameter_1, parameter_2, parameter_3, parameter_4, parameter_5, parameter_6, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'baseline_instruction_list' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_instruction_5F_list_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_instruction_5F_list_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_instruction_5F_list_ (GGS_baseline_5F_instructionList &  parameter_1,
                                GGS_labelMap &  parameter_2,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_baseline_5F_syntax_baseline_5F_instruction_5F_list_i1_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                   'baseline_routine_definition' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_routine_5F_definition_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_routine_5F_definition_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_routine_5F_definition_ (GGS_baseline_5F_routineDefinitionList &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_baseline_5F_syntax_baseline_5F_routine_5F_definition_i2_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                 'baseline_structured_instruction' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_structured_5F_instruction_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_structured_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_structured_5F_instruction_ (GGS_baseline_5F_instruction &  parameter_1,
                                GGS_labelMap &  parameter_2,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_baseline_5F_syntax_baseline_5F_structured_5F_instruction_i3_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                'baseline_structured_if_instruction' non terminal implementation                  
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_structured_5F_if_5F_instruction_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_structured_5F_if_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_structured_5F_if_5F_instruction_ (const GGS_lstring  parameter_1,
                                GGS_baseline_5F_instruction &  parameter_2,
                                GGS_labelMap &  parameter_3,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_baseline_5F_syntax_baseline_5F_structured_5F_if_5F_instruction_i4_(parameter_1, parameter_2, parameter_3, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                   'baseline_simple_instruction' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_simple_5F_instruction_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 5) {
  rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_simple_5F_instruction_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 5) {
  rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_simple_5F_instruction_ (GGS_baseline_5F_instruction &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 5) {
  rule_baseline_5F_syntax_baseline_5F_simple_5F_instruction_i5_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'baseline_condition_factor' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_condition_5F_factor_parse (Lexique_piccolo_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_parse(inLexique) ;
    break ;
  case 7 :
      rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_parse(inLexique) ;
    break ;
  case 8 :
      rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_condition_5F_factor_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_indexing(inLexique) ;
    break ;
  case 7 :
      rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_indexing(inLexique) ;
    break ;
  case 8 :
      rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_condition_5F_factor_ (GGS_baseline_5F_conditionExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i6_(parameter_1, inLexique) ;
    break ;
  case 7 :
      rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i7_(parameter_1, inLexique) ;
    break ;
  case 8 :
      rule_baseline_5F_syntax_baseline_5F_condition_5F_factor_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                  'baseline_condition_expression' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_condition_5F_expression_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 9) {
  rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_condition_5F_expression_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 9) {
  rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_condition_5F_expression_ (GGS_baseline_5F_conditionExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 9) {
  rule_baseline_5F_syntax_baseline_5F_condition_5F_expression_i9_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                     'baseline_condition_term' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_condition_5F_term_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 10) {
  rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_condition_5F_term_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 10) {
  rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_baseline_5F_condition_5F_term_ (GGS_baseline_5F_conditionExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 10) {
  rule_baseline_5F_syntax_baseline_5F_condition_5F_term_i10_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'declaration_in_ram' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_declaration_5F_in_5F_ram_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 12) {
  rule_communs_declaration_5F_in_5F_ram_i1_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_declaration_5F_in_5F_ram_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 12) {
  rule_communs_declaration_5F_in_5F_ram_i1_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_declaration_5F_in_5F_ram_ (GGS_declarationInRam &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 12) {
  rule_communs_declaration_5F_in_5F_ram_i1_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                      'immediate_bitwise_term' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_bitwise_5F_term_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 16) {
  rule_communs_immediate_5F_bitwise_5F_term_i5_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_bitwise_5F_term_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 16) {
  rule_communs_immediate_5F_bitwise_5F_term_i5_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_bitwise_5F_term_ (GGS_immediatExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 16) {
  rule_communs_immediate_5F_bitwise_5F_term_i5_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                     'immediate_bitwise_factor' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_bitwise_5F_factor_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 17) {
  rule_communs_immediate_5F_bitwise_5F_factor_i6_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_bitwise_5F_factor_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 17) {
  rule_communs_immediate_5F_bitwise_5F_factor_i6_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_bitwise_5F_factor_ (GGS_immediatExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 17) {
  rule_communs_immediate_5F_bitwise_5F_factor_i6_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                          'immediate_term' non terminal implementation                            
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_term_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 18) {
  rule_communs_immediate_5F_term_i7_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_term_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 18) {
  rule_communs_immediate_5F_term_i7_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_term_ (GGS_immediatExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 18) {
  rule_communs_immediate_5F_term_i7_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                         'immediate_factor' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_factor_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 19) {
  rule_communs_immediate_5F_factor_i8_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_factor_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 19) {
  rule_communs_immediate_5F_factor_i8_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_factor_ (GGS_immediatExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 19) {
  rule_communs_immediate_5F_factor_i8_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'immediate_primary' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_primary_parse (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_communs_immediate_5F_primary_i9_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_primary_indexing (Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_communs_immediate_5F_primary_i9_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_baseline_5F_include_5F_grammar::nt_immediate_5F_primary_ (GGS_immediatExpression &  parameter_1,
                                Lexique_piccolo_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_communs_immediate_5F_primary_i9_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_0' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_0 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  26 27 28 29 30 31 32
  return inLexique->nextProductionIndex () - 25 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_1' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_1 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  33 34
  return inLexique->nextProductionIndex () - 32 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_2' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_2 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  35 36
  return inLexique->nextProductionIndex () - 34 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_3' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_3 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  37 38 39
  return inLexique->nextProductionIndex () - 36 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_4' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_4 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  40 41
  return inLexique->nextProductionIndex () - 39 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_5' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_5 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  42 43
  return inLexique->nextProductionIndex () - 41 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_6' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_6 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  44 45 46 47 48 49 50 51 52
  return inLexique->nextProductionIndex () - 43 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_7' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_7 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  53 54
  return inLexique->nextProductionIndex () - 52 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_8' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_8 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  55 56
  return inLexique->nextProductionIndex () - 54 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_9' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_9 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  57 58
  return inLexique->nextProductionIndex () - 56 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_10' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_10 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  59 60
  return inLexique->nextProductionIndex () - 58 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_11' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_11 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  61 62
  return inLexique->nextProductionIndex () - 60 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_12' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_12 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  63 64
  return inLexique->nextProductionIndex () - 62 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_13' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_13 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  65 66
  return inLexique->nextProductionIndex () - 64 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_14' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_14 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  67 68
  return inLexique->nextProductionIndex () - 66 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_15' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_15 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  69 70
  return inLexique->nextProductionIndex () - 68 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_16' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_16 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  71 72
  return inLexique->nextProductionIndex () - 70 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_17' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_17 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  73 74
  return inLexique->nextProductionIndex () - 72 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_18' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_18 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  75 76
  return inLexique->nextProductionIndex () - 74 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_19' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_19 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  77 78
  return inLexique->nextProductionIndex () - 76 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_20' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_20 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  79 80 81
  return inLexique->nextProductionIndex () - 78 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_21' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_21 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  82 83
  return inLexique->nextProductionIndex () - 81 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_22' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_22 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  84 85
  return inLexique->nextProductionIndex () - 83 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_23' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_23 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  86 87 88 89 90 91 92 93 94 95 96 97 98
  return inLexique->nextProductionIndex () - 85 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_24' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_24 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  99 100 101 102 103 104 105 106 107 108 109 110
  return inLexique->nextProductionIndex () - 98 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_25' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_25 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  111 112
  return inLexique->nextProductionIndex () - 110 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_26' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_26 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  113 114
  return inLexique->nextProductionIndex () - 112 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_27' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_27 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  115 116 117 118
  return inLexique->nextProductionIndex () - 114 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_28' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_28 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  119 120
  return inLexique->nextProductionIndex () - 118 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_29' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_29 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  121 122
  return inLexique->nextProductionIndex () - 120 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_30' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_30 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  123 124
  return inLexique->nextProductionIndex () - 122 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_31' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_31 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  125 126
  return inLexique->nextProductionIndex () - 124 ;
}

//--------------------------------------------------------------------------------------------------
//
//                   'select_baseline_5F_syntax_32' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_baseline_5F_syntax_32 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  127 128
  return inLexique->nextProductionIndex () - 126 ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'select_communs_0' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_0 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  129 130
  return inLexique->nextProductionIndex () - 128 ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'select_communs_1' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_1 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  131 132
  return inLexique->nextProductionIndex () - 130 ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'select_communs_2' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_2 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  133 134 135
  return inLexique->nextProductionIndex () - 132 ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'select_communs_3' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_3 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  136 137
  return inLexique->nextProductionIndex () - 135 ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'select_communs_4' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_4 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  138 139
  return inLexique->nextProductionIndex () - 137 ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'select_communs_5' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_5 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  140 141
  return inLexique->nextProductionIndex () - 139 ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'select_communs_6' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_6 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  142 143 144
  return inLexique->nextProductionIndex () - 141 ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'select_communs_7' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_7 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  145 146
  return inLexique->nextProductionIndex () - 144 ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'select_communs_8' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_8 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  147 148
  return inLexique->nextProductionIndex () - 146 ;
}

//--------------------------------------------------------------------------------------------------
//
//                         'select_communs_9' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_9 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  149 150
  return inLexique->nextProductionIndex () - 148 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_10' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_10 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  151 152 153
  return inLexique->nextProductionIndex () - 150 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_11' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_11 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  154 155
  return inLexique->nextProductionIndex () - 153 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_12' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_12 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  156 157 158 159 160 161 162
  return inLexique->nextProductionIndex () - 155 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_13' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_13 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  163 164 165 166 167
  return inLexique->nextProductionIndex () - 162 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_14' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_14 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  168 169 170 171
  return inLexique->nextProductionIndex () - 167 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_15' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_15 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  172 173 174 175 176 177 178
  return inLexique->nextProductionIndex () - 171 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_16' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_16 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  179 180
  return inLexique->nextProductionIndex () - 178 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_17' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_17 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  181 182
  return inLexique->nextProductionIndex () - 180 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_18' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_18 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  183 184
  return inLexique->nextProductionIndex () - 182 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_19' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_19 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  185 186
  return inLexique->nextProductionIndex () - 184 ;
}

//--------------------------------------------------------------------------------------------------
//
//                        'select_communs_20' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_baseline_5F_include_5F_grammar::select_communs_20 (Lexique_piccolo_5F_lexique * inLexique) {
// Productions numbers:  187 188
  return inLexique->nextProductionIndex () - 186 ;
}

//--------------------------------------------------------------------------------------------------

