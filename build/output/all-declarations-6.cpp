#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_computed_5F_retlw reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_computed_5F_retlw::objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_retlw & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_computed_5F_retlw::GGS_pic_31__38_Instruction_5F_computed_5F_retlw (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw GGS_pic_31__38_Instruction_5F_computed_5F_retlw::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_immediatExpression & in_mSizeExpression,
                      const GGS_immediatExpressionList & in_mImmediateExpressionList,
                      const GGS_bool & in_mUsesRelativeCall,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_computed_5F_retlw_init_21__21__21__21_ (in_mInstructionLocation, in_mSizeExpression, in_mImmediateExpressionList, in_mUsesRelativeCall, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::
pic_31__38_Instruction_5F_computed_5F_retlw_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_immediatExpression & in_mSizeExpression,
                                                                  const GGS_immediatExpressionList & in_mImmediateExpressionList,
                                                                  const GGS_bool & in_mUsesRelativeCall,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mImmediateExpressionList = in_mImmediateExpressionList ;
  mProperty_mUsesRelativeCall = in_mUsesRelativeCall ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw::GGS_pic_31__38_Instruction_5F_computed_5F_retlw (const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw GGS_pic_31__38_Instruction_5F_computed_5F_retlw::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                 const GGS_immediatExpression & in_mSizeExpression,
                                                                                                                 const GGS_immediatExpressionList & in_mImmediateExpressionList,
                                                                                                                 const GGS_bool & in_mUsesRelativeCall,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (in_mInstructionLocation, in_mSizeExpression, in_mImmediateExpressionList, in_mUsesRelativeCall,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_computed_5F_retlw::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList GGS_pic_31__38_Instruction_5F_computed_5F_retlw::readProperty_mImmediateExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpressionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    return p->mProperty_mImmediateExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_computed_5F_retlw::readProperty_mUsesRelativeCall (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
    return p->mProperty_mUsesRelativeCall ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_computed_retlw class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mSizeExpression (),
mProperty_mImmediateExpressionList (),
mProperty_mUsesRelativeCall () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_immediatExpression & in_mSizeExpression,
                                                                                                    const GGS_immediatExpressionList & in_mImmediateExpressionList,
                                                                                                    const GGS_bool & in_mUsesRelativeCall,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSizeExpression (),
mProperty_mImmediateExpressionList (),
mProperty_mUsesRelativeCall () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mImmediateExpressionList = in_mImmediateExpressionList ;
  mProperty_mUsesRelativeCall = in_mUsesRelativeCall ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_computed_retlw:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediateExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw (mProperty_mInstructionLocation, mProperty_mSizeExpression, mProperty_mImmediateExpressionList, mProperty_mUsesRelativeCall, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSizeExpression.printNonNullClassInstanceProperties ("mSizeExpression") ;
    mProperty_mImmediateExpressionList.printNonNullClassInstanceProperties ("mImmediateExpressionList") ;
    mProperty_mUsesRelativeCall.printNonNullClassInstanceProperties ("mUsesRelativeCall") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_computed_retlw generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ("pic18Instruction_computed_retlw",
                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_computed_5F_retlw::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_computed_5F_retlw::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_computed_5F_retlw (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw GGS_pic_31__38_Instruction_5F_computed_5F_retlw::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw * p = (const GGS_pic_31__38_Instruction_5F_computed_5F_retlw *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_computed_5F_retlw *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_retlw", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak & GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_computed_5F_retlw & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak (const GGS_pic_31__38_Instruction_5F_computed_5F_retlw & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_retlw * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_computed_5F_retlw (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::bang_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_computed_5F_retlw result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_retlw) ;
      result = GGS_pic_31__38_Instruction_5F_computed_5F_retlw ((cPtr_pic_31__38_Instruction_5F_computed_5F_retlw *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_computed_retlw.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak ("pic18Instruction_computed_retlw.weak",
                                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_retlw.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_computed_5F_bra reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_computed_5F_bra::objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_bra & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_computed_5F_bra::GGS_pic_31__38_Instruction_5F_computed_5F_bra (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra GGS_pic_31__38_Instruction_5F_computed_5F_bra::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_immediatExpression & in_mSizeExpression,
                      const GGS_lstringlist & in_mTargetLabels,
                      const GGS_bool & in_mUsesRelativeCall,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_computed_5F_bra * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_computed_5F_bra (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_computed_5F_bra_init_21__21__21__21_ (in_mInstructionLocation, in_mSizeExpression, in_mTargetLabels, in_mUsesRelativeCall, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::
pic_31__38_Instruction_5F_computed_5F_bra_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                const GGS_immediatExpression & in_mSizeExpression,
                                                                const GGS_lstringlist & in_mTargetLabels,
                                                                const GGS_bool & in_mUsesRelativeCall,
                                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRelativeCall = in_mUsesRelativeCall ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra::GGS_pic_31__38_Instruction_5F_computed_5F_bra (const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra GGS_pic_31__38_Instruction_5F_computed_5F_bra::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                             const GGS_immediatExpression & in_mSizeExpression,
                                                                                                             const GGS_lstringlist & in_mTargetLabels,
                                                                                                             const GGS_bool & in_mUsesRelativeCall,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_bra result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra (in_mInstructionLocation, in_mSizeExpression, in_mTargetLabels, in_mUsesRelativeCall,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_computed_5F_bra::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_pic_31__38_Instruction_5F_computed_5F_bra::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_computed_5F_bra::readProperty_mUsesRelativeCall (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
    return p->mProperty_mUsesRelativeCall ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_computed_bra class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_bra::cPtr_pic_31__38_Instruction_5F_computed_5F_bra (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mSizeExpression (),
mProperty_mTargetLabels (),
mProperty_mUsesRelativeCall () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_bra::cPtr_pic_31__38_Instruction_5F_computed_5F_bra (const GGS_location & in_mInstructionLocation,
                                                                                                const GGS_immediatExpression & in_mSizeExpression,
                                                                                                const GGS_lstringlist & in_mTargetLabels,
                                                                                                const GGS_bool & in_mUsesRelativeCall,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSizeExpression (),
mProperty_mTargetLabels (),
mProperty_mUsesRelativeCall () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRelativeCall = in_mUsesRelativeCall ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_bra::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_computed_bra:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_bra::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra (mProperty_mInstructionLocation, mProperty_mSizeExpression, mProperty_mTargetLabels, mProperty_mUsesRelativeCall, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSizeExpression.printNonNullClassInstanceProperties ("mSizeExpression") ;
    mProperty_mTargetLabels.printNonNullClassInstanceProperties ("mTargetLabels") ;
    mProperty_mUsesRelativeCall.printNonNullClassInstanceProperties ("mUsesRelativeCall") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_computed_bra generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ("pic18Instruction_computed_bra",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_computed_5F_bra::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_computed_5F_bra::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_computed_5F_bra (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra GGS_pic_31__38_Instruction_5F_computed_5F_bra::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_bra result ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra * p = (const GGS_pic_31__38_Instruction_5F_computed_5F_bra *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_computed_5F_bra *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_bra", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak & GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_computed_5F_bra & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak (const GGS_pic_31__38_Instruction_5F_computed_5F_bra & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_computed_5F_bra result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_bra * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_computed_5F_bra (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::bang_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_computed_5F_bra result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_bra) ;
      result = GGS_pic_31__38_Instruction_5F_computed_5F_bra ((cPtr_pic_31__38_Instruction_5F_computed_5F_bra *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_computed_bra.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak ("pic18Instruction_computed_bra.weak",
                                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_bra.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_computed_5F_goto reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_computed_5F_goto::objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_goto & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_computed_5F_goto::GGS_pic_31__38_Instruction_5F_computed_5F_goto (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto GGS_pic_31__38_Instruction_5F_computed_5F_goto::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_immediatExpression & in_mSizeExpression,
                      const GGS_lstringlist & in_mTargetLabels,
                      const GGS_bool & in_mUsesRelativeCall,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_computed_5F_goto * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_computed_5F_goto (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_computed_5F_goto_init_21__21__21__21_ (in_mInstructionLocation, in_mSizeExpression, in_mTargetLabels, in_mUsesRelativeCall, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::
pic_31__38_Instruction_5F_computed_5F_goto_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_immediatExpression & in_mSizeExpression,
                                                                 const GGS_lstringlist & in_mTargetLabels,
                                                                 const GGS_bool & in_mUsesRelativeCall,
                                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRelativeCall = in_mUsesRelativeCall ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto::GGS_pic_31__38_Instruction_5F_computed_5F_goto (const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto GGS_pic_31__38_Instruction_5F_computed_5F_goto::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                               const GGS_immediatExpression & in_mSizeExpression,
                                                                                                               const GGS_lstringlist & in_mTargetLabels,
                                                                                                               const GGS_bool & in_mUsesRelativeCall,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_goto result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto (in_mInstructionLocation, in_mSizeExpression, in_mTargetLabels, in_mUsesRelativeCall,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_computed_5F_goto::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_pic_31__38_Instruction_5F_computed_5F_goto::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_computed_5F_goto::readProperty_mUsesRelativeCall (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
    return p->mProperty_mUsesRelativeCall ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_computed_goto class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_goto::cPtr_pic_31__38_Instruction_5F_computed_5F_goto (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mSizeExpression (),
mProperty_mTargetLabels (),
mProperty_mUsesRelativeCall () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_goto::cPtr_pic_31__38_Instruction_5F_computed_5F_goto (const GGS_location & in_mInstructionLocation,
                                                                                                  const GGS_immediatExpression & in_mSizeExpression,
                                                                                                  const GGS_lstringlist & in_mTargetLabels,
                                                                                                  const GGS_bool & in_mUsesRelativeCall,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSizeExpression (),
mProperty_mTargetLabels (),
mProperty_mUsesRelativeCall () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRelativeCall = in_mUsesRelativeCall ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_goto::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_computed_goto:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_goto::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto (mProperty_mInstructionLocation, mProperty_mSizeExpression, mProperty_mTargetLabels, mProperty_mUsesRelativeCall, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSizeExpression.printNonNullClassInstanceProperties ("mSizeExpression") ;
    mProperty_mTargetLabels.printNonNullClassInstanceProperties ("mTargetLabels") ;
    mProperty_mUsesRelativeCall.printNonNullClassInstanceProperties ("mUsesRelativeCall") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_computed_goto generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ("pic18Instruction_computed_goto",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_computed_5F_goto::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_computed_5F_goto::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_computed_5F_goto (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto GGS_pic_31__38_Instruction_5F_computed_5F_goto::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_goto result ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto * p = (const GGS_pic_31__38_Instruction_5F_computed_5F_goto *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_computed_5F_goto *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_goto", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak & GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_computed_5F_goto & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak (const GGS_pic_31__38_Instruction_5F_computed_5F_goto & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_computed_5F_goto result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_goto * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_computed_5F_goto (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::bang_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_computed_5F_goto result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_goto) ;
      result = GGS_pic_31__38_Instruction_5F_computed_5F_goto ((cPtr_pic_31__38_Instruction_5F_computed_5F_goto *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_computed_goto.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak ("pic18Instruction_computed_goto.weak",
                                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_goto.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_computed_5F_rcall reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_computed_5F_rcall::objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_rcall & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_computed_5F_rcall::GGS_pic_31__38_Instruction_5F_computed_5F_rcall (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall GGS_pic_31__38_Instruction_5F_computed_5F_rcall::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_immediatExpression & in_mSizeExpression,
                      const GGS_lstringlist & in_mTargetLabels,
                      const GGS_bool & in_mUsesRelativeCall,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_computed_5F_rcall_init_21__21__21__21_ (in_mInstructionLocation, in_mSizeExpression, in_mTargetLabels, in_mUsesRelativeCall, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::
pic_31__38_Instruction_5F_computed_5F_rcall_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_immediatExpression & in_mSizeExpression,
                                                                  const GGS_lstringlist & in_mTargetLabels,
                                                                  const GGS_bool & in_mUsesRelativeCall,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRelativeCall = in_mUsesRelativeCall ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall::GGS_pic_31__38_Instruction_5F_computed_5F_rcall (const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall GGS_pic_31__38_Instruction_5F_computed_5F_rcall::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                 const GGS_immediatExpression & in_mSizeExpression,
                                                                                                                 const GGS_lstringlist & in_mTargetLabels,
                                                                                                                 const GGS_bool & in_mUsesRelativeCall,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (in_mInstructionLocation, in_mSizeExpression, in_mTargetLabels, in_mUsesRelativeCall,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_computed_5F_rcall::readProperty_mSizeExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mSizeExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_pic_31__38_Instruction_5F_computed_5F_rcall::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_computed_5F_rcall::readProperty_mUsesRelativeCall (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mUsesRelativeCall ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_computed_rcall class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mSizeExpression (),
mProperty_mTargetLabels (),
mProperty_mUsesRelativeCall () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_immediatExpression & in_mSizeExpression,
                                                                                                    const GGS_lstringlist & in_mTargetLabels,
                                                                                                    const GGS_bool & in_mUsesRelativeCall,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSizeExpression (),
mProperty_mTargetLabels (),
mProperty_mUsesRelativeCall () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSizeExpression = in_mSizeExpression ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRelativeCall = in_mUsesRelativeCall ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;
}

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_computed_rcall:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSizeExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRelativeCall.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall (mProperty_mInstructionLocation, mProperty_mSizeExpression, mProperty_mTargetLabels, mProperty_mUsesRelativeCall, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSizeExpression.printNonNullClassInstanceProperties ("mSizeExpression") ;
    mProperty_mTargetLabels.printNonNullClassInstanceProperties ("mTargetLabels") ;
    mProperty_mUsesRelativeCall.printNonNullClassInstanceProperties ("mUsesRelativeCall") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_computed_rcall generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ("pic18Instruction_computed_rcall",
                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_computed_5F_rcall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_computed_5F_rcall::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_computed_5F_rcall (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall GGS_pic_31__38_Instruction_5F_computed_5F_rcall::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall * p = (const GGS_pic_31__38_Instruction_5F_computed_5F_rcall *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_computed_5F_rcall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_rcall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak & GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_computed_5F_rcall & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak (const GGS_pic_31__38_Instruction_5F_computed_5F_rcall & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_computed_5F_rcall * p = (cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_computed_5F_rcall (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::bang_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_computed_5F_rcall result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_computed_5F_rcall) ;
      result = GGS_pic_31__38_Instruction_5F_computed_5F_rcall ((cPtr_pic_31__38_Instruction_5F_computed_5F_rcall *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_computed_rcall.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak ("pic18Instruction_computed_rcall.weak",
                                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_computed_rcall.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_ConditionExpression_2E_weak::objectCompare (const GGS_pic_31__38_ConditionExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_ConditionExpression_2E_weak::GGS_pic_31__38_ConditionExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression_2E_weak & GGS_pic_31__38_ConditionExpression_2E_weak::operator = (const GGS_pic_31__38_ConditionExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression_2E_weak::GGS_pic_31__38_ConditionExpression_2E_weak (const GGS_pic_31__38_ConditionExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression_2E_weak GGS_pic_31__38_ConditionExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_ConditionExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression GGS_pic_31__38_ConditionExpression_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_ConditionExpression result ;
  if (isValid ()) {
    const cPtr_pic_31__38_ConditionExpression * p = (cPtr_pic_31__38_ConditionExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_ConditionExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression GGS_pic_31__38_ConditionExpression_2E_weak::bang_pic_31__38_ConditionExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_ConditionExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_ConditionExpression) ;
      result = GGS_pic_31__38_ConditionExpression ((cPtr_pic_31__38_ConditionExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18ConditionExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak ("pic18ConditionExpression.weak",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_ConditionExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_ConditionExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_ConditionExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression_2E_weak GGS_pic_31__38_ConditionExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_ConditionExpression_2E_weak result ;
  const GGS_pic_31__38_ConditionExpression_2E_weak * p = (const GGS_pic_31__38_ConditionExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_ConditionExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18ConditionExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_RegisterTestCondition_2E_weak::objectCompare (const GGS_pic_31__38_RegisterTestCondition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_RegisterTestCondition_2E_weak::GGS_pic_31__38_RegisterTestCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterTestCondition_2E_weak & GGS_pic_31__38_RegisterTestCondition_2E_weak::operator = (const GGS_pic_31__38_RegisterTestCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterTestCondition_2E_weak::GGS_pic_31__38_RegisterTestCondition_2E_weak (const GGS_pic_31__38_RegisterTestCondition & inSource) :
GGS_pic_31__38_ConditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterTestCondition_2E_weak GGS_pic_31__38_RegisterTestCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_RegisterTestCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterTestCondition GGS_pic_31__38_RegisterTestCondition_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_RegisterTestCondition result ;
  if (isValid ()) {
    const cPtr_pic_31__38_RegisterTestCondition * p = (cPtr_pic_31__38_RegisterTestCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_RegisterTestCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterTestCondition GGS_pic_31__38_RegisterTestCondition_2E_weak::bang_pic_31__38_RegisterTestCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RegisterTestCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_RegisterTestCondition) ;
      result = GGS_pic_31__38_RegisterTestCondition ((cPtr_pic_31__38_RegisterTestCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18RegisterTestCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition_2E_weak ("pic18RegisterTestCondition.weak",
                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RegisterTestCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterTestCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RegisterTestCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RegisterTestCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterTestCondition_2E_weak GGS_pic_31__38_RegisterTestCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterTestCondition_2E_weak result ;
  const GGS_pic_31__38_RegisterTestCondition_2E_weak * p = (const GGS_pic_31__38_RegisterTestCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RegisterTestCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterTestCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_RegisterComparisonCondition_2E_weak::objectCompare (const GGS_pic_31__38_RegisterComparisonCondition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_RegisterComparisonCondition_2E_weak::GGS_pic_31__38_RegisterComparisonCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonCondition_2E_weak & GGS_pic_31__38_RegisterComparisonCondition_2E_weak::operator = (const GGS_pic_31__38_RegisterComparisonCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonCondition_2E_weak::GGS_pic_31__38_RegisterComparisonCondition_2E_weak (const GGS_pic_31__38_RegisterComparisonCondition & inSource) :
GGS_pic_31__38_ConditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonCondition_2E_weak GGS_pic_31__38_RegisterComparisonCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparisonCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonCondition GGS_pic_31__38_RegisterComparisonCondition_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_RegisterComparisonCondition result ;
  if (isValid ()) {
    const cPtr_pic_31__38_RegisterComparisonCondition * p = (cPtr_pic_31__38_RegisterComparisonCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_RegisterComparisonCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonCondition GGS_pic_31__38_RegisterComparisonCondition_2E_weak::bang_pic_31__38_RegisterComparisonCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RegisterComparisonCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_RegisterComparisonCondition) ;
      result = GGS_pic_31__38_RegisterComparisonCondition ((cPtr_pic_31__38_RegisterComparisonCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18RegisterComparisonCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition_2E_weak ("pic18RegisterComparisonCondition.weak",
                                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RegisterComparisonCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RegisterComparisonCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RegisterComparisonCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonCondition_2E_weak GGS_pic_31__38_RegisterComparisonCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparisonCondition_2E_weak result ;
  const GGS_pic_31__38_RegisterComparisonCondition_2E_weak * p = (const GGS_pic_31__38_RegisterComparisonCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RegisterComparisonCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparisonCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::objectCompare (const GGS_pic_31__38_IncDecRegisterInCondition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::GGS_pic_31__38_IncDecRegisterInCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IncDecRegisterInCondition_2E_weak & GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::operator = (const GGS_pic_31__38_IncDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::GGS_pic_31__38_IncDecRegisterInCondition_2E_weak (const GGS_pic_31__38_IncDecRegisterInCondition & inSource) :
GGS_pic_31__38_ConditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IncDecRegisterInCondition_2E_weak GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_IncDecRegisterInCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IncDecRegisterInCondition GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_IncDecRegisterInCondition result ;
  if (isValid ()) {
    const cPtr_pic_31__38_IncDecRegisterInCondition * p = (cPtr_pic_31__38_IncDecRegisterInCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_IncDecRegisterInCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IncDecRegisterInCondition GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::bang_pic_31__38_IncDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_IncDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_IncDecRegisterInCondition) ;
      result = GGS_pic_31__38_IncDecRegisterInCondition ((cPtr_pic_31__38_IncDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18IncDecRegisterInCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition_2E_weak ("pic18IncDecRegisterInCondition.weak",
                                                                                                 & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IncDecRegisterInCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_IncDecRegisterInCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IncDecRegisterInCondition_2E_weak GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_IncDecRegisterInCondition_2E_weak result ;
  const GGS_pic_31__38_IncDecRegisterInCondition_2E_weak * p = (const GGS_pic_31__38_IncDecRegisterInCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_IncDecRegisterInCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IncDecRegisterInCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_BccInStructuredCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_BccInStructuredCondition::objectCompare (const GGS_pic_31__38_BccInStructuredCondition & inOperand) const {
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

GGS_pic_31__38_BccInStructuredCondition::GGS_pic_31__38_BccInStructuredCondition (void) :
GGS_pic_31__38_ConditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition GGS_pic_31__38_BccInStructuredCondition::
init_21__21_ (const GGS_location & in_mConditionLocation,
              const GGS_conditional_5F_branch & in_mCondition,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_BccInStructuredCondition * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_BccInStructuredCondition (inCompiler COMMA_THERE)) ;
  object->pic_31__38_BccInStructuredCondition_init_21__21_ (in_mConditionLocation, in_mCondition, inCompiler) ;
  const GGS_pic_31__38_BccInStructuredCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BccInStructuredCondition::
pic_31__38_BccInStructuredCondition_init_21__21_ (const GGS_location & in_mConditionLocation,
                                                  const GGS_conditional_5F_branch & in_mCondition,
                                                  Compiler * /* inCompiler */) {
  mProperty_mConditionLocation = in_mConditionLocation ;
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition::GGS_pic_31__38_BccInStructuredCondition (const cPtr_pic_31__38_BccInStructuredCondition * inSourcePtr) :
GGS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BccInStructuredCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition GGS_pic_31__38_BccInStructuredCondition::class_func_new (const GGS_location & in_mConditionLocation,
                                                                                                 const GGS_conditional_5F_branch & in_mCondition,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BccInStructuredCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_BccInStructuredCondition (in_mConditionLocation, in_mCondition,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_BccInStructuredCondition::readProperty_mConditionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_BccInStructuredCondition * p = (cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
    return p->mProperty_mConditionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_pic_31__38_BccInStructuredCondition::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_conditional_5F_branch () ;
  }else{
    cPtr_pic_31__38_BccInStructuredCondition * p = (cPtr_pic_31__38_BccInStructuredCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BccInStructuredCondition) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18BccInStructuredCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BccInStructuredCondition::cPtr_pic_31__38_BccInStructuredCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mConditionLocation (),
mProperty_mCondition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BccInStructuredCondition::cPtr_pic_31__38_BccInStructuredCondition (const GGS_location & in_mConditionLocation,
                                                                                    const GGS_conditional_5F_branch & in_mCondition,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mConditionLocation (),
mProperty_mCondition () {
  mProperty_mConditionLocation = in_mConditionLocation ;
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_BccInStructuredCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ;
}

void cPtr_pic_31__38_BccInStructuredCondition::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18BccInStructuredCondition:") ;
  mProperty_mConditionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_BccInStructuredCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_BccInStructuredCondition (mProperty_mConditionLocation, mProperty_mCondition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_BccInStructuredCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mConditionLocation.printNonNullClassInstanceProperties ("mConditionLocation") ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18BccInStructuredCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ("pic18BccInStructuredCondition",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BccInStructuredCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BccInStructuredCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BccInStructuredCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition GGS_pic_31__38_BccInStructuredCondition::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BccInStructuredCondition result ;
  const GGS_pic_31__38_BccInStructuredCondition * p = (const GGS_pic_31__38_BccInStructuredCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BccInStructuredCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BccInStructuredCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_BccInStructuredCondition_2E_weak::objectCompare (const GGS_pic_31__38_BccInStructuredCondition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_BccInStructuredCondition_2E_weak::GGS_pic_31__38_BccInStructuredCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition_2E_weak & GGS_pic_31__38_BccInStructuredCondition_2E_weak::operator = (const GGS_pic_31__38_BccInStructuredCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition_2E_weak::GGS_pic_31__38_BccInStructuredCondition_2E_weak (const GGS_pic_31__38_BccInStructuredCondition & inSource) :
GGS_pic_31__38_ConditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition_2E_weak GGS_pic_31__38_BccInStructuredCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_BccInStructuredCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition GGS_pic_31__38_BccInStructuredCondition_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_BccInStructuredCondition result ;
  if (isValid ()) {
    const cPtr_pic_31__38_BccInStructuredCondition * p = (cPtr_pic_31__38_BccInStructuredCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_BccInStructuredCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition GGS_pic_31__38_BccInStructuredCondition_2E_weak::bang_pic_31__38_BccInStructuredCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_BccInStructuredCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_BccInStructuredCondition) ;
      result = GGS_pic_31__38_BccInStructuredCondition ((cPtr_pic_31__38_BccInStructuredCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18BccInStructuredCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition_2E_weak ("pic18BccInStructuredCondition.weak",
                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BccInStructuredCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BccInStructuredCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BccInStructuredCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BccInStructuredCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition_2E_weak GGS_pic_31__38_BccInStructuredCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BccInStructuredCondition_2E_weak result ;
  const GGS_pic_31__38_BccInStructuredCondition_2E_weak * p = (const GGS_pic_31__38_BccInStructuredCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BccInStructuredCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BccInStructuredCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_NegateCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_NegateCondition::objectCompare (const GGS_pic_31__38_NegateCondition & inOperand) const {
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

GGS_pic_31__38_NegateCondition::GGS_pic_31__38_NegateCondition (void) :
GGS_pic_31__38_ConditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_NegateCondition GGS_pic_31__38_NegateCondition::
init_21_ (const GGS_pic_31__38_ConditionExpression & in_mCondition,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_NegateCondition * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_NegateCondition (inCompiler COMMA_THERE)) ;
  object->pic_31__38_NegateCondition_init_21_ (in_mCondition, inCompiler) ;
  const GGS_pic_31__38_NegateCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_NegateCondition::
pic_31__38_NegateCondition_init_21_ (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                     Compiler * /* inCompiler */) {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_NegateCondition::GGS_pic_31__38_NegateCondition (const cPtr_pic_31__38_NegateCondition * inSourcePtr) :
GGS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_NegateCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_NegateCondition GGS_pic_31__38_NegateCondition::class_func_new (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_NegateCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_NegateCondition (in_mCondition,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression GGS_pic_31__38_NegateCondition::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_NegateCondition * p = (cPtr_pic_31__38_NegateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_NegateCondition) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18NegateCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_NegateCondition::cPtr_pic_31__38_NegateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_NegateCondition::cPtr_pic_31__38_NegateCondition (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_NegateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ;
}

void cPtr_pic_31__38_NegateCondition::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18NegateCondition:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_NegateCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_NegateCondition (mProperty_mCondition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_NegateCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18NegateCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ("pic18NegateCondition",
                                                                               & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_NegateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_NegateCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_NegateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_NegateCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_NegateCondition GGS_pic_31__38_NegateCondition::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_NegateCondition result ;
  const GGS_pic_31__38_NegateCondition * p = (const GGS_pic_31__38_NegateCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_NegateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18NegateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_NegateCondition_2E_weak::objectCompare (const GGS_pic_31__38_NegateCondition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_NegateCondition_2E_weak::GGS_pic_31__38_NegateCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_NegateCondition_2E_weak & GGS_pic_31__38_NegateCondition_2E_weak::operator = (const GGS_pic_31__38_NegateCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_NegateCondition_2E_weak::GGS_pic_31__38_NegateCondition_2E_weak (const GGS_pic_31__38_NegateCondition & inSource) :
GGS_pic_31__38_ConditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_NegateCondition_2E_weak GGS_pic_31__38_NegateCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_NegateCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_NegateCondition GGS_pic_31__38_NegateCondition_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_NegateCondition result ;
  if (isValid ()) {
    const cPtr_pic_31__38_NegateCondition * p = (cPtr_pic_31__38_NegateCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_NegateCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_NegateCondition GGS_pic_31__38_NegateCondition_2E_weak::bang_pic_31__38_NegateCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_NegateCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_NegateCondition) ;
      result = GGS_pic_31__38_NegateCondition ((cPtr_pic_31__38_NegateCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18NegateCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_NegateCondition_2E_weak ("pic18NegateCondition.weak",
                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_NegateCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_NegateCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_NegateCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_NegateCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_NegateCondition_2E_weak GGS_pic_31__38_NegateCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_NegateCondition_2E_weak result ;
  const GGS_pic_31__38_NegateCondition_2E_weak * p = (const GGS_pic_31__38_NegateCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_NegateCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18NegateCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_AndCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_AndCondition::objectCompare (const GGS_pic_31__38_AndCondition & inOperand) const {
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

GGS_pic_31__38_AndCondition::GGS_pic_31__38_AndCondition (void) :
GGS_pic_31__38_ConditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_AndCondition GGS_pic_31__38_AndCondition::
init_21__21_ (const GGS_pic_31__38_ConditionExpression & in_mLeftExpression,
              const GGS_pic_31__38_ConditionExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_AndCondition * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_AndCondition (inCompiler COMMA_THERE)) ;
  object->pic_31__38_AndCondition_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_pic_31__38_AndCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_AndCondition::
pic_31__38_AndCondition_init_21__21_ (const GGS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                      const GGS_pic_31__38_ConditionExpression & in_mRightExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AndCondition::GGS_pic_31__38_AndCondition (const cPtr_pic_31__38_AndCondition * inSourcePtr) :
GGS_pic_31__38_ConditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_AndCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AndCondition GGS_pic_31__38_AndCondition::class_func_new (const GGS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                                                         const GGS_pic_31__38_ConditionExpression & in_mRightExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_AndCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_AndCondition (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression GGS_pic_31__38_AndCondition::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression GGS_pic_31__38_AndCondition::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_AndCondition) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18AndCondition class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_AndCondition::cPtr_pic_31__38_AndCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_AndCondition::cPtr_pic_31__38_AndCondition (const GGS_pic_31__38_ConditionExpression & in_mLeftExpression,
                                                            const GGS_pic_31__38_ConditionExpression & in_mRightExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_ConditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_AndCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;
}

void cPtr_pic_31__38_AndCondition::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18AndCondition:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_AndCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_AndCondition (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_AndCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_ConditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18AndCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition ("pic18AndCondition",
                                                                            & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_AndCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_AndCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_AndCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AndCondition GGS_pic_31__38_AndCondition::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_AndCondition result ;
  const GGS_pic_31__38_AndCondition * p = (const GGS_pic_31__38_AndCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_AndCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AndCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_AndCondition_2E_weak::objectCompare (const GGS_pic_31__38_AndCondition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_AndCondition_2E_weak::GGS_pic_31__38_AndCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AndCondition_2E_weak & GGS_pic_31__38_AndCondition_2E_weak::operator = (const GGS_pic_31__38_AndCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AndCondition_2E_weak::GGS_pic_31__38_AndCondition_2E_weak (const GGS_pic_31__38_AndCondition & inSource) :
GGS_pic_31__38_ConditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AndCondition_2E_weak GGS_pic_31__38_AndCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_AndCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AndCondition GGS_pic_31__38_AndCondition_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_AndCondition result ;
  if (isValid ()) {
    const cPtr_pic_31__38_AndCondition * p = (cPtr_pic_31__38_AndCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_AndCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AndCondition GGS_pic_31__38_AndCondition_2E_weak::bang_pic_31__38_AndCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_AndCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_AndCondition) ;
      result = GGS_pic_31__38_AndCondition ((cPtr_pic_31__38_AndCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18AndCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_AndCondition_2E_weak ("pic18AndCondition.weak",
                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_AndCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_AndCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_AndCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_AndCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AndCondition_2E_weak GGS_pic_31__38_AndCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_AndCondition_2E_weak result ;
  const GGS_pic_31__38_AndCondition_2E_weak * p = (const GGS_pic_31__38_AndCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_AndCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18AndCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::objectCompare (const GGS_pic_31__38_BitTestInStructuredCondition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::GGS_pic_31__38_BitTestInStructuredCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestInStructuredCondition_2E_weak & GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::operator = (const GGS_pic_31__38_BitTestInStructuredCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::GGS_pic_31__38_BitTestInStructuredCondition_2E_weak (const GGS_pic_31__38_BitTestInStructuredCondition & inSource) :
GGS_pic_31__38_ConditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestInStructuredCondition_2E_weak GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_BitTestInStructuredCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestInStructuredCondition GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_BitTestInStructuredCondition result ;
  if (isValid ()) {
    const cPtr_pic_31__38_BitTestInStructuredCondition * p = (cPtr_pic_31__38_BitTestInStructuredCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_BitTestInStructuredCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestInStructuredCondition GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::bang_pic_31__38_BitTestInStructuredCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_BitTestInStructuredCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_BitTestInStructuredCondition) ;
      result = GGS_pic_31__38_BitTestInStructuredCondition ((cPtr_pic_31__38_BitTestInStructuredCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18BitTestInStructuredCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition_2E_weak ("pic18BitTestInStructuredCondition.weak",
                                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_ConditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestInStructuredCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BitTestInStructuredCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestInStructuredCondition_2E_weak GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BitTestInStructuredCondition_2E_weak result ;
  const GGS_pic_31__38_BitTestInStructuredCondition_2E_weak * p = (const GGS_pic_31__38_BitTestInStructuredCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BitTestInStructuredCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestInStructuredCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_structured_5F_if::objectCompare (const GGS_pic_31__38_Instruction_5F_structured_5F_if & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_structured_5F_if::GGS_pic_31__38_Instruction_5F_structured_5F_if (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if GGS_pic_31__38_Instruction_5F_structured_5F_if::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_pic_31__38_ConditionExpression & in_mIfCondition,
                          const GGS_pic_31__38_InstructionList & in_mThenInstructionList,
                          const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                          const GGS_location & in_mEndOfElsePartLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_structured_5F_if * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_structured_5F_if (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_structured_5F_if_init_21__21__21__21__21_ (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::
pic_31__38_Instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                                     const GGS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                                     const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                                     const GGS_location & in_mEndOfElsePartLocation,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIfCondition = in_mIfCondition ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElsePartLocation = in_mEndOfElsePartLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if::GGS_pic_31__38_Instruction_5F_structured_5F_if (const cPtr_pic_31__38_Instruction_5F_structured_5F_if * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if GGS_pic_31__38_Instruction_5F_structured_5F_if::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                               const GGS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                                                                               const GGS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                                                                               const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                                                                               const GGS_location & in_mEndOfElsePartLocation,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_structured_5F_if result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression GGS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mIfCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mIfCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_Instruction_5F_structured_5F_if::readProperty_mEndOfElsePartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
    return p->mProperty_mEndOfElsePartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_structured_if class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_structured_5F_if::cPtr_pic_31__38_Instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mIfCondition (),
mProperty_mThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElsePartLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_structured_5F_if::cPtr_pic_31__38_Instruction_5F_structured_5F_if (const GGS_location & in_mInstructionLocation,
                                                                                                  const GGS_pic_31__38_ConditionExpression & in_mIfCondition,
                                                                                                  const GGS_pic_31__38_InstructionList & in_mThenInstructionList,
                                                                                                  const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                                                                  const GGS_location & in_mEndOfElsePartLocation,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mIfCondition (),
mProperty_mThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElsePartLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIfCondition = in_mIfCondition ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElsePartLocation = in_mEndOfElsePartLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;
}

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_structured_if:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIfCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfElsePartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_structured_5F_if::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_structured_5F_if::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mIfCondition.printNonNullClassInstanceProperties ("mIfCondition") ;
    mProperty_mThenInstructionList.printNonNullClassInstanceProperties ("mThenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElsePartLocation.printNonNullClassInstanceProperties ("mEndOfElsePartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_structured_if generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ("pic18Instruction_structured_if",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if GGS_pic_31__38_Instruction_5F_structured_5F_if::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_structured_5F_if result ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if * p = (const GGS_pic_31__38_Instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak & GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_structured_5F_if & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak (const GGS_pic_31__38_Instruction_5F_structured_5F_if & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_structured_5F_if result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_structured_5F_if * p = (cPtr_pic_31__38_Instruction_5F_structured_5F_if *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_structured_5F_if (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::bang_pic_31__38_Instruction_5F_structured_5F_if_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_structured_5F_if result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_structured_5F_if) ;
      result = GGS_pic_31__38_Instruction_5F_structured_5F_if ((cPtr_pic_31__38_Instruction_5F_structured_5F_if *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_structured_if.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak ("pic18Instruction_structured_if.weak",
                                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_structured_if.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_DoWhilePartList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_DoWhilePartList : public cCollectionElement {
  public: GGS_pic_31__38_DoWhilePartList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_DoWhilePartList (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                         const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                         const GGS_location & in_mEndOfPartLocation
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_DoWhilePartList (const GGS_pic_31__38_DoWhilePartList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_DoWhilePartList::cCollectionElement_pic_31__38_DoWhilePartList (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                              const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                              const GGS_location & in_mEndOfPartLocation
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_DoWhilePartList::cCollectionElement_pic_31__38_DoWhilePartList (const GGS_pic_31__38_DoWhilePartList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCondition, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_DoWhilePartList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_DoWhilePartList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_pic_31__38_DoWhilePartList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_DoWhilePartList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList::GGS_pic_31__38_DoWhilePartList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList::GGS_pic_31__38_DoWhilePartList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_DoWhilePartList * p = (cCollectionElement_pic_31__38_DoWhilePartList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_DoWhilePartList) ;
    const GGS_pic_31__38_DoWhilePartList_2E_element element (p->mObject.mProperty_mCondition, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfPartLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                const GGS_location & in_mEndOfPartLocation
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_DoWhilePartList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_DoWhilePartList (in_mCondition, in_mInstructionList, in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_DoWhilePartList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_pic_31__38_DoWhilePartList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCondition:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCondition.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfPartLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfPartLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_DoWhilePartList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_DoWhilePartList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::plusPlusAssignOperation (const GGS_pic_31__38_DoWhilePartList_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::class_func_listWithValue (const GGS_pic_31__38_ConditionExpression & inOperand0,
                                                                                         const GGS_pic_31__38_InstructionList & inOperand1,
                                                                                         const GGS_location & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_DoWhilePartList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_pic_31__38_DoWhilePartList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::addAssignOperation (const GGS_pic_31__38_ConditionExpression & inOperand0,
                                                         const GGS_pic_31__38_InstructionList & inOperand1,
                                                         const GGS_location & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_DoWhilePartList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_append (const GGS_pic_31__38_ConditionExpression inOperand0,
                                                    const GGS_pic_31__38_InstructionList inOperand1,
                                                    const GGS_location inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_DoWhilePartList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_insertAtIndex (const GGS_pic_31__38_ConditionExpression inOperand0,
                                                           const GGS_pic_31__38_InstructionList inOperand1,
                                                           const GGS_location inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_DoWhilePartList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_removeAtIndex (GGS_pic_31__38_ConditionExpression & outOperand0,
                                                           GGS_pic_31__38_InstructionList & outOperand1,
                                                           GGS_location & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mCondition ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mEndOfPartLocation ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_popFirst (GGS_pic_31__38_ConditionExpression & outOperand0,
                                                      GGS_pic_31__38_InstructionList & outOperand1,
                                                      GGS_location & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCondition ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfPartLocation ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_popLast (GGS_pic_31__38_ConditionExpression & outOperand0,
                                                     GGS_pic_31__38_InstructionList & outOperand1,
                                                     GGS_location & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCondition ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfPartLocation ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::method_first (GGS_pic_31__38_ConditionExpression & outOperand0,
                                                   GGS_pic_31__38_InstructionList & outOperand1,
                                                   GGS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCondition ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mEndOfPartLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::method_last (GGS_pic_31__38_ConditionExpression & outOperand0,
                                                  GGS_pic_31__38_InstructionList & outOperand1,
                                                  GGS_location & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCondition ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mEndOfPartLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::add_operation (const GGS_pic_31__38_DoWhilePartList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_DoWhilePartList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_DoWhilePartList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_DoWhilePartList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_DoWhilePartList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_DoWhilePartList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::plusAssignOperation (const GGS_pic_31__38_DoWhilePartList inList,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_setMConditionAtIndex (GGS_pic_31__38_ConditionExpression inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCondition = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_pic_31__38_ConditionExpression GGS_pic_31__38_DoWhilePartList::getter_mConditionAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_ConditionExpression result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCondition ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_pic_31__38_InstructionList GGS_pic_31__38_DoWhilePartList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::setter_setMEndOfPartLocationAtIndex (GGS_location inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfPartLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_pic_31__38_DoWhilePartList::getter_mEndOfPartLocationAtIndex (const GGS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfPartLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @pic_31__38_DoWhilePartList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_DoWhilePartList::DownEnumerator_pic_31__38_DoWhilePartList (const GGS_pic_31__38_DoWhilePartList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element DownEnumerator_pic_31__38_DoWhilePartList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression DownEnumerator_pic_31__38_DoWhilePartList::current_mCondition (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_DoWhilePartList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_pic_31__38_DoWhilePartList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfPartLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_DoWhilePartList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_DoWhilePartList::UpEnumerator_pic_31__38_DoWhilePartList (const GGS_pic_31__38_DoWhilePartList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList_2E_element UpEnumerator_pic_31__38_DoWhilePartList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression UpEnumerator_pic_31__38_DoWhilePartList::current_mCondition (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_DoWhilePartList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_pic_31__38_DoWhilePartList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfPartLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18DoWhilePartList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ("pic18DoWhilePartList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_DoWhilePartList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_DoWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_DoWhilePartList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_DoWhilePartList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_DoWhilePartList::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_DoWhilePartList result ;
  const GGS_pic_31__38_DoWhilePartList * p = (const GGS_pic_31__38_DoWhilePartList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_DoWhilePartList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18DoWhilePartList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_do_5F_while::objectCompare (const GGS_pic_31__38_Instruction_5F_do_5F_while & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_do_5F_while::GGS_pic_31__38_Instruction_5F_do_5F_while (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while GGS_pic_31__38_Instruction_5F_do_5F_while::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                      const GGS_location & in_mEndOfRepeatedInstructionList,
                      const GGS_pic_31__38_DoWhilePartList & in_mWhilePartList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_do_5F_while * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_do_5F_while (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_do_5F_while_init_21__21__21__21_ (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOfRepeatedInstructionList, in_mWhilePartList, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::
pic_31__38_Instruction_5F_do_5F_while_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                            const GGS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                            const GGS_location & in_mEndOfRepeatedInstructionList,
                                                            const GGS_pic_31__38_DoWhilePartList & in_mWhilePartList,
                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while::GGS_pic_31__38_Instruction_5F_do_5F_while (const cPtr_pic_31__38_Instruction_5F_do_5F_while * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while GGS_pic_31__38_Instruction_5F_do_5F_while::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                     const GGS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                                                                     const GGS_location & in_mEndOfRepeatedInstructionList,
                                                                                                     const GGS_pic_31__38_DoWhilePartList & in_mWhilePartList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_do_5F_while result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_do_5F_while (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOfRepeatedInstructionList, in_mWhilePartList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_Instruction_5F_do_5F_while::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_Instruction_5F_do_5F_while::readProperty_mEndOfRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    return p->mProperty_mEndOfRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList GGS_pic_31__38_Instruction_5F_do_5F_while::readProperty_mWhilePartList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_DoWhilePartList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
    return p->mProperty_mWhilePartList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_do_while class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_do_5F_while::cPtr_pic_31__38_Instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_do_5F_while::cPtr_pic_31__38_Instruction_5F_do_5F_while (const GGS_location & in_mInstructionLocation,
                                                                                        const GGS_pic_31__38_InstructionList & in_mRepeatedInstructionList,
                                                                                        const GGS_location & in_mEndOfRepeatedInstructionList,
                                                                                        const GGS_pic_31__38_DoWhilePartList & in_mWhilePartList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;
}

void cPtr_pic_31__38_Instruction_5F_do_5F_while::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_do_while:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhilePartList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_do_5F_while::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_do_5F_while (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOfRepeatedInstructionList, mProperty_mWhilePartList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_do_5F_while::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mEndOfRepeatedInstructionList.printNonNullClassInstanceProperties ("mEndOfRepeatedInstructionList") ;
    mProperty_mWhilePartList.printNonNullClassInstanceProperties ("mWhilePartList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_do_while generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ("pic18Instruction_do_while",
                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while GGS_pic_31__38_Instruction_5F_do_5F_while::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_do_5F_while result ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while * p = (const GGS_pic_31__38_Instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak & GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_do_5F_while & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak (const GGS_pic_31__38_Instruction_5F_do_5F_while & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_do_5F_while result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_do_5F_while * p = (cPtr_pic_31__38_Instruction_5F_do_5F_while *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_do_5F_while (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::bang_pic_31__38_Instruction_5F_do_5F_while_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_do_5F_while result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_do_5F_while) ;
      result = GGS_pic_31__38_Instruction_5F_do_5F_while ((cPtr_pic_31__38_Instruction_5F_do_5F_while *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_do_while.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while_2E_weak ("pic18Instruction_do_while.weak",
                                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_do_5F_while_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_do_while.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_InterruptDefinitionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_InterruptDefinitionList : public cCollectionElement {
  public: GGS_pic_31__38_InterruptDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_InterruptDefinitionList (const GGS_lstring & in_mInterruptName,
                                                                 const GGS_bool & in_mFastReturn,
                                                                 const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                 const GGS_location & in_mEndOfInterruptLocation
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_InterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_InterruptDefinitionList::cCollectionElement_pic_31__38_InterruptDefinitionList (const GGS_lstring & in_mInterruptName,
                                                                                                              const GGS_bool & in_mFastReturn,
                                                                                                              const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                              const GGS_location & in_mEndOfInterruptLocation
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInterruptName, in_mFastReturn, in_mInstructionList, in_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_InterruptDefinitionList::cCollectionElement_pic_31__38_InterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInterruptName, inElement.mProperty_mFastReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_InterruptDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_InterruptDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_pic_31__38_InterruptDefinitionList (mObject.mProperty_mInterruptName, mObject.mProperty_mFastReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInterruptLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_InterruptDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList::GGS_pic_31__38_InterruptDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList::GGS_pic_31__38_InterruptDefinitionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_InterruptDefinitionList * p = (cCollectionElement_pic_31__38_InterruptDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_InterruptDefinitionList) ;
    const GGS_pic_31__38_InterruptDefinitionList_2E_element element (p->mObject.mProperty_mInterruptName, p->mObject.mProperty_mFastReturn, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfInterruptLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                        const GGS_lstring & in_mInterruptName,
                                                                        const GGS_bool & in_mFastReturn,
                                                                        const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                        const GGS_location & in_mEndOfInterruptLocation
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_InterruptDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_InterruptDefinitionList (in_mInterruptName, in_mFastReturn, in_mInstructionList, in_mEndOfInterruptLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_InterruptDefinitionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_pic_31__38_InterruptDefinitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInterruptName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInterruptName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFastReturn:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFastReturn.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfInterruptLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfInterruptLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::plusPlusAssignOperation (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                         const GGS_bool & inOperand1,
                                                                                                         const GGS_pic_31__38_InstructionList & inOperand2,
                                                                                                         const GGS_location & inOperand3
                                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InterruptDefinitionList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_pic_31__38_InterruptDefinitionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                 const GGS_bool & inOperand1,
                                                                 const GGS_pic_31__38_InstructionList & inOperand2,
                                                                 const GGS_location & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InterruptDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_append (const GGS_lstring inOperand0,
                                                            const GGS_bool inOperand1,
                                                            const GGS_pic_31__38_InstructionList inOperand2,
                                                            const GGS_location inOperand3,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InterruptDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                   const GGS_bool inOperand1,
                                                                   const GGS_pic_31__38_InstructionList inOperand2,
                                                                   const GGS_location inOperand3,
                                                                   const GGS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InterruptDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                   GGS_bool & outOperand1,
                                                                   GGS_pic_31__38_InstructionList & outOperand2,
                                                                   GGS_location & outOperand3,
                                                                   const GGS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInterruptName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFastReturn ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mEndOfInterruptLocation ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                                              GGS_bool & outOperand1,
                                                              GGS_pic_31__38_InstructionList & outOperand2,
                                                              GGS_location & outOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInterruptName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFastReturn ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mEndOfInterruptLocation ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                                             GGS_bool & outOperand1,
                                                             GGS_pic_31__38_InstructionList & outOperand2,
                                                             GGS_location & outOperand3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInterruptName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFastReturn ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mEndOfInterruptLocation ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::method_first (GGS_lstring & outOperand0,
                                                           GGS_bool & outOperand1,
                                                           GGS_pic_31__38_InstructionList & outOperand2,
                                                           GGS_location & outOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInterruptName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFastReturn ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mEndOfInterruptLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::method_last (GGS_lstring & outOperand0,
                                                          GGS_bool & outOperand1,
                                                          GGS_pic_31__38_InstructionList & outOperand2,
                                                          GGS_location & outOperand3,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInterruptName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFastReturn ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mEndOfInterruptLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::add_operation (const GGS_pic_31__38_InterruptDefinitionList & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_InterruptDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::subList (const int32_t inStart,
                                                                                        const int32_t inLength,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InterruptDefinitionList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InterruptDefinitionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InterruptDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InterruptDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::plusAssignOperation (const GGS_pic_31__38_InterruptDefinitionList inList,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_setMInterruptNameAtIndex (GGS_lstring inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInterruptName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_pic_31__38_InterruptDefinitionList::getter_mInterruptNameAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInterruptName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_setMFastReturnAtIndex (GGS_bool inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFastReturn = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_pic_31__38_InterruptDefinitionList::getter_mFastReturnAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFastReturn ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_pic_31__38_InstructionList GGS_pic_31__38_InterruptDefinitionList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::setter_setMEndOfInterruptLocationAtIndex (GGS_location inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInterruptLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_pic_31__38_InterruptDefinitionList::getter_mEndOfInterruptLocationAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfInterruptLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @pic_31__38_InterruptDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_InterruptDefinitionList::DownEnumerator_pic_31__38_InterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element DownEnumerator_pic_31__38_InterruptDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38_InterruptDefinitionList::current_mInterruptName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInterruptName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_pic_31__38_InterruptDefinitionList::current_mFastReturn (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFastReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_InterruptDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_pic_31__38_InterruptDefinitionList::current_mEndOfInterruptLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInterruptLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_InterruptDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_InterruptDefinitionList::UpEnumerator_pic_31__38_InterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList_2E_element UpEnumerator_pic_31__38_InterruptDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38_InterruptDefinitionList::current_mInterruptName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInterruptName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_pic_31__38_InterruptDefinitionList::current_mFastReturn (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFastReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_InterruptDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_pic_31__38_InterruptDefinitionList::current_mEndOfInterruptLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInterruptLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18InterruptDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ("pic18InterruptDefinitionList",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_InterruptDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_InterruptDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_InterruptDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList GGS_pic_31__38_InterruptDefinitionList::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList result ;
  const GGS_pic_31__38_InterruptDefinitionList * p = (const GGS_pic_31__38_InterruptDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_InterruptDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InterruptDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_RoutineDefinitionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_RoutineDefinitionList : public cCollectionElement {
  public: GGS_pic_31__38_RoutineDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_RoutineDefinitionList (const GGS_lstring & in_mRoutineName,
                                                               const GGS_luint & in_mRequiredBank,
                                                               const GGS_luint & in_mReturnedBank,
                                                               const GGS_bool & in_mPreservesBank,
                                                               const GGS_bool & in_mIsNoReturn,
                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                               const GGS_location & in_mEndOfRoutineLocation
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_RoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_RoutineDefinitionList::cCollectionElement_pic_31__38_RoutineDefinitionList (const GGS_lstring & in_mRoutineName,
                                                                                                          const GGS_luint & in_mRequiredBank,
                                                                                                          const GGS_luint & in_mReturnedBank,
                                                                                                          const GGS_bool & in_mPreservesBank,
                                                                                                          const GGS_bool & in_mIsNoReturn,
                                                                                                          const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                          const GGS_location & in_mEndOfRoutineLocation
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_RoutineDefinitionList::cCollectionElement_pic_31__38_RoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mRequiredBank, inElement.mProperty_mReturnedBank, inElement.mProperty_mPreservesBank, inElement.mProperty_mIsNoReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_RoutineDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_RoutineDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_pic_31__38_RoutineDefinitionList (mObject.mProperty_mRoutineName, mObject.mProperty_mRequiredBank, mObject.mProperty_mReturnedBank, mObject.mProperty_mPreservesBank, mObject.mProperty_mIsNoReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_RoutineDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList::GGS_pic_31__38_RoutineDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList::GGS_pic_31__38_RoutineDefinitionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_RoutineDefinitionList * p = (cCollectionElement_pic_31__38_RoutineDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_RoutineDefinitionList) ;
    const GGS_pic_31__38_RoutineDefinitionList_2E_element element (p->mObject.mProperty_mRoutineName, p->mObject.mProperty_mRequiredBank, p->mObject.mProperty_mReturnedBank, p->mObject.mProperty_mPreservesBank, p->mObject.mProperty_mIsNoReturn, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfRoutineLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mRoutineName,
                                                                      const GGS_luint & in_mRequiredBank,
                                                                      const GGS_luint & in_mReturnedBank,
                                                                      const GGS_bool & in_mPreservesBank,
                                                                      const GGS_bool & in_mIsNoReturn,
                                                                      const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                      const GGS_location & in_mEndOfRoutineLocation
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_RoutineDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_RoutineDefinitionList (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_RoutineDefinitionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_pic_31__38_RoutineDefinitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRoutineName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRoutineName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRequiredBank:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRequiredBank.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mReturnedBank:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mReturnedBank.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPreservesBank:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPreservesBank.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIsNoReturn:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIsNoReturn.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfRoutineLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfRoutineLocation.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RoutineDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_RoutineDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::plusPlusAssignOperation (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_luint & inOperand1,
                                                                                                     const GGS_luint & inOperand2,
                                                                                                     const GGS_bool & inOperand3,
                                                                                                     const GGS_bool & inOperand4,
                                                                                                     const GGS_pic_31__38_InstructionList & inOperand5,
                                                                                                     const GGS_location & inOperand6
                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_RoutineDefinitionList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  GGS_pic_31__38_RoutineDefinitionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                               const GGS_luint & inOperand1,
                                                               const GGS_luint & inOperand2,
                                                               const GGS_bool & inOperand3,
                                                               const GGS_bool & inOperand4,
                                                               const GGS_pic_31__38_InstructionList & inOperand5,
                                                               const GGS_location & inOperand6
                                                               COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_RoutineDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_luint inOperand1,
                                                          const GGS_luint inOperand2,
                                                          const GGS_bool inOperand3,
                                                          const GGS_bool inOperand4,
                                                          const GGS_pic_31__38_InstructionList inOperand5,
                                                          const GGS_location inOperand6,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_RoutineDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_luint inOperand1,
                                                                 const GGS_luint inOperand2,
                                                                 const GGS_bool inOperand3,
                                                                 const GGS_bool inOperand4,
                                                                 const GGS_pic_31__38_InstructionList inOperand5,
                                                                 const GGS_location inOperand6,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_RoutineDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_luint & outOperand1,
                                                                 GGS_luint & outOperand2,
                                                                 GGS_bool & outOperand3,
                                                                 GGS_bool & outOperand4,
                                                                 GGS_pic_31__38_InstructionList & outOperand5,
                                                                 GGS_location & outOperand6,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRoutineName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mRequiredBank ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mReturnedBank ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mPreservesBank ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mIsNoReturn ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mEndOfRoutineLocation ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_luint & outOperand1,
                                                            GGS_luint & outOperand2,
                                                            GGS_bool & outOperand3,
                                                            GGS_bool & outOperand4,
                                                            GGS_pic_31__38_InstructionList & outOperand5,
                                                            GGS_location & outOperand6,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mRequiredBank ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mReturnedBank ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mPreservesBank ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mIsNoReturn ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mEndOfRoutineLocation ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_luint & outOperand1,
                                                           GGS_luint & outOperand2,
                                                           GGS_bool & outOperand3,
                                                           GGS_bool & outOperand4,
                                                           GGS_pic_31__38_InstructionList & outOperand5,
                                                           GGS_location & outOperand6,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mRequiredBank ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mReturnedBank ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mPreservesBank ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mIsNoReturn ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mEndOfRoutineLocation ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::method_first (GGS_lstring & outOperand0,
                                                         GGS_luint & outOperand1,
                                                         GGS_luint & outOperand2,
                                                         GGS_bool & outOperand3,
                                                         GGS_bool & outOperand4,
                                                         GGS_pic_31__38_InstructionList & outOperand5,
                                                         GGS_location & outOperand6,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mRequiredBank ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mReturnedBank ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mPreservesBank ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mIsNoReturn ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mEndOfRoutineLocation ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::method_last (GGS_lstring & outOperand0,
                                                        GGS_luint & outOperand1,
                                                        GGS_luint & outOperand2,
                                                        GGS_bool & outOperand3,
                                                        GGS_bool & outOperand4,
                                                        GGS_pic_31__38_InstructionList & outOperand5,
                                                        GGS_location & outOperand6,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mRequiredBank ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mReturnedBank ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mPreservesBank ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mIsNoReturn ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mEndOfRoutineLocation ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::add_operation (const GGS_pic_31__38_RoutineDefinitionList & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_RoutineDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RoutineDefinitionList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RoutineDefinitionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RoutineDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RoutineDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::plusAssignOperation (const GGS_pic_31__38_RoutineDefinitionList inList,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMRoutineNameAtIndex (GGS_lstring inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRoutineName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_pic_31__38_RoutineDefinitionList::getter_mRoutineNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRoutineName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMRequiredBankAtIndex (GGS_luint inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRequiredBank = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_luint GGS_pic_31__38_RoutineDefinitionList::getter_mRequiredBankAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRequiredBank ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMReturnedBankAtIndex (GGS_luint inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mReturnedBank = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_luint GGS_pic_31__38_RoutineDefinitionList::getter_mReturnedBankAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mReturnedBank ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMPreservesBankAtIndex (GGS_bool inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPreservesBank = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_pic_31__38_RoutineDefinitionList::getter_mPreservesBankAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPreservesBank ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMIsNoReturnAtIndex (GGS_bool inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIsNoReturn = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_pic_31__38_RoutineDefinitionList::getter_mIsNoReturnAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIsNoReturn ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_pic_31__38_InstructionList GGS_pic_31__38_RoutineDefinitionList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::setter_setMEndOfRoutineLocationAtIndex (GGS_location inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfRoutineLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_pic_31__38_RoutineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfRoutineLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @pic_31__38_RoutineDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_RoutineDefinitionList::DownEnumerator_pic_31__38_RoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element DownEnumerator_pic_31__38_RoutineDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38_RoutineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_pic_31__38_RoutineDefinitionList::current_mRequiredBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_pic_31__38_RoutineDefinitionList::current_mReturnedBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_pic_31__38_RoutineDefinitionList::current_mPreservesBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_pic_31__38_RoutineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_RoutineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_pic_31__38_RoutineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfRoutineLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_RoutineDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_RoutineDefinitionList::UpEnumerator_pic_31__38_RoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList_2E_element UpEnumerator_pic_31__38_RoutineDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38_RoutineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_pic_31__38_RoutineDefinitionList::current_mRequiredBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_pic_31__38_RoutineDefinitionList::current_mReturnedBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_pic_31__38_RoutineDefinitionList::current_mPreservesBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_pic_31__38_RoutineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_RoutineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_pic_31__38_RoutineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfRoutineLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18RoutineDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ("pic18RoutineDefinitionList",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RoutineDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RoutineDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RoutineDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList GGS_pic_31__38_RoutineDefinitionList::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RoutineDefinitionList result ;
  const GGS_pic_31__38_RoutineDefinitionList * p = (const GGS_pic_31__38_RoutineDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RoutineDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RoutineDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_MacroDefinitionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_MacroDefinitionList : public cCollectionElement {
  public: GGS_pic_31__38_MacroDefinitionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_MacroDefinitionList (const GGS_lstring & in_mMacroName,
                                                             const GGS_lstringlist & in_mConstantNameList,
                                                             const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_MacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_MacroDefinitionList::cCollectionElement_pic_31__38_MacroDefinitionList (const GGS_lstring & in_mMacroName,
                                                                                                      const GGS_lstringlist & in_mConstantNameList,
                                                                                                      const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMacroName, in_mConstantNameList, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_MacroDefinitionList::cCollectionElement_pic_31__38_MacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMacroName, inElement.mProperty_mConstantNameList, inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_MacroDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_MacroDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_pic_31__38_MacroDefinitionList (mObject.mProperty_mMacroName, mObject.mProperty_mConstantNameList, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_MacroDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList::GGS_pic_31__38_MacroDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList::GGS_pic_31__38_MacroDefinitionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_MacroDefinitionList * p = (cCollectionElement_pic_31__38_MacroDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_MacroDefinitionList) ;
    const GGS_pic_31__38_MacroDefinitionList_2E_element element (p->mObject.mProperty_mMacroName, p->mObject.mProperty_mConstantNameList, p->mObject.mProperty_mInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_lstring & in_mMacroName,
                                                                    const GGS_lstringlist & in_mConstantNameList,
                                                                    const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_MacroDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_MacroDefinitionList (in_mMacroName, in_mConstantNameList, in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_MacroDefinitionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_pic_31__38_MacroDefinitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mMacroName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mMacroName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mConstantNameList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mConstantNameList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_MacroDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_MacroDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::plusPlusAssignOperation (const GGS_pic_31__38_MacroDefinitionList_2E_element & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                 const GGS_lstringlist & inOperand1,
                                                                                                 const GGS_pic_31__38_InstructionList & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_MacroDefinitionList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_pic_31__38_MacroDefinitionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                             const GGS_lstringlist & inOperand1,
                                                             const GGS_pic_31__38_InstructionList & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_MacroDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_append (const GGS_lstring inOperand0,
                                                        const GGS_lstringlist inOperand1,
                                                        const GGS_pic_31__38_InstructionList inOperand2,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_MacroDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                               const GGS_lstringlist inOperand1,
                                                               const GGS_pic_31__38_InstructionList inOperand2,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_MacroDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                               GGS_lstringlist & outOperand1,
                                                               GGS_pic_31__38_InstructionList & outOperand2,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mMacroName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mConstantNameList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                                          GGS_lstringlist & outOperand1,
                                                          GGS_pic_31__38_InstructionList & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mMacroName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mConstantNameList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                                         GGS_lstringlist & outOperand1,
                                                         GGS_pic_31__38_InstructionList & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mMacroName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mConstantNameList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::method_first (GGS_lstring & outOperand0,
                                                       GGS_lstringlist & outOperand1,
                                                       GGS_pic_31__38_InstructionList & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mMacroName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mConstantNameList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::method_last (GGS_lstring & outOperand0,
                                                      GGS_lstringlist & outOperand1,
                                                      GGS_pic_31__38_InstructionList & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mMacroName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mConstantNameList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::add_operation (const GGS_pic_31__38_MacroDefinitionList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::subList (const int32_t inStart,
                                                                                const int32_t inLength,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroDefinitionList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroDefinitionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::plusAssignOperation (const GGS_pic_31__38_MacroDefinitionList inList,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_setMMacroNameAtIndex (GGS_lstring inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mMacroName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_pic_31__38_MacroDefinitionList::getter_mMacroNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mMacroName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_setMConstantNameListAtIndex (GGS_lstringlist inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mConstantNameList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstringlist GGS_pic_31__38_MacroDefinitionList::getter_mConstantNameListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mConstantNameList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_pic_31__38_InstructionList GGS_pic_31__38_MacroDefinitionList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @pic_31__38_MacroDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_MacroDefinitionList::DownEnumerator_pic_31__38_MacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element DownEnumerator_pic_31__38_MacroDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38_MacroDefinitionList::current_mMacroName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMacroName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_pic_31__38_MacroDefinitionList::current_mConstantNameList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mConstantNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_MacroDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_MacroDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_MacroDefinitionList::UpEnumerator_pic_31__38_MacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList_2E_element UpEnumerator_pic_31__38_MacroDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38_MacroDefinitionList::current_mMacroName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMacroName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_pic_31__38_MacroDefinitionList::current_mConstantNameList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mConstantNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_MacroDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18MacroDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ("pic18MacroDefinitionList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_MacroDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_MacroDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_MacroDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList GGS_pic_31__38_MacroDefinitionList::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroDefinitionList result ;
  const GGS_pic_31__38_MacroDefinitionList * p = (const GGS_pic_31__38_MacroDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_MacroDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @pic_31__38_MacroMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap::GGS_pic_31__38_MacroMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap::~ GGS_pic_31__38_MacroMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap::GGS_pic_31__38_MacroMap (const GGS_pic_31__38_MacroMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap & GGS_pic_31__38_MacroMap::operator = (const GGS_pic_31__38_MacroMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap GGS_pic_31__38_MacroMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap GGS_pic_31__38_MacroMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_MacroMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_MacroMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_MacroMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_MacroMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_MacroMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_pic_31__38_MacroMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_MacroMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38_MacroMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::performInsert (const GGS_pic_31__38_MacroMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38_MacroMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element>
GGS_pic_31__38_MacroMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_pic_31__38_MacroMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element>>
GGS_pic_31__38_MacroMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_pic_31__38_MacroMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element_3F_ GGS_pic_31__38_MacroMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_pic_31__38_MacroMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_pic_31__38_MacroMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mConstantNameList = info->mProperty_mConstantNameList ;
      element.mProperty_mInstructionList = info->mProperty_mInstructionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap GGS_pic_31__38_MacroMap::class_func_mapWithMapToOverride (const GGS_pic_31__38_MacroMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38_MacroMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap GGS_pic_31__38_MacroMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_MacroMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_lstringlist inArgument0,
                                                GGS_pic_31__38_InstructionList inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_MacroMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' macro is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_lstringlist & outArgument0,
                                                GGS_pic_31__38_InstructionList & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' macro" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mConstantNameList ;
    outArgument1 = info->mProperty_mInstructionList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_pic_31__38_MacroMap::getter_mConstantNameListForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mConstantNameList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_MacroMap::getter_mInstructionListForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInstructionList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::setter_setMConstantNameListForKey (GGS_lstringlist inValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38_MacroMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mConstantNameList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::setter_setMInstructionListForKey (GGS_pic_31__38_InstructionList inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38_MacroMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInstructionList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_pic_31__38_MacroMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mConstantNameList:") ;
    inArray (i COMMA_HERE)->mProperty_mConstantNameList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInstructionList:") ;
    inArray (i COMMA_HERE)->mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38_MacroMap_2E_element>> array = sortedInfoArray () ;
    GGS_pic_31__38_MacroMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_pic_31__38_MacroMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_pic_31__38_MacroMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @pic_31__38_MacroMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_MacroMap::DownEnumerator_pic_31__38_MacroMap (const GGS_pic_31__38_MacroMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element DownEnumerator_pic_31__38_MacroMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38_MacroMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_pic_31__38_MacroMap::current_mConstantNameList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConstantNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_MacroMap::current_mInstructionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @pic_31__38_MacroMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_MacroMap::UpEnumerator_pic_31__38_MacroMap (const GGS_pic_31__38_MacroMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap_2E_element UpEnumerator_pic_31__38_MacroMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38_MacroMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_pic_31__38_MacroMap::current_mConstantNameList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConstantNameList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_MacroMap::current_mInstructionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstructionList ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18MacroMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_MacroMap ("pic18MacroMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_MacroMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_MacroMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_MacroMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_MacroMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroMap GGS_pic_31__38_MacroMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_MacroMap result ;
  const GGS_pic_31__38_MacroMap * p = (const GGS_pic_31__38_MacroMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_MacroMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18MacroMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@routineDeclarationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_routineDeclarationList : public cCollectionElement {
  public: GGS_routineDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_routineDeclarationList (const GGS_lstring & in_mRoutineName,
                                                     const GGS_luint & in_mRequiredBank,
                                                     const GGS_luint & in_mReturnedBank,
                                                     const GGS_bool & in_mPreservesBank,
                                                     const GGS_bool & in_mIsNoReturn
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_routineDeclarationList (const GGS_routineDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineDeclarationList::cCollectionElement_routineDeclarationList (const GGS_lstring & in_mRoutineName,
                                                                                      const GGS_luint & in_mRequiredBank,
                                                                                      const GGS_luint & in_mReturnedBank,
                                                                                      const GGS_bool & in_mPreservesBank,
                                                                                      const GGS_bool & in_mIsNoReturn
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_routineDeclarationList::cCollectionElement_routineDeclarationList (const GGS_routineDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mRequiredBank, inElement.mProperty_mReturnedBank, inElement.mProperty_mPreservesBank, inElement.mProperty_mIsNoReturn) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_routineDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_routineDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_routineDeclarationList (mObject.mProperty_mRoutineName, mObject.mProperty_mRequiredBank, mObject.mProperty_mReturnedBank, mObject.mProperty_mPreservesBank, mObject.mProperty_mIsNoReturn COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @routineDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList::GGS_routineDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList::GGS_routineDeclarationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_routineDeclarationList * p = (cCollectionElement_routineDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_routineDeclarationList) ;
    const GGS_routineDeclarationList_2E_element element (p->mObject.mProperty_mRoutineName, p->mObject.mProperty_mRequiredBank, p->mObject.mProperty_mReturnedBank, p->mObject.mProperty_mPreservesBank, p->mObject.mProperty_mIsNoReturn) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_lstring & in_mRoutineName,
                                                            const GGS_luint & in_mRequiredBank,
                                                            const GGS_luint & in_mReturnedBank,
                                                            const GGS_bool & in_mPreservesBank,
                                                            const GGS_bool & in_mIsNoReturn
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_routineDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_routineDeclarationList (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_routineDeclarationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_routineDeclarationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRoutineName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRoutineName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRequiredBank:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRequiredBank.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mReturnedBank:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mReturnedBank.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPreservesBank:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPreservesBank.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIsNoReturn:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIsNoReturn.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_routineDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_routineDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::plusPlusAssignOperation (const GGS_routineDeclarationList_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                 const GGS_luint & inOperand1,
                                                                                 const GGS_luint & inOperand2,
                                                                                 const GGS_bool & inOperand3,
                                                                                 const GGS_bool & inOperand4
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_routineDeclarationList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_routineDeclarationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                     const GGS_luint & inOperand1,
                                                     const GGS_luint & inOperand2,
                                                     const GGS_bool & inOperand3,
                                                     const GGS_bool & inOperand4
                                                     COMMA_LOCATION_ARGS) {
  const GGS_routineDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_append (const GGS_lstring inOperand0,
                                                const GGS_luint inOperand1,
                                                const GGS_luint inOperand2,
                                                const GGS_bool inOperand3,
                                                const GGS_bool inOperand4,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_routineDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                       const GGS_luint inOperand1,
                                                       const GGS_luint inOperand2,
                                                       const GGS_bool inOperand3,
                                                       const GGS_bool inOperand4,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_routineDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                       GGS_luint & outOperand1,
                                                       GGS_luint & outOperand2,
                                                       GGS_bool & outOperand3,
                                                       GGS_bool & outOperand4,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRoutineName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mRequiredBank ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mReturnedBank ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mPreservesBank ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mIsNoReturn ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_popFirst (GGS_lstring & outOperand0,
                                                  GGS_luint & outOperand1,
                                                  GGS_luint & outOperand2,
                                                  GGS_bool & outOperand3,
                                                  GGS_bool & outOperand4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mRequiredBank ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mReturnedBank ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mPreservesBank ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mIsNoReturn ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_popLast (GGS_lstring & outOperand0,
                                                 GGS_luint & outOperand1,
                                                 GGS_luint & outOperand2,
                                                 GGS_bool & outOperand3,
                                                 GGS_bool & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mRequiredBank ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mReturnedBank ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mPreservesBank ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mIsNoReturn ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::method_first (GGS_lstring & outOperand0,
                                               GGS_luint & outOperand1,
                                               GGS_luint & outOperand2,
                                               GGS_bool & outOperand3,
                                               GGS_bool & outOperand4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mRequiredBank ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mReturnedBank ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mPreservesBank ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mIsNoReturn ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::method_last (GGS_lstring & outOperand0,
                                              GGS_luint & outOperand1,
                                              GGS_luint & outOperand2,
                                              GGS_bool & outOperand3,
                                              GGS_bool & outOperand4,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mRequiredBank ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mReturnedBank ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mPreservesBank ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mIsNoReturn ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::add_operation (const GGS_routineDeclarationList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_routineDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineDeclarationList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineDeclarationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_routineDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_routineDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::plusAssignOperation (const GGS_routineDeclarationList inList,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_setMRoutineNameAtIndex (GGS_lstring inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRoutineName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_routineDeclarationList::getter_mRoutineNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRoutineName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_setMRequiredBankAtIndex (GGS_luint inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRequiredBank = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_luint GGS_routineDeclarationList::getter_mRequiredBankAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRequiredBank ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_setMReturnedBankAtIndex (GGS_luint inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mReturnedBank = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_luint GGS_routineDeclarationList::getter_mReturnedBankAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mReturnedBank ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_setMPreservesBankAtIndex (GGS_bool inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPreservesBank = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_routineDeclarationList::getter_mPreservesBankAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPreservesBank ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::setter_setMIsNoReturnAtIndex (GGS_bool inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIsNoReturn = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_routineDeclarationList::getter_mIsNoReturnAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIsNoReturn ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @routineDeclarationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_routineDeclarationList::DownEnumerator_routineDeclarationList (const GGS_routineDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element DownEnumerator_routineDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_routineDeclarationList::current_mRoutineName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_routineDeclarationList::current_mRequiredBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_routineDeclarationList::current_mReturnedBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineDeclarationList::current_mPreservesBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_routineDeclarationList::current_mIsNoReturn (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsNoReturn ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @routineDeclarationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_routineDeclarationList::UpEnumerator_routineDeclarationList (const GGS_routineDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList_2E_element UpEnumerator_routineDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_routineDeclarationList::current_mRoutineName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_routineDeclarationList::current_mRequiredBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_routineDeclarationList::current_mReturnedBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineDeclarationList::current_mPreservesBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_routineDeclarationList::current_mIsNoReturn (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsNoReturn ;
}




//--------------------------------------------------------------------------------------------------
//     @routineDeclarationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineDeclarationList ("routineDeclarationList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList GGS_routineDeclarationList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_routineDeclarationList result ;
  const GGS_routineDeclarationList * p = (const GGS_routineDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum programKind
//--------------------------------------------------------------------------------------------------

GGS_programKind::GGS_programKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_programKind GGS_programKind::class_func_regularProgram (UNUSED_LOCATION_ARGS) {
  GGS_programKind result ;
  result.mEnum = Enumeration::enum_regularProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programKind GGS_programKind::class_func_bootloaderProgram (UNUSED_LOCATION_ARGS) {
  GGS_programKind result ;
  result.mEnum = Enumeration::enum_bootloaderProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programKind GGS_programKind::class_func_userProgram (UNUSED_LOCATION_ARGS) {
  GGS_programKind result ;
  result.mEnum = Enumeration::enum_userProgram ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_programKind [4] = {
  "(not built)",
  "regularProgram",
  "bootloaderProgram",
  "userProgram"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_programKind::getter_isRegularProgram (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regularProgram == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_programKind::getter_isBootloaderProgram (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bootloaderProgram == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_programKind::getter_isUserProgram (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_userProgram == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programKind::description (String & ioString,
                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @programKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_programKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_programKind::objectCompare (const GGS_programKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @programKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programKind ("programKind",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programKind GGS_programKind::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_programKind result ;
  const GGS_programKind * p = (const GGS_programKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@dataList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_dataList : public cCollectionElement {
  public: GGS_dataList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_dataList (const GGS_lstring & in_mDataName,
                                       const GGS_immediatExpressionList & in_mValueList,
                                       const GGS_bool & in_mIsByteList
                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_dataList (const GGS_dataList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_dataList::cCollectionElement_dataList (const GGS_lstring & in_mDataName,
                                                          const GGS_immediatExpressionList & in_mValueList,
                                                          const GGS_bool & in_mIsByteList
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDataName, in_mValueList, in_mIsByteList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_dataList::cCollectionElement_dataList (const GGS_dataList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDataName, inElement.mProperty_mValueList, inElement.mProperty_mIsByteList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_dataList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_dataList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_dataList (mObject.mProperty_mDataName, mObject.mProperty_mValueList, mObject.mProperty_mIsByteList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @dataList
//--------------------------------------------------------------------------------------------------

GGS_dataList::GGS_dataList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList::GGS_dataList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_dataList * p = (cCollectionElement_dataList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_dataList) ;
    const GGS_dataList_2E_element element (p->mObject.mProperty_mDataName, p->mObject.mProperty_mValueList, p->mObject.mProperty_mIsByteList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                              const GGS_lstring & in_mDataName,
                                              const GGS_immediatExpressionList & in_mValueList,
                                              const GGS_bool & in_mIsByteList
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_dataList * p = nullptr ;
  macroMyNew (p, cCollectionElement_dataList (in_mDataName, in_mValueList, in_mIsByteList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_dataList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_dataList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDataName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDataName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValueList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValueList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mIsByteList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mIsByteList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_dataList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_dataList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::plusPlusAssignOperation (const GGS_dataList_2E_element & inValue
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                     const GGS_immediatExpressionList & inOperand1,
                                                     const GGS_bool & inOperand2
                                                     COMMA_LOCATION_ARGS) {
  const GGS_dataList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_dataList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::addAssignOperation (const GGS_lstring & inOperand0,
                                       const GGS_immediatExpressionList & inOperand1,
                                       const GGS_bool & inOperand2
                                       COMMA_LOCATION_ARGS) {
  const GGS_dataList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_append (const GGS_lstring inOperand0,
                                  const GGS_immediatExpressionList inOperand1,
                                  const GGS_bool inOperand2,
                                  Compiler * /* inCompiler */
                                  COMMA_LOCATION_ARGS) {
  const GGS_dataList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                         const GGS_immediatExpressionList inOperand1,
                                         const GGS_bool inOperand2,
                                         const GGS_uint inInsertionIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const GGS_dataList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                         GGS_immediatExpressionList & outOperand1,
                                         GGS_bool & outOperand2,
                                         const GGS_uint inRemoveIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDataName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValueList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mIsByteList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_popFirst (GGS_lstring & outOperand0,
                                    GGS_immediatExpressionList & outOperand1,
                                    GGS_bool & outOperand2,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDataName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValueList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mIsByteList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_popLast (GGS_lstring & outOperand0,
                                   GGS_immediatExpressionList & outOperand1,
                                   GGS_bool & outOperand2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDataName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValueList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mIsByteList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::method_first (GGS_lstring & outOperand0,
                                 GGS_immediatExpressionList & outOperand1,
                                 GGS_bool & outOperand2,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDataName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValueList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mIsByteList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::method_last (GGS_lstring & outOperand0,
                                GGS_immediatExpressionList & outOperand1,
                                GGS_bool & outOperand2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDataName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValueList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mIsByteList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::add_operation (const GGS_dataList & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_dataList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::subList (const int32_t inStart,
                                    const int32_t inLength,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  GGS_dataList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::getter_subListWithRange (const GGS_range & inRange,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_dataList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_dataList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::getter_subListToIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_dataList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::plusAssignOperation (const GGS_dataList inList,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_setMDataNameAtIndex (GGS_lstring inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDataName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_dataList::getter_mDataNameAtIndex (const GGS_uint & inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDataName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_setMValueListAtIndex (GGS_immediatExpressionList inOperand,
                                                GGS_uint inIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValueList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_immediatExpressionList GGS_dataList::getter_mValueListAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_immediatExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValueList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_dataList::setter_setMIsByteListAtIndex (GGS_bool inOperand,
                                                 GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mIsByteList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_dataList::getter_mIsByteListAtIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mIsByteList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @dataList
//--------------------------------------------------------------------------------------------------

DownEnumerator_dataList::DownEnumerator_dataList (const GGS_dataList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element DownEnumerator_dataList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_dataList::current_mDataName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDataName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList DownEnumerator_dataList::current_mValueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_dataList::current_mIsByteList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsByteList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @dataList
//--------------------------------------------------------------------------------------------------

UpEnumerator_dataList::UpEnumerator_dataList (const GGS_dataList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList_2E_element UpEnumerator_dataList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_dataList::current_mDataName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDataName ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList UpEnumerator_dataList::current_mValueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValueList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_dataList::current_mIsByteList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsByteList ;
}




//--------------------------------------------------------------------------------------------------
//     @dataList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dataList ("dataList",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dataList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dataList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dataList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataList GGS_dataList::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_dataList result ;
  const GGS_dataList * p = (const GGS_dataList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dataList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@checkpicList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_checkpicList : public cCollectionElement {
  public: GGS_checkpicList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_checkpicList (const GGS_location & in_mErrorLocation,
                                           const GGS_lstringlist & in_mValueList
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_checkpicList (const GGS_checkpicList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_checkpicList::cCollectionElement_checkpicList (const GGS_location & in_mErrorLocation,
                                                                  const GGS_lstringlist & in_mValueList
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mErrorLocation, in_mValueList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_checkpicList::cCollectionElement_checkpicList (const GGS_checkpicList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mErrorLocation, inElement.mProperty_mValueList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_checkpicList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_checkpicList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_checkpicList (mObject.mProperty_mErrorLocation, mObject.mProperty_mValueList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @checkpicList
//--------------------------------------------------------------------------------------------------

GGS_checkpicList::GGS_checkpicList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList::GGS_checkpicList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_checkpicList * p = (cCollectionElement_checkpicList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_checkpicList) ;
    const GGS_checkpicList_2E_element element (p->mObject.mProperty_mErrorLocation, p->mObject.mProperty_mValueList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_location & in_mErrorLocation,
                                                  const GGS_lstringlist & in_mValueList
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_checkpicList * p = nullptr ;
  macroMyNew (p, cCollectionElement_checkpicList (in_mErrorLocation, in_mValueList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_checkpicList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_checkpicList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mErrorLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mErrorLocation.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValueList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValueList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_checkpicList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_checkpicList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::plusPlusAssignOperation (const GGS_checkpicList_2E_element & inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::class_func_listWithValue (const GGS_location & inOperand0,
                                                             const GGS_lstringlist & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  const GGS_checkpicList_2E_element element (inOperand0, inOperand1) ;
  GGS_checkpicList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::addAssignOperation (const GGS_location & inOperand0,
                                           const GGS_lstringlist & inOperand1
                                           COMMA_LOCATION_ARGS) {
  const GGS_checkpicList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_append (const GGS_location inOperand0,
                                      const GGS_lstringlist inOperand1,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_checkpicList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_insertAtIndex (const GGS_location inOperand0,
                                             const GGS_lstringlist inOperand1,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_checkpicList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_removeAtIndex (GGS_location & outOperand0,
                                             GGS_lstringlist & outOperand1,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mErrorLocation ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValueList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_popFirst (GGS_location & outOperand0,
                                        GGS_lstringlist & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mErrorLocation ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValueList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_popLast (GGS_location & outOperand0,
                                       GGS_lstringlist & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mErrorLocation ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValueList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::method_first (GGS_location & outOperand0,
                                     GGS_lstringlist & outOperand1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mErrorLocation ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValueList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::method_last (GGS_location & outOperand0,
                                    GGS_lstringlist & outOperand1,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mErrorLocation ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValueList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::add_operation (const GGS_checkpicList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_checkpicList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_checkpicList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_checkpicList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_checkpicList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_checkpicList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::plusAssignOperation (const GGS_checkpicList inList,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_setMErrorLocationAtIndex (GGS_location inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mErrorLocation = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_location GGS_checkpicList::getter_mErrorLocationAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mErrorLocation ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::setter_setMValueListAtIndex (GGS_lstringlist inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValueList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstringlist GGS_checkpicList::getter_mValueListAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValueList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @checkpicList
//--------------------------------------------------------------------------------------------------

DownEnumerator_checkpicList::DownEnumerator_checkpicList (const GGS_checkpicList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element DownEnumerator_checkpicList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_checkpicList::current_mErrorLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_checkpicList::current_mValueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValueList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @checkpicList
//--------------------------------------------------------------------------------------------------

UpEnumerator_checkpicList::UpEnumerator_checkpicList (const GGS_checkpicList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList_2E_element UpEnumerator_checkpicList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_checkpicList::current_mErrorLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mErrorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_checkpicList::current_mValueList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValueList ;
}




//--------------------------------------------------------------------------------------------------
//     @checkpicList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_checkpicList ("checkpicList",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_checkpicList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_checkpicList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_checkpicList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_checkpicList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList GGS_checkpicList::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_checkpicList result ;
  const GGS_checkpicList * p = (const GGS_checkpicList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_checkpicList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("checkpicList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @baseline_5F_symbolTable
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable::GGS_baseline_5F_symbolTable (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable::~ GGS_baseline_5F_symbolTable (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable::GGS_baseline_5F_symbolTable (const GGS_baseline_5F_symbolTable & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable & GGS_baseline_5F_symbolTable::operator = (const GGS_baseline_5F_symbolTable & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable GGS_baseline_5F_symbolTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable GGS_baseline_5F_symbolTable::class_func_emptyMap (LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_symbolTable::getter_hasKey (const GGS_string & inKey
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_symbolTable::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                            const GGS_uint & inLevel
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_symbolTable::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_symbolTable::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_symbolTable::getter_locationForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_baseline_5F_symbolTable::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_symbolTable::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_symbolTable_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::performInsert (const GGS_baseline_5F_symbolTable_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_baseline_5F_symbolTable_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>
GGS_baseline_5F_symbolTable::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_baseline_5F_symbolTable::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>>
GGS_baseline_5F_symbolTable::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_baseline_5F_symbolTable::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element_3F_ GGS_baseline_5F_symbolTable
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_symbolTable_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_baseline_5F_symbolTable_2E_element_3F_::init_nil () ;
    }else{
      GGS_baseline_5F_symbolTable_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRoutineAddress = info->mProperty_mRoutineAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable GGS_baseline_5F_symbolTable::class_func_mapWithMapToOverride (const GGS_baseline_5F_symbolTable & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_symbolTable_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable GGS_baseline_5F_symbolTable::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_symbolTable result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::setter_insertKey (GGS_lstring inLKey,
                                                    GGS_uint inArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_symbolTable_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::method_searchKey (GGS_lstring inLKey,
                                                    GGS_uint & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' label is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mRoutineAddress ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_symbolTable::getter_mRoutineAddressForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRoutineAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::setter_setMRoutineAddressForKey (GGS_uint inValue,
                                                                   GGS_string inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_baseline_5F_symbolTable_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRoutineAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_baseline_5F_symbolTable_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRoutineAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mRoutineAddress.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_symbolTable::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_symbolTable_2E_element>> array = sortedInfoArray () ;
    GGS_baseline_5F_symbolTable_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_symbolTable_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_baseline_5F_symbolTable_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @baseline_5F_symbolTable
//--------------------------------------------------------------------------------------------------

DownEnumerator_baseline_5F_symbolTable::DownEnumerator_baseline_5F_symbolTable (const GGS_baseline_5F_symbolTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element DownEnumerator_baseline_5F_symbolTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_baseline_5F_symbolTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_baseline_5F_symbolTable::current_mRoutineAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineAddress ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @baseline_5F_symbolTable
//--------------------------------------------------------------------------------------------------

UpEnumerator_baseline_5F_symbolTable::UpEnumerator_baseline_5F_symbolTable (const GGS_baseline_5F_symbolTable & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable_2E_element UpEnumerator_baseline_5F_symbolTable::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_baseline_5F_symbolTable::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_baseline_5F_symbolTable::current_mRoutineAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRoutineAddress ;
}


//--------------------------------------------------------------------------------------------------
//     @baseline_symbolTable generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable ("baseline_symbolTable",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_symbolTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_symbolTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_symbolTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_symbolTable GGS_baseline_5F_symbolTable::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_symbolTable result ;
  const GGS_baseline_5F_symbolTable * p = (const GGS_baseline_5F_symbolTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_symbolTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_assembly_instruction enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                           GGS_uint & /* ioArgument_ioWordAddress */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                              GGS_baseline_5F_symbolTable & io_ioRoutineSymbolTable,
                                              GGS_uint & io_ioWordAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    inObject->method_enterLabelAtAddress (io_ioRoutineSymbolTable, io_ioWordAddress, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_assembly_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                      const GGS_baseline_5F_symbolTable constin_inRoutineSymbolTable,
                                                      GGS_string & io_ioListFileContents,
                                                      GGS_uint & io_ioWordAddress,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    inObject->method_generateBinaryCodeAtAddress (constin_inRoutineSymbolTable, io_ioListFileContents, io_ioWordAddress, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@declarationInRam handleDeclaration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_handleDeclaration (cPtr_declarationInRam * inObject,
                                            const GGS_constantMap constin_inConstantMap,
                                            GGS_stringset & io_ioUsedRegisters,
                                            GGS_ramBankTable & io_ioRamBank,
                                            GGS_registerTable & io_ioRegisterTable,
                                            const GGS_lstring constin_inCurrentRamBank,
                                            GGS_declaredByteMap & io_ioDeclaredByteMap,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_declarationInRam) ;
    inObject->method_handleDeclaration (constin_inConstantMap, io_ioUsedRegisters, io_ioRamBank, io_ioRegisterTable, constin_inCurrentRamBank, io_ioDeclaredByteMap, inCompiler COMMA_THERE) ;
  }
}


//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 23)) ;
  GGS_lstring var_programName_757 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 24)) ;
  GGS_lstring var_deviceNameOrBootloaderReference_784 ;
  GGS_programKind var_programKind_835 ;
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
    var_programKind_835 = GGS_programKind::class_func_regularProgram (SOURCE_FILE ("pic18_start_symbol.galgas", 28)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 30)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 31)) ;
    var_programKind_835 = GGS_programKind::class_func_bootloaderProgram (SOURCE_FILE ("pic18_start_symbol.galgas", 32)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 34)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 35)) ;
    var_programKind_835 = GGS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_start_symbol.galgas", 36)) ;
  } break ;
  default:
    break ;
  }
  var_deviceNameOrBootloaderReference_784 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 39)) ;
  GGS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_1140 = GGS_pic_31__38_InterruptDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_1204 = GGS_pic_31__38_RoutineDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_pic_31__38_MacroDefinitionList var_macroDefinitionList_1290 = GGS_pic_31__38_MacroDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRoutineList_1322 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_ramDefinitionList var_ramDefinitionList_1363 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRegisterList_1410 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_configDefinitionList var_configDefinitionList_1452 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_constantDefinitionList var_constantDefinitionList_1505 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_dataList var_dataList_1562 = GGS_dataList::init (inCompiler COMMA_HERE) ;
  GGS_checkpicList var_checkpicList_1592 = GGS_checkpicList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_inlinedRoutineList_1629 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_bool var_needsComputedGoto_32__1677 = GGS_bool (false) ;
  GGS_bool var_needsComputedGoto_34__1716 = GGS_bool (false) ;
  nt_body_ (var_interruptDefinitionList_1140, var_routineDefinitionList_1204, var_macroDefinitionList_1290, var_unusedRoutineList_1322, var_inlinedRoutineList_1629, var_ramDefinitionList_1363, var_unusedRegisterList_1410, var_configDefinitionList_1452, var_constantDefinitionList_1505, var_checkpicList_1592, var_dataList_1562, var_needsComputedGoto_32__1677, var_needsComputedGoto_34__1716, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 67)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("pic18_start_symbol.galgas", 69)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_AST var_piccoloModel_2146 = GGS_pic_31__38_AST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_programName_757, var_programKind_835, var_deviceNameOrBootloaderReference_784, var_configDefinitionList_1452, var_ramDefinitionList_1363, var_unusedRegisterList_1410, var_checkpicList_1592, var_dataList_1562, var_interruptDefinitionList_1140, var_constantDefinitionList_1505, var_routineDefinitionList_1204, var_macroDefinitionList_1290, var_unusedRoutineList_1322, var_inlinedRoutineList_1629, var_needsComputedGoto_32__1677, var_needsComputedGoto_34__1716, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 87)), inCompiler COMMA_HERE) ;
      {
      routine_pic_31__38__5F_analyze_3F__3F_ (var_piccoloModel_2146, GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 89)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_hexDestinationFile_2704 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 91)).getter_deletingPathExtension (SOURCE_FILE ("pic18_start_symbol.galgas", 91)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 91)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_hexDestinationFile_2704.getter_fileExists (SOURCE_FILE ("pic18_start_symbol.galgas", 92)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_2704, inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 93)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_2907 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 95)).getter_deletingPathExtension (SOURCE_FILE ("pic18_start_symbol.galgas", 95)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 95)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_asmDestinationFile_2907.getter_fileExists (SOURCE_FILE ("pic18_start_symbol.galgas", 96)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_2907, inCompiler COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 97)) ;
        }
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                                                   GGS_string & outArgument_outDeviceName,
                                                                                                                                   GGS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                                                   GGS_ramBankTable & outArgument_outRamBank,
                                                                                                                                   GGS_registerTable & outArgument_outRegisterTable,
                                                                                                                                   GGS_bootloaderReservedRAMmap & outArgument_outBootloaderReservedRAMmap,
                                                                                                                                   GGS_routineDeclarationList & outArgument_outBootloaderRoutineDeclarationList,
                                                                                                                                   GGS_routineDeclarationList & outArgument_outUserRoutineDeclarationList,
                                                                                                                                   GGS_luint & outArgument_outBootloaderReservedROMsize,
                                                                                                                                   Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outDeviceName.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release 'out' argument
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outUserRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedROMsize.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 111)) ;
  GGS_lstring var_programName_3562 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 112)) ;
  GenericArray <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_3562.readProperty_location (), GGS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 113)) ;
  outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
  outArgument_outRamBank.drop () ; // Release error dropped variable
  outArgument_outRegisterTable.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release error dropped variable
  outArgument_outDeviceName.drop () ; // Release error dropped variable
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outUserRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedROMsize.drop () ; // Release error dropped variable
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 121)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 122)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 124)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 125)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 127)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 128)) ;
  nt_body_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 130)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 23)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 24)) ;
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 30)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 34)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 39)) ;
  nt_body_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_start_5F_symbol::rule_pic_31__38__5F_start_5F_symbol_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 23)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 24)) ;
  switch (select_pic_31__38__5F_start_5F_symbol_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_implements COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 30)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 31)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_uses COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 34)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 35)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 39)) ;
  nt_body_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("pic18_start_symbol.galgas", 67)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas", 32)) ;
  GGS_lstring var_programName_768 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 33)) ;
  GGS_lstring var_deviceName_813 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas", 34)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 35)) ;
  GGS_midrange_5F_interruptDefinitionList var_interruptDefinitionList_836 = GGS_midrange_5F_interruptDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_midrange_5F_routineDefinitionList var_routineDefinitionList_904 = GGS_midrange_5F_routineDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_ramDefinitionList var_ramDefinitionList_968 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRegisterList_1015 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRoutineList_1057 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_configDefinitionList var_configDefinitionList_1098 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_constantDefinitionList var_constantDefinitionList_1151 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_bool var_needsComputedGoto_32__1214 = GGS_bool (false) ;
  GGS_bool var_needsComputedGoto_34__1253 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 47)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas", 48)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GGS_lstring var_unusedRegister_1365 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 50)) ;
        var_unusedRegisterList_1015.addAssignOperation (var_unusedRegister_1365  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 51)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 53)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        GGS_lstring var_unusedRoutine_1532 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 59)) ;
        var_unusedRoutineList_1057.addAssignOperation (var_unusedRoutine_1532  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 60)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 62)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_ (var_configDefinitionList_1098, inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_ (var_ramDefinitionList_968, inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_ (var_constantDefinitionList_1151, inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_ (var_interruptDefinitionList_836, var_needsComputedGoto_32__1214, var_needsComputedGoto_34__1253, inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_ (var_routineDefinitionList_904, var_needsComputedGoto_32__1214, var_needsComputedGoto_34__1253, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 81)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_syntax.galgas", 83)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_midrange_5F_model var_piccoloModel_2121 = GGS_midrange_5F_model::init_21__21__21__21__21__21__21__21__21__21__21__21_ (var_programName_768, var_deviceName_813, var_configDefinitionList_1098, var_ramDefinitionList_968, var_unusedRegisterList_1015, var_interruptDefinitionList_836, var_constantDefinitionList_1151, var_routineDefinitionList_904, var_unusedRoutineList_1057, var_needsComputedGoto_32__1214, var_needsComputedGoto_34__1253, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 96)), inCompiler COMMA_HERE) ;
      {
      routine_midrange_5F_analyze_3F__3F_ (var_piccoloModel_2121, GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 98)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GGS_string var_hexDestinationFile_2562 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 100)).getter_deletingPathExtension (SOURCE_FILE ("midrange_syntax.galgas", 100)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 100)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_hexDestinationFile_2562.getter_fileExists (SOURCE_FILE ("midrange_syntax.galgas", 101)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_2562, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 102)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_2765 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 104)).getter_deletingPathExtension (SOURCE_FILE ("midrange_syntax.galgas", 104)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 104)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_asmDestinationFile_2765.getter_fileExists (SOURCE_FILE ("midrange_syntax.galgas", 105)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_2765, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 106)) ;
        }
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                           GGS_string & outArgument_outDeviceName,
                                                                                                           GGS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                           GGS_ramBankTable & outArgument_outRamBank,
                                                                                                           GGS_registerTable & outArgument_outRegisterTable,
                                                                                                           GGS_bootloaderReservedRAMmap & outArgument_outBootloaderReservedRAMmap,
                                                                                                           GGS_routineDeclarationList & outArgument_outBootloaderRoutineDeclarationList,
                                                                                                           GGS_routineDeclarationList & outArgument_outUserRoutineDeclarationList,
                                                                                                           GGS_luint & outArgument_outBootloaderReservedROMsize,
                                                                                                           Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outDeviceName.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release 'out' argument
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outUserRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedROMsize.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas", 120)) ;
  GGS_lstring var_programName_3423 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 121)) ;
  GenericArray <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_3423.readProperty_location (), GGS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 122)) ;
  outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
  outArgument_outRamBank.drop () ; // Release error dropped variable
  outArgument_outRegisterTable.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release error dropped variable
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outUserRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outDeviceName.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedROMsize.drop () ; // Release error dropped variable
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas", 127)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 128)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 131)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas", 132)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 134)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 136)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 139)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 140)) ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 142)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 144)) ;
        }else{
          repeatFlag_3 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 157)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas", 32)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 33)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas", 34)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 35)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 47)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas", 48)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 50)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 53)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 59)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 62)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_midrange COMMA_SOURCE_FILE ("midrange_syntax.galgas", 32)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 33)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("midrange_syntax.galgas", 34)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 35)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 47)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_byte COMMA_SOURCE_FILE ("midrange_syntax.galgas", 48)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 50)) ;
        if (select_midrange_5F_syntax_1 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 53)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_unused COMMA_SOURCE_FILE ("midrange_syntax.galgas", 56)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 57)) ;
      bool repeatFlag_2 = true ;
      while (repeatFlag_2) {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 59)) ;
        if (select_midrange_5F_syntax_2 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 62)) ;
        }else{
          repeatFlag_2 = false ;
        }
      }
    } break ;
    case 4: {
      nt_configuration_5F_definition_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_ram_5F_definition_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_constant_5F_definition_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_midrange_5F_interrupt_5F_definition_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_midrange_5F_routine_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_ (GGS_midrange_5F_instructionList & outArgument_outInstructionList,
                                                                                              GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                              GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                              GGS_labelMap & ioArgument_ioLabelMap,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GGS_midrange_5F_instructionList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_3 (inCompiler)) {
    case 2: {
      GGS_midrange_5F_instruction var_instruction_4554 ;
      nt_midrange_5F_simple_5F_instruction_ (var_instruction_4554, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4554  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 172)) ;
    } break ;
    case 3: {
      GGS_midrange_5F_instruction var_instruction_4662 ;
      nt_midrange_5F_structured_5F_instruction_ (var_instruction_4662, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      outArgument_outInstructionList.addAssignOperation (var_instruction_4662  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 179)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_midrange_5F_simple_5F_instruction_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_midrange_5F_structured_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_instruction_5F_list_i1_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_midrange_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_midrange_5F_simple_5F_instruction_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_midrange_5F_structured_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_ (GGS_midrange_5F_interruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                                                                                  GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                  GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                  Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 189)) ;
  GGS_location var_interruptionLocation_5051 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 190)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_contextsave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 191)) ;
  GGS_lstring var_firstSaveRegister_5134 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 192)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 193)) ;
  GGS_lstring var_secondSaveRegister_5187 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 194)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 195)) ;
  GGS_labelMap var_labelMap_5228 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_midrange_5F_instructionList var_instructionList_5282 ;
  nt_midrange_5F_instruction_5F_list_ (var_instructionList_5282, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_5228, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 202)) ;
  ioArgument_ioInterruptDefinitionList.addAssignOperation (var_interruptionLocation_5051, var_instructionList_5282, var_firstSaveRegister_5134, var_secondSaveRegister_5187, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 208))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 203)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 189)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_contextsave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 191)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 192)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 193)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 194)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 195)) ;
  nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 202)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_interrupt_5F_definition_i2_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_interrupt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 189)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_contextsave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 191)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 192)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 193)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 194)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 195)) ;
  nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 202)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_ (GGS_midrange_5F_routineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                                                                GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                Lexique_piccolo_5F_lexique * inCompiler) {
  GGS_bool var_noreturn_5735 ;
  switch (select_midrange_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_noreturn_5735 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("midrange_syntax.galgas", 222)) ;
    var_noreturn_5735 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 225)) ;
  GGS_lstring var_routineName_5861 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 226)) ;
  GGS_luint var_page_5923 ;
  switch (select_midrange_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_page_5923 = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 230)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("midrange_syntax.galgas", 232)) ;
    var_page_5923 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 233)) ;
  } break ;
  default:
    break ;
  }
  GGS_luint var_requiredBank_6043 ;
  GGS_luint var_returnedBank_6069 ;
  GGS_bool var_preservesBank_6094 ;
  switch (select_midrange_5F_syntax_6 (inCompiler)) {
  case 1: {
    var_requiredBank_6043 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas", 240)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 240)), inCompiler COMMA_HERE) ;
    var_returnedBank_6069 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas", 241)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 241)), inCompiler COMMA_HERE) ;
    var_preservesBank_6094 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 244)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 245)) ;
    switch (select_midrange_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("midrange_syntax.galgas", 247)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_noreturn_5735.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 249)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 249)) ;
        }
      }
      var_preservesBank_6094 = GGS_bool (true) ;
      var_requiredBank_6043 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas", 252)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 252)), inCompiler COMMA_HERE) ;
      var_returnedBank_6069 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas", 253)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 253)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("midrange_syntax.galgas", 255)) ;
      var_requiredBank_6043 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 256)) ;
      var_preservesBank_6094 = GGS_bool (false) ;
      switch (select_midrange_5F_syntax_8 (inCompiler)) {
      case 1: {
        var_returnedBank_6069 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas", 259)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 259)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 261)) ;
        var_returnedBank_6069 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 262)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_noreturn_5735.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 264)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 264)) ;
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 268)) ;
      var_returnedBank_6069 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 269)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_noreturn_5735.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 271)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 271)) ;
        }
      }
      var_preservesBank_6094 = GGS_bool (false) ;
      var_requiredBank_6043 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("midrange_syntax.galgas", 274)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 274)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 277)) ;
  GGS_labelMap var_labelMap_7250 = GGS_labelMap::init (inCompiler COMMA_HERE) ;
  GGS_midrange_5F_instructionList var_instructionList_7304 ;
  nt_midrange_5F_instruction_5F_list_ (var_instructionList_7304, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, var_labelMap_7250, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 284)) ;
  ioArgument_ioRoutineDefinitionList.addAssignOperation (var_routineName_5861, var_page_5923, var_requiredBank_6043, var_returnedBank_6069, var_preservesBank_6094, var_noreturn_5735, var_instructionList_7304, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 293))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 285)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("midrange_syntax.galgas", 222)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 225)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 226)) ;
  switch (select_midrange_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("midrange_syntax.galgas", 232)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 233)) ;
  } break ;
  default:
    break ;
  }
  switch (select_midrange_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 244)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 245)) ;
    switch (select_midrange_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("midrange_syntax.galgas", 247)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("midrange_syntax.galgas", 255)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 256)) ;
      switch (select_midrange_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 261)) ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 262)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 269)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 277)) ;
  nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 284)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_routine_5F_definition_i3_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("midrange_syntax.galgas", 222)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("midrange_syntax.galgas", 225)) ;
  inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 226)) ;
  switch (select_midrange_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_page COMMA_SOURCE_FILE ("midrange_syntax.galgas", 232)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 233)) ;
  } break ;
  default:
    break ;
  }
  switch (select_midrange_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 244)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 245)) ;
    switch (select_midrange_5F_syntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("midrange_syntax.galgas", 247)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("midrange_syntax.galgas", 255)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 256)) ;
      switch (select_midrange_5F_syntax_8 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 261)) ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 262)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("midrange_syntax.galgas", 268)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 269)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 277)) ;
  nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 284)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_ (GGS_midrange_5F_instruction & outArgument_outInstruction,
                                                                                                    GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                    GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                    GGS_labelMap & ioArgument_ioLabelMap,
                                                                                                    Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_midrange_5F_syntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 305)) ;
    GGS_lstring var_doLabel_7824 ;
    switch (select_midrange_5F_syntax_10 (inCompiler)) {
    case 1: {
      var_doLabel_7824 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 308)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_7824 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 310)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_7824, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 311)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_7959 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 313)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 314)) ;
    GGS_lstring var_constantName_8026 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 315)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 316)) ;
    GGS_immediatExpression var_lowBoundExpression_8099 ;
    nt_immediate_5F_expression_ (var_lowBoundExpression_8099, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 318)) ;
    GGS_immediatExpression var_highBoundExpression_8180 ;
    nt_immediate_5F_expression_ (var_highBoundExpression_8180, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 320)) ;
    GGS_midrange_5F_instructionList var_instructionList_8277 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_8277, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT::init_21__21__21__21__21__21_ (var_instructionLocation_7959, var_constantName_8026, var_lowBoundExpression_8099, var_highBoundExpression_8180, var_instructionList_8277, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 332)), inCompiler COMMA_HERE) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 333)) ;
    GGS_lstring var_endDoLabel_8602 ;
    switch (select_midrange_5F_syntax_11 (inCompiler)) {
    case 1: {
      var_endDoLabel_8602 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 336)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_8602 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 338)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_doLabel_7824.readProperty_string ().objectCompare (var_endDoLabel_8602.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, var_doLabel_7824.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = var_doLabel_7824.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_endDoLabel_8602.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 341)), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 341)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 345)) ;
    GGS_luint var_bankIndex_8956 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 346)) ;
    outArgument_outInstruction = GGS_midrangeInstruction_5F_checkbank::init_21__21_ (var_bankIndex_8956.readProperty_location (), var_bankIndex_8956.readProperty_uint (), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 349)) ;
    outArgument_outInstruction = GGS_midrangeInstruction_5F_checknobank::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 350)), inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 352)) ;
    GGS_location var_instructionLocation_9190 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 353)) ;
    GGS_registerExpression var_register_9275 ;
    nt_register_5F_parsing_ (var_register_9275, inCompiler) ;
    GGS_bool var_warningOnUselessBanksel_9298 ;
    switch (select_midrange_5F_syntax_12 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_9298 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 359)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 360)) ;
      var_warningOnUselessBanksel_9298 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_banksel_5F_register::init_21__21__21_ (var_instructionLocation_9190, var_register_9275, var_warningOnUselessBanksel_9298, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 365)) ;
    GGS_location var_instructionLocation_9599 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 366)) ;
    GGS_luint var_bank_9662 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 367)) ;
    GGS_bool var_warningOnUselessBanksel_9681 ;
    switch (select_midrange_5F_syntax_13 (inCompiler)) {
    case 1: {
      var_warningOnUselessBanksel_9681 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 373)) ;
      var_warningOnUselessBanksel_9681 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_banksel::init_21__21__21_ (var_instructionLocation_9599, var_bank_9662, var_warningOnUselessBanksel_9681, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 378)) ;
    GGS_location var_instructionLocation_9970 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 379)) ;
    GGS_registerExpression var_register_10055 ;
    nt_register_5F_parsing_ (var_register_10055, inCompiler) ;
    GGS_midrange_5F_instructionList var_instructionList_10107 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_10107, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 386)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_savebank::init_21__21__21__21_ (var_instructionLocation_9970, var_register_10055, var_instructionList_10107, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 391)), inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 393)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_nobanksel::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 394)), inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("midrange_syntax.galgas", 396)) ;
    GGS_lstring var_foreverLabel_10479 ;
    switch (select_midrange_5F_syntax_14 (inCompiler)) {
    case 1: {
      var_foreverLabel_10479 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 399)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_foreverLabel_10479 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 401)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_foreverLabel_10479, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 402)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_10644 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 404)) ;
    GGS_midrange_5F_instructionList var_instructionList_10724 ;
    nt_midrange_5F_instruction_5F_list_ (var_instructionList_10724, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 410)) ;
    GGS_lstring var_endForeverLabel_10844 ;
    switch (select_midrange_5F_syntax_15 (inCompiler)) {
    case 1: {
      var_endForeverLabel_10844 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 413)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endForeverLabel_10844 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 415)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_10479.readProperty_string ().objectCompare (var_endForeverLabel_10844.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, var_foreverLabel_10479.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = var_foreverLabel_10479.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_endForeverLabel_10844.readProperty_location (), GGS_string ("'end' label does not match 'fovever' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 418)), fixItArray7  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 418)) ;
      }
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FOREVER::init_21__21__21_ (var_instructionLocation_10644, var_instructionList_10724, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 424)), inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 426)) ;
    GGS_location var_instructionLocation_11354 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 427)) ;
    GGS_registerExpression var_registerExpression_11419 ;
    GGS_bitNumberExpression var_bitNumberExpression_11467 ;
    GGS_bool var_skipIfSet_11501 ;
    switch (select_midrange_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 432)) ;
      nt_register_5F_parsing_ (var_registerExpression_11419, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 434)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_11467, inCompiler) ;
      var_skipIfSet_11501 = GGS_bool (true) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_ (var_registerExpression_11419, inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 439)) ;
      nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_11467, inCompiler) ;
      var_skipIfSet_11501 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 443)) ;
    GGS_midrange_5F_instruction var_instruction_11851 ;
    nt_midrange_5F_simple_5F_instruction_ (var_instruction_11851, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_IF_5F_BitTest::init_21__21__21__21__21_ (var_instructionLocation_11354, var_instruction_11851, var_skipIfSet_11501, var_registerExpression_11419, var_bitNumberExpression_11467, inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 452)) ;
    GGS_location var_instructionLocation_12068 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 453)) ;
    GGS_bool var_increment_12119 ;
    switch (select_midrange_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 456)) ;
      var_increment_12119 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 458)) ;
      var_increment_12119 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_12248 ;
    nt_register_5F_parsing_ (var_registerExpression_12248, inCompiler) ;
    GGS_bool var_w_5F_isTarget_12281 ;
    switch (select_midrange_5F_syntax_18 (inCompiler)) {
    case 1: {
      var_w_5F_isTarget_12281 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
      var_w_5F_isTarget_12281 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_12410 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 467)) ;
    GGS_string var_condition_12442 = var_conditionString_12410.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("midrange_syntax.galgas", 468)) ;
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::notEqual, var_condition_12442.objectCompare (GGS_string ("NZ"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (var_conditionString_12410.readProperty_location (), GGS_string ("invalid '").add_operation (var_condition_12442, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 470)).add_operation (GGS_string ("' condition; it should be 'nz'"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 470)), fixItArray9  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 470)) ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 472)) ;
    GGS_midrange_5F_instruction var_instruction_12667 ;
    nt_midrange_5F_simple_5F_instruction_ (var_instruction_12667, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_IF_5F_IncDec::init_21__21__21__21__21_ (var_instructionLocation_12068, var_instruction_12667, var_increment_12119, var_registerExpression_12248, var_w_5F_isTarget_12281, inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 482)) ;
    GGS_lstring var_ifLabel_12878 ;
    switch (select_midrange_5F_syntax_19 (inCompiler)) {
    case 1: {
      var_ifLabel_12878 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 485)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_ifLabel_12878 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 487)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_ifLabel_12878, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 488)) ;
      }
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_ (var_ifLabel_12878, outArgument_outInstruction, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 496)) ;
    GGS_lstring var_endIfLabel_13187 ;
    switch (select_midrange_5F_syntax_20 (inCompiler)) {
    case 1: {
      var_endIfLabel_13187 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 499)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endIfLabel_13187 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 501)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_12878.readProperty_string ().objectCompare (var_endIfLabel_13187.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string temp_11 ;
        const GalgasBool test_12 = GGS_bool (ComparisonKind::notEqual, var_ifLabel_12878.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          temp_11 = var_ifLabel_12878.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_12) {
          temp_11 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_endIfLabel_13187.readProperty_location (), GGS_string ("'end' label does not match 'if' label, it should be ").add_operation (temp_11, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 504)), fixItArray13  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 504)) ;
      }
    }
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 508)) ;
    GGS_lstring var_doLabel_13525 ;
    switch (select_midrange_5F_syntax_21 (inCompiler)) {
    case 1: {
      var_doLabel_13525 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 511)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_doLabel_13525 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 513)) ;
      {
      ioArgument_ioLabelMap.setter_insertKey (var_doLabel_13525, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 514)) ;
      }
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_13670 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 516)) ;
    GGS_midrange_5F_instructionList var_repeatedInstructionList_13750 ;
    nt_midrange_5F_instruction_5F_list_ (var_repeatedInstructionList_13750, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    GGS_location var_endOfRepeatedInstructionList_13869 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 522)) ;
    GGS_midrange_5F_partList var_whilePartList_13923 = GGS_midrange_5F_partList::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_14 = true ;
    while (repeatFlag_14) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("midrange_syntax.galgas", 525)) ;
      GGS_lstring var_whileLabel_14004 ;
      switch (select_midrange_5F_syntax_23 (inCompiler)) {
      case 1: {
        var_whileLabel_14004 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 528)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        var_whileLabel_14004 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 530)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        test_15 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13525.readProperty_string ().objectCompare (var_whileLabel_14004.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          GGS_string temp_16 ;
          const GalgasBool test_17 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13525.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            temp_16 = var_doLabel_13525.readProperty_string () ;
          }else if (GalgasBool::boolFalse == test_17) {
            temp_16 = GGS_string ("empty") ;
          }
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (var_whileLabel_14004.readProperty_location (), GGS_string ("'while' label does not match 'do' label, it should be ").add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 533)), fixItArray18  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 533)) ;
        }
      }
      GGS_midrange_5F_conditionExpression var_whileCondition_14374 ;
      nt_midrange_5F_condition_5F_expression_ (var_whileCondition_14374, inCompiler) ;
      GGS_midrange_5F_instructionList var_instructionList_14436 ;
      nt_midrange_5F_instruction_5F_list_ (var_instructionList_14436, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
      var_whilePartList_13923.addAssignOperation (var_whileCondition_14374, var_instructionList_14436, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 542))  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 542)) ;
      if (select_midrange_5F_syntax_22 (inCompiler) == 2) {
      }else{
        repeatFlag_14 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 545)) ;
    GGS_lstring var_endDoLabel_14650 ;
    switch (select_midrange_5F_syntax_24 (inCompiler)) {
    case 1: {
      var_endDoLabel_14650 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 548)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_endDoLabel_14650 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 550)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13525.readProperty_string ().objectCompare (var_endDoLabel_14650.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        GGS_string temp_20 ;
        const GalgasBool test_21 = GGS_bool (ComparisonKind::notEqual, var_doLabel_13525.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_21) {
          temp_20 = var_doLabel_13525.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_21) {
          temp_20 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (var_endDoLabel_14650.readProperty_location (), GGS_string ("'end' label does not match 'do' label, it should be ").add_operation (temp_20, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 553)), fixItArray22  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 553)) ;
      }
    }
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_do_5F_while::init_21__21__21__21_ (var_instructionLocation_13670, var_repeatedInstructionList_13750, var_endOfRepeatedInstructionList_13869, var_whilePartList_13923, inCompiler COMMA_HERE) ;
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 562)) ;
    GGS_location var_instructionLocation_15161 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 563)) ;
    GGS_luint var_occurrenceFactor_15224 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 564)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_MNOP::init_21__21_ (var_instructionLocation_15161, var_occurrenceFactor_15224, inCompiler COMMA_HERE) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("midrange_syntax.galgas", 567)) ;
    GGS_location var_instructionLocation_15364 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 568)) ;
    GGS_lstring var_targetLabelName_15432 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 569)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_JSR::init_21__21_ (var_instructionLocation_15364, var_targetLabelName_15432, inCompiler COMMA_HERE) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("midrange_syntax.galgas", 574)) ;
    GGS_location var_instructionLocation_15582 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 575)) ;
    GGS_lstring var_targetLabelName_15650 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 576)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_JUMP::init_21__21_ (var_instructionLocation_15582, var_targetLabelName_15650, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 305)) ;
    switch (select_midrange_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 310)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 314)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 315)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 316)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 318)) ;
    nt_immediate_5F_expression_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 320)) ;
    nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 333)) ;
    switch (select_midrange_5F_syntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 338)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 345)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 346)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 349)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 352)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_midrange_5F_syntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 359)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 360)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 365)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 367)) ;
    switch (select_midrange_5F_syntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 373)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 378)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 386)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 393)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("midrange_syntax.galgas", 396)) ;
    switch (select_midrange_5F_syntax_14 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 401)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 410)) ;
    switch (select_midrange_5F_syntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 415)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 426)) ;
    switch (select_midrange_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 432)) ;
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 434)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 439)) ;
      nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 443)) ;
    nt_midrange_5F_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 452)) ;
    switch (select_midrange_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 456)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 458)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_midrange_5F_syntax_18 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 467)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 472)) ;
    nt_midrange_5F_simple_5F_instruction_parse (inCompiler) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 482)) ;
    switch (select_midrange_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 487)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 496)) ;
    switch (select_midrange_5F_syntax_20 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 501)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 508)) ;
    switch (select_midrange_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 513)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("midrange_syntax.galgas", 525)) ;
      switch (select_midrange_5F_syntax_23 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 530)) ;
      } break ;
      default:
        break ;
      }
      nt_midrange_5F_condition_5F_expression_parse (inCompiler) ;
      nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
      if (select_midrange_5F_syntax_22 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 545)) ;
    switch (select_midrange_5F_syntax_24 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 550)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 562)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 564)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("midrange_syntax.galgas", 567)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 569)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("midrange_syntax.galgas", 574)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 576)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_instruction_i4_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 305)) ;
    switch (select_midrange_5F_syntax_10 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 310)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 314)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 315)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 316)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 318)) ;
    nt_immediate_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 320)) ;
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 333)) ;
    switch (select_midrange_5F_syntax_11 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 338)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checkbank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 345)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 346)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_checknobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 349)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 352)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_midrange_5F_syntax_12 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 359)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 360)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksel COMMA_SOURCE_FILE ("midrange_syntax.galgas", 365)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 367)) ;
    switch (select_midrange_5F_syntax_13 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 372)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 373)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_banksave COMMA_SOURCE_FILE ("midrange_syntax.galgas", 378)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 386)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nobank COMMA_SOURCE_FILE ("midrange_syntax.galgas", 393)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_forever COMMA_SOURCE_FILE ("midrange_syntax.galgas", 396)) ;
    switch (select_midrange_5F_syntax_14 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 401)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 410)) ;
    switch (select_midrange_5F_syntax_15 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 415)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 426)) ;
    switch (select_midrange_5F_syntax_16 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 432)) ;
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 434)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_register_5F_parsing_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 439)) ;
      nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 443)) ;
    nt_midrange_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 452)) ;
    switch (select_midrange_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 456)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 458)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_midrange_5F_syntax_18 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 465)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 467)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 472)) ;
    nt_midrange_5F_simple_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 11: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_if COMMA_SOURCE_FILE ("midrange_syntax.galgas", 482)) ;
    switch (select_midrange_5F_syntax_19 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 487)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 496)) ;
    switch (select_midrange_5F_syntax_20 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 501)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 12: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_do COMMA_SOURCE_FILE ("midrange_syntax.galgas", 508)) ;
    switch (select_midrange_5F_syntax_21 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 513)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_while COMMA_SOURCE_FILE ("midrange_syntax.galgas", 525)) ;
      switch (select_midrange_5F_syntax_23 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 530)) ;
      } break ;
      default:
        break ;
      }
      nt_midrange_5F_condition_5F_expression_indexing (inCompiler) ;
      nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
      if (select_midrange_5F_syntax_22 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("midrange_syntax.galgas", 545)) ;
    switch (select_midrange_5F_syntax_24 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 550)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 13: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_mnop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 562)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("midrange_syntax.galgas", 564)) ;
  } break ;
  case 14: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jsr COMMA_SOURCE_FILE ("midrange_syntax.galgas", 567)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 569)) ;
  } break ;
  case 15: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_jump COMMA_SOURCE_FILE ("midrange_syntax.galgas", 574)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 576)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_ (const GGS_lstring constinArgument_ifLabel,
                                                                                                          GGS_midrange_5F_instruction & outArgument_outInstruction,
                                                                                                          GGS_bool & ioArgument_ioNeedsComputedGoto_32_,
                                                                                                          GGS_bool & ioArgument_ioNeedsComputedGoto_34_,
                                                                                                          GGS_labelMap & ioArgument_ioLabelMap,
                                                                                                          Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_16044 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 593)) ;
  GGS_midrange_5F_conditionExpression var_structured_5F_if_5F_condition_16120 ;
  nt_midrange_5F_condition_5F_expression_ (var_structured_5F_if_5F_condition_16120, inCompiler) ;
  GGS_midrange_5F_instructionList var_thenInstructionList_16183 ;
  nt_midrange_5F_instruction_5F_list_ (var_thenInstructionList_16183, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  GGS_midrange_5F_instructionList var_elseInstructionList_16306 ;
  switch (select_midrange_5F_syntax_25 (inCompiler)) {
  case 1: {
    var_elseInstructionList_16306 = GGS_midrange_5F_instructionList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("midrange_syntax.galgas", 604)) ;
    GGS_lstring var_elsifIfLabel_16424 ;
    switch (select_midrange_5F_syntax_26 (inCompiler)) {
    case 1: {
      var_elsifIfLabel_16424 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 607)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elsifIfLabel_16424 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 609)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elsifIfLabel_16424.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_elsifIfLabel_16424.readProperty_location (), GGS_string ("'elsif' label does not match 'if' label, it should be ").add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 612)), fixItArray3  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 612)) ;
      }
    }
    GGS_midrange_5F_instruction var_elsifPartInstruction_16810 ;
    nt_midrange_5F_structured_5F_if_5F_instruction_ (constinArgument_ifLabel, var_elsifPartInstruction_16810, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
    var_elseInstructionList_16306 = GGS_midrange_5F_instructionList::init (inCompiler COMMA_HERE) ;
    var_elseInstructionList_16306.addAssignOperation (var_elsifPartInstruction_16810  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 622)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("midrange_syntax.galgas", 624)) ;
    GGS_lstring var_elseLabel_17045 ;
    switch (select_midrange_5F_syntax_27 (inCompiler)) {
    case 1: {
      var_elseLabel_17045 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 627)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      var_elseLabel_17045 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 629)) ;
    } break ;
    default:
      break ;
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (var_elseLabel_17045.readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string temp_5 ;
        const GalgasBool test_6 = GGS_bool (ComparisonKind::notEqual, constinArgument_ifLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          temp_5 = constinArgument_ifLabel.readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_6) {
          temp_5 = GGS_string ("empty") ;
        }
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (var_elseLabel_17045.readProperty_location (), GGS_string ("'else' label does not match 'if' label, it should be ").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 632)), fixItArray7  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 632)) ;
      }
    }
    nt_midrange_5F_instruction_5F_list_ (var_elseInstructionList_16306, ioArgument_ioNeedsComputedGoto_32_, ioArgument_ioNeedsComputedGoto_34_, ioArgument_ioLabelMap, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfElsePartLocation_17506 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 641)) ;
  outArgument_outInstruction = GGS_midrange_5F_instruction_5F_structured_5F_if::init_21__21__21__21__21_ (var_instructionLocation_16044, var_structured_5F_if_5F_condition_16120, var_thenInstructionList_16183, var_elseInstructionList_16306, var_endOfElsePartLocation_17506, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_expression_parse (inCompiler) ;
  nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
  switch (select_midrange_5F_syntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("midrange_syntax.galgas", 604)) ;
    switch (select_midrange_5F_syntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 609)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("midrange_syntax.galgas", 624)) ;
    switch (select_midrange_5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 629)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_structured_5F_if_5F_instruction_i5_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_expression_indexing (inCompiler) ;
  nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_midrange_5F_syntax_25 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_elsif COMMA_SOURCE_FILE ("midrange_syntax.galgas", 604)) ;
    switch (select_midrange_5F_syntax_26 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 609)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_structured_5F_if_5F_instruction_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_else COMMA_SOURCE_FILE ("midrange_syntax.galgas", 624)) ;
    switch (select_midrange_5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_label COMMA_SOURCE_FILE ("midrange_syntax.galgas", 629)) ;
    } break ;
    default:
      break ;
    }
    nt_midrange_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_ (GGS_midrange_5F_instruction & outArgument_outInstruction,
                                                                                                Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  switch (select_midrange_5F_syntax_28 (inCompiler)) {
  case 1: {
    GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_17920 ;
    switch (select_midrange_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 656)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_ADDWF (SOURCE_FILE ("midrange_syntax.galgas", 657)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 659)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_ANDWF (SOURCE_FILE ("midrange_syntax.galgas", 660)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 662)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_COMF (SOURCE_FILE ("midrange_syntax.galgas", 663)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 665)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECF (SOURCE_FILE ("midrange_syntax.galgas", 666)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 668)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCF (SOURCE_FILE ("midrange_syntax.galgas", 669)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 671)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_IORWF (SOURCE_FILE ("midrange_syntax.galgas", 672)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 674)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_syntax.galgas", 675)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 677)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_RLF (SOURCE_FILE ("midrange_syntax.galgas", 678)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 680)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_RRF (SOURCE_FILE ("midrange_syntax.galgas", 681)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 683)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SUBWF (SOURCE_FILE ("midrange_syntax.galgas", 684)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 686)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_syntax.galgas", 687)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 689)) ;
      var_baseCode_17920 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_XORWF (SOURCE_FILE ("midrange_syntax.galgas", 690)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_18473 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 692)) ;
    GGS_registerExpression var_registerExpression_18538 ;
    nt_register_5F_parsing_ (var_registerExpression_18538, inCompiler) ;
    GGS_bool var_W_5F_isDestination_18587 ;
    nt_optional_5F_w_5F_as_5F_dest_ (var_W_5F_isDestination_18587, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FD::init_21__21__21__21_ (var_instructionLocation_18473, var_baseCode_17920, var_registerExpression_18538, var_W_5F_isDestination_18587, inCompiler COMMA_HERE) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool test_1 = GGS_bool (ComparisonKind::equal, var_baseCode_17920.objectCompare (GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_syntax.galgas", 702)))) ;
      if (GalgasBool::boolTrue == test_1.boolEnum ()) {
        test_1 = var_W_5F_isDestination_18587.operator_not (SOURCE_FILE ("midrange_syntax.galgas", 702)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticWarning (var_instructionLocation_18473, GGS_string ("This instruction does not move data, it only sets flags. Use 'movf *, reg' instead of 'movf reg' to suppress this warning"), fixItArray2  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 703)) ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 707)) ;
    GGS_location var_instructionLocation_19091 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 708)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 709)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 710)) ;
    GGS_registerExpression var_registerName_19163 ;
    nt_register_5F_parsing_ (var_registerName_19163, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FD::init_21__21__21__21_ (var_instructionLocation_19091, GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_syntax.galgas", 714)), var_registerName_19163, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_midrange_5F_F_5F_instruction_5F_base_5F_code var_FAinstruction_19373 ;
    switch (select_midrange_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 721)) ;
      var_FAinstruction_19373 = GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_syntax.galgas", 722)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 724)) ;
      var_FAinstruction_19373 = GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_syntax.galgas", 725)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_19583 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 727)) ;
    GGS_registerExpression var_registerExpression_19648 ;
    nt_register_5F_parsing_ (var_registerExpression_19648, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_F::init_21__21__21_ (var_instructionLocation_19583, var_FAinstruction_19373, var_registerExpression_19648, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_midrange_5F_bit_5F_oriented_5F_op var_bitOrientedOp_19828 ;
    switch (select_midrange_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 736)) ;
      var_bitOrientedOp_19828 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_syntax.galgas", 736)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 738)) ;
      var_bitOrientedOp_19828 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_syntax.galgas", 738)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_20008 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 740)) ;
    GGS_registerExpression var_registerExpression_20073 ;
    nt_register_5F_parsing_ (var_registerExpression_20073, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 742)) ;
    GGS_bitNumberExpression var_bitNumberExpression_20130 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_20130, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_FB::init_21__21__21__21_ (var_instructionLocation_20008, var_bitOrientedOp_19828, var_registerExpression_20073, var_bitNumberExpression_20130, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("midrange_syntax.galgas", 750)) ;
    GGS_location var_instructionLocation_20334 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 751)) ;
    GGS_lstring var_targetLabelName_20402 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 752)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_GOTO::init_21__21_ (var_instructionLocation_20334, var_targetLabelName_20402, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("midrange_syntax.galgas", 757)) ;
    GGS_location var_instructionLocation_20574 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 758)) ;
    GGS_lstring var_targetLabelName_20642 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 759)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_CALL::init_21__21_ (var_instructionLocation_20574, var_targetLabelName_20642, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 764)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_CLRW::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 765)), inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 767)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_CLRWDT::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 768)), inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 770)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_NOP::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 771)), inCompiler COMMA_HERE) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("midrange_syntax.galgas", 773)) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_SLEEP::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 774)), inCompiler COMMA_HERE) ;
  } break ;
  case 11: {
    GGS_midrange_5F_literal_5F_instruction_5F_opcode var_literalInstruction_21166 ;
    switch (select_midrange_5F_syntax_32 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 778)) ;
      var_literalInstruction_21166 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("midrange_syntax.galgas", 778)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 780)) ;
      var_literalInstruction_21166 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_ANDLW (SOURCE_FILE ("midrange_syntax.galgas", 780)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 782)) ;
      var_literalInstruction_21166 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_IORLW (SOURCE_FILE ("midrange_syntax.galgas", 782)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 784)) ;
      var_literalInstruction_21166 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("midrange_syntax.galgas", 784)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 786)) ;
      var_literalInstruction_21166 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_SUBLW (SOURCE_FILE ("midrange_syntax.galgas", 786)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 788)) ;
      var_literalInstruction_21166 = GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_XORLW (SOURCE_FILE ("midrange_syntax.galgas", 788)) ;
    } break ;
    default:
      break ;
    }
    GGS_location var_instructionLocation_21743 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 790)) ;
    GGS_immediatExpression var_expression_21812 ;
    nt_immediate_5F_expression_ (var_expression_21812, inCompiler) ;
    outArgument_outInstruction = GGS_midrange_5F_instruction_5F_literalOperation::init_21__21__21_ (var_instructionLocation_21743, var_literalInstruction_21166, var_expression_21812, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_28 (inCompiler)) {
  case 1: {
    switch (select_midrange_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 656)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 659)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 662)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 665)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 668)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 671)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 674)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 677)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 680)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 683)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 686)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 689)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 707)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 709)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 710)) ;
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 3: {
    switch (select_midrange_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 721)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 724)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
  } break ;
  case 4: {
    switch (select_midrange_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 736)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 738)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 742)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("midrange_syntax.galgas", 750)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 752)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("midrange_syntax.galgas", 757)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 759)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 764)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 767)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 770)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("midrange_syntax.galgas", 773)) ;
  } break ;
  case 11: {
    switch (select_midrange_5F_syntax_32 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 778)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 780)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 782)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 784)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 786)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 788)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_simple_5F_instruction_i6_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_28 (inCompiler)) {
  case 1: {
    switch (select_midrange_5F_syntax_29 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 656)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 659)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_comf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 662)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 665)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 668)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 671)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 674)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rlf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 677)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 680)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_subwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 683)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_swapf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 686)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 689)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    nt_optional_5F_w_5F_as_5F_dest_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 707)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2A_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 709)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 710)) ;
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 3: {
    switch (select_midrange_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 721)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movwf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 724)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 4: {
    switch (select_midrange_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bcf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 736)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bsf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 738)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 742)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_goto COMMA_SOURCE_FILE ("midrange_syntax.galgas", 750)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 752)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_call COMMA_SOURCE_FILE ("midrange_syntax.galgas", 757)) ;
    inCompiler->enterIndexing (Lexique_piccolo_5F_lexique::kIndexing_routineCall, "") ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 759)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 764)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_clrwdt COMMA_SOURCE_FILE ("midrange_syntax.galgas", 767)) ;
  } break ;
  case 9: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_nop COMMA_SOURCE_FILE ("midrange_syntax.galgas", 770)) ;
  } break ;
  case 10: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sleep COMMA_SOURCE_FILE ("midrange_syntax.galgas", 773)) ;
  } break ;
  case 11: {
    switch (select_midrange_5F_syntax_32 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_addlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 778)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_andlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 780)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_iorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 782)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_movlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 784)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_sublw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 786)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_xorlw COMMA_SOURCE_FILE ("midrange_syntax.galgas", 788)) ;
    } break ;
    default:
      break ;
    }
    nt_immediate_5F_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_ (GGS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 803)) ;
  GGS_midrange_5F_conditionExpression var_condition_22144 ;
  nt_midrange_5F_condition_5F_factor_ (var_condition_22144, inCompiler) ;
  outArgument_outCondition = GGS_midrange_5F_negateCondition::init_21_ (var_condition_22144, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 803)) ;
  nt_midrange_5F_condition_5F_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i7_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 803)) ;
  nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_ (GGS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_midrange_5F_condition_5F_expression_ (outArgument_outCondition, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i8_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_ (GGS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                              Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  switch (select_midrange_5F_syntax_33 (inCompiler)) {
  case 1: {
    GGS_bool var_isIncrement_22563 ;
    switch (select_midrange_5F_syntax_34 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 822)) ;
      var_isIncrement_22563 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 824)) ;
      var_isIncrement_22563 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_registerExpression var_registerExpression_22698 ;
    nt_register_5F_parsing_ (var_registerExpression_22698, inCompiler) ;
    GGS_bool var_W_5F_isDestination_22731 ;
    switch (select_midrange_5F_syntax_35 (inCompiler)) {
    case 1: {
      var_W_5F_isDestination_22731 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
      var_W_5F_isDestination_22731 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_conditionString_22875 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 833)) ;
    GGS_string var_condition_22907 = var_conditionString_22875.readProperty_string ().getter_uppercaseString (SOURCE_FILE ("midrange_syntax.galgas", 834)) ;
    GGS_bool var_branchIfZero_22974 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_condition_22907.objectCompare (GGS_string ("Z"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_branchIfZero_22974 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_condition_22907.objectCompare (GGS_string ("NZ"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_branchIfZero_22974 = GGS_bool (false) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (var_conditionString_22875.readProperty_location (), GGS_string ("invalid '").add_operation (var_conditionString_22875.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 841)).add_operation (GGS_string ("' condition; valid ones are: 'z' and 'nz'"), inCompiler COMMA_SOURCE_FILE ("midrange_syntax.galgas", 841)), fixItArray2  COMMA_SOURCE_FILE ("midrange_syntax.galgas", 841)) ;
        var_branchIfZero_22974.drop () ; // Release error dropped variable
      }
    }
    outArgument_outCondition = GGS_midrange_5F_incDecRegisterInCondition::init_21__21__21__21_ (var_registerExpression_22698, var_isIncrement_22563, var_W_5F_isDestination_22731, var_branchIfZero_22974, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_registerExpression var_registerExpression_23430 ;
    nt_register_5F_parsing_ (var_registerExpression_23430, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 852)) ;
    GGS_bitNumberExpression var_bitNumberExpression_23487 ;
    nt_bit_5F_number_5F_parsing_ (var_bitNumberExpression_23487, inCompiler) ;
    outArgument_outCondition = GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::init_21__21_ (var_registerExpression_23430, var_bitNumberExpression_23487, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_33 (inCompiler)) {
  case 1: {
    switch (select_midrange_5F_syntax_34 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 822)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 824)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_parse (inCompiler) ;
    switch (select_midrange_5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 833)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 852)) ;
    nt_bit_5F_number_5F_parsing_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_factor_i9_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_midrange_5F_syntax_33 (inCompiler)) {
  case 1: {
    switch (select_midrange_5F_syntax_34 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_incf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 822)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_decf COMMA_SOURCE_FILE ("midrange_syntax.galgas", 824)) ;
    } break ;
    default:
      break ;
    }
    nt_register_5F_parsing_indexing (inCompiler) ;
    switch (select_midrange_5F_syntax_35 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_w COMMA_SOURCE_FILE ("midrange_syntax.galgas", 831)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("midrange_syntax.galgas", 833)) ;
  } break ;
  case 2: {
    nt_register_5F_parsing_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 852)) ;
    nt_bit_5F_number_5F_parsing_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_ (GGS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                                   Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 865)) ;
  nt_midrange_5F_condition_5F_term_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 869)) ;
      GGS_midrange_5F_conditionExpression var_c_23891 ;
      nt_midrange_5F_condition_5F_term_ (var_c_23891, inCompiler) ;
      GGS_midrange_5F_conditionExpression var_rc_23931 = GGS_midrange_5F_negateCondition::init_21_ (var_c_23891, inCompiler COMMA_HERE) ;
      GGS_midrange_5F_conditionExpression var_lc_24006 = GGS_midrange_5F_negateCondition::init_21_ (outArgument_outCondition, inCompiler COMMA_HERE) ;
      outArgument_outCondition = GGS_midrange_5F_negateCondition::init_21_ (GGS_midrange_5F_andCondition::init_21__21_ (var_lc_24006, var_rc_23931, inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 875)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 865)) ;
  nt_midrange_5F_condition_5F_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 869)) ;
      nt_midrange_5F_condition_5F_term_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 875)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_expression_i10_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 865)) ;
  nt_midrange_5F_condition_5F_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 869)) ;
      nt_midrange_5F_condition_5F_term_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 875)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_ (GGS_midrange_5F_conditionExpression & outArgument_outCondition,
                                                                                             Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outCondition.drop () ; // Release 'out' argument
  nt_midrange_5F_condition_5F_factor_ (outArgument_outCondition, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 885)) ;
      GGS_midrange_5F_conditionExpression var_c_24394 ;
      nt_midrange_5F_condition_5F_factor_ (var_c_24394, inCompiler) ;
      outArgument_outCondition = GGS_midrange_5F_andCondition::init_21__21_ (outArgument_outCondition, var_c_24394, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 885)) ;
      nt_midrange_5F_condition_5F_factor_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_midrange_5F_syntax::rule_midrange_5F_syntax_midrange_5F_condition_5F_term_i11_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_midrange_5F_syntax_37 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("midrange_syntax.galgas", 885)) ;
      nt_midrange_5F_condition_5F_factor_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}



//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_program::rule_baseline_5F_program_start_5F_symbol_i0_ (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_baseline COMMA_SOURCE_FILE ("baseline_program.galgas", 16)) ;
  GGS_lstring var_programName_520 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_program.galgas", 17)) ;
  GGS_lstring var_deviceName_565 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("baseline_program.galgas", 18)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_program.galgas", 19)) ;
  GGS_baseline_5F_routineDefinitionList var_routineDefinitionList_588 = GGS_baseline_5F_routineDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_ramDefinitionList var_ramDefinitionList_652 = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRegisterList_699 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_unusedRoutineList_741 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_configDefinitionList var_configDefinitionList_782 = GGS_configDefinitionList::init (inCompiler COMMA_HERE) ;
  GGS_constantDefinitionList var_constantDefinitionList_835 = GGS_constantDefinitionList::init (inCompiler COMMA_HERE) ;
  nt_section_5F_list_ (var_routineDefinitionList_588, var_unusedRoutineList_741, var_ramDefinitionList_652, var_unusedRegisterList_699, var_configDefinitionList_782, var_constantDefinitionList_835, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_program.galgas", 33)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_program.galgas", 35)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_baseline_5F_model var_piccoloModel_1132 = GGS_baseline_5F_model::init_21__21__21__21__21__21__21__21__21_ (var_programName_520, var_deviceName_565, var_configDefinitionList_782, var_ramDefinitionList_652, var_unusedRegisterList_699, var_constantDefinitionList_835, var_routineDefinitionList_588, var_unusedRoutineList_741, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_program.galgas", 45)), inCompiler COMMA_HERE) ;
      {
      routine_baseline_5F_analysis_3F__3F_ (var_piccoloModel_1132, GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("baseline_program.galgas", 47)), inCompiler  COMMA_SOURCE_FILE ("baseline_program.galgas", 47)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_hexDestinationFile_1491 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("baseline_program.galgas", 49)).getter_deletingPathExtension (SOURCE_FILE ("baseline_program.galgas", 49)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_program.galgas", 49)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_hexDestinationFile_1491.getter_fileExists (SOURCE_FILE ("baseline_program.galgas", 50)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_1491, inCompiler COMMA_SOURCE_FILE ("baseline_program.galgas", 51)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_1694 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("baseline_program.galgas", 53)).getter_deletingPathExtension (SOURCE_FILE ("baseline_program.galgas", 53)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_program.galgas", 53)) ;
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_asmDestinationFile_1694.getter_fileExists (SOURCE_FILE ("baseline_program.galgas", 54)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_1694, inCompiler COMMA_SOURCE_FILE ("baseline_program.galgas", 55)) ;
        }
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_program::rule_baseline_5F_program_start_5F_symbol_i0_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                             GGS_string & outArgument_outDeviceName,
                                                                                                             GGS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                             GGS_ramBankTable & outArgument_outRamBank,
                                                                                                             GGS_registerTable & outArgument_outRegisterTable,
                                                                                                             GGS_bootloaderReservedRAMmap & outArgument_outBootloaderReservedRAMmap,
                                                                                                             GGS_routineDeclarationList & outArgument_outBootloaderRoutineDeclarationList,
                                                                                                             GGS_routineDeclarationList & outArgument_outUserRoutineDeclarationList,
                                                                                                             GGS_luint & outArgument_outBootloaderReservedROMsize,
                                                                                                             Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outDeviceName.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release 'out' argument
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outUserRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedROMsize.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_baseline COMMA_SOURCE_FILE ("baseline_program.galgas", 69)) ;
  GGS_lstring var_programName_2352 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_program.galgas", 70)) ;
  GenericArray <FixItDescription> fixItArray0 ;
  inCompiler->emitSemanticError (var_programName_2352.readProperty_location (), GGS_string ("this file does not define a bootloader specification"), fixItArray0  COMMA_SOURCE_FILE ("baseline_program.galgas", 71)) ;
  outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
  outArgument_outRamBank.drop () ; // Release error dropped variable
  outArgument_outRegisterTable.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release error dropped variable
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outUserRoutineDeclarationList.drop () ; // Release error dropped variable
  outArgument_outDeviceName.drop () ; // Release error dropped variable
  outArgument_outBootloaderReservedROMsize.drop () ; // Release error dropped variable
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("baseline_program.galgas", 76)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_program.galgas", 77)) ;
  nt_section_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_program.galgas", 79)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_program::rule_baseline_5F_program_start_5F_symbol_i0_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_baseline COMMA_SOURCE_FILE ("baseline_program.galgas", 16)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_program.galgas", 17)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("baseline_program.galgas", 18)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_program.galgas", 19)) ;
  nt_section_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_program.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_baseline_5F_program::rule_baseline_5F_program_start_5F_symbol_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_baseline COMMA_SOURCE_FILE ("baseline_program.galgas", 16)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("baseline_program.galgas", 17)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("baseline_program.galgas", 18)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("baseline_program.galgas", 19)) ;
  nt_section_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_end COMMA_SOURCE_FILE ("baseline_program.galgas", 33)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_bootloader_5F_syntax::rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_ (GGS_lstring & outArgument_outBootloaderName,
                                                                                                                    GGS_lstring & outArgument_outDeviceName,
                                                                                                                    GGS_routineDeclarationList & outArgument_outBootloaderRoutineDeclarationList,
                                                                                                                    GGS_bootloaderReservedRAMmap & outArgument_outBootloaderReservedRAMmap,
                                                                                                                    GGS_luint & outArgument_outReservedRomSize,
                                                                                                                    GGS_routineDeclarationList & outArgument_outUserRoutineDeclarationList,
                                                                                                                    GGS_ramDefinitionList & outArgument_outSharedRamDefinitionList,
                                                                                                                    GGS_string & outArgument_outListFileContents,
                                                                                                                    GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                                    GGS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                                    GGS_ramBankTable & outArgument_outRamBank,
                                                                                                                    GGS_registerTable & outArgument_outRegisterTable,
                                                                                                                    Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outBootloaderName.drop () ; // Release 'out' argument
  outArgument_outDeviceName.drop () ; // Release 'out' argument
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release 'out' argument
  outArgument_outReservedRomSize.drop () ; // Release 'out' argument
  outArgument_outUserRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outSharedRamDefinitionList.drop () ; // Release 'out' argument
  outArgument_outListFileContents.drop () ; // Release 'out' argument
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 38)) ;
  outArgument_outBootloaderName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 39)) ;
  outArgument_outDeviceName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 42)) ;
  outArgument_outBootloaderRoutineDeclarationList = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
  outArgument_outBootloaderReservedRAMmap = GGS_bootloaderReservedRAMmap::init (inCompiler COMMA_HERE) ;
  outArgument_outReservedRomSize = GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 45)), inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_bootloader_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_routine_5F_declaration_ (outArgument_outBootloaderRoutineDeclarationList, inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rom COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 50)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 51)) ;
      GGS_luint var_rs_1688 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 52)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::notEqual, outArgument_outReservedRomSize.readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_rs_1688.readProperty_location (), GGS_string ("ROM size already defined"), fixItArray2  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 54)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::equal, var_rs_1688.readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (var_rs_1688.readProperty_location (), GGS_string ("ROM size should be > 0"), fixItArray4  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 56)) ;
          }
        }
        if (GalgasBool::boolFalse == test_3) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = GGS_bool (ComparisonKind::notEqual, var_rs_1688.readProperty_uint ().modulo_operation (GGS_uint (uint32_t (8U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 57)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (var_rs_1688.readProperty_location (), GGS_string ("ROM size should be a multiple of 8"), fixItArray6  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 58)) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            outArgument_outReservedRomSize = var_rs_1688 ;
          }
        }
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 63)) ;
      GGS_lstring var_bankName_2030 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 65)) ;
      GGS_luint var_rs_2073 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 66)) ;
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = outArgument_outBootloaderReservedRAMmap.getter_hasKey (var_bankName_2030.readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 67)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (var_rs_2073.readProperty_location (), GGS_string ("RAM size already defined for '").add_operation (var_bankName_2030.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 68)).add_operation (GGS_string ("' bank"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 68)), fixItArray8  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 68)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, var_rs_2073.readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (var_rs_2073.readProperty_location (), GGS_string ("RAM size should be > 0"), fixItArray10  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 70)) ;
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          {
          outArgument_outBootloaderReservedRAMmap.setter_insertKey (var_bankName_2030, var_rs_2073, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 72)) ;
          }
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 77)) ;
  outArgument_outUserRoutineDeclarationList = GGS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_11 = true ;
  while (repeatFlag_11) {
    if (select_pic_31__38__5F_bootloader_5F_syntax_1 (inCompiler) == 2) {
      nt_routine_5F_declaration_ (outArgument_outUserRoutineDeclarationList, inCompiler) ;
    }else{
      repeatFlag_11 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 83)) ;
  outArgument_outSharedRamDefinitionList = GGS_ramDefinitionList::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 86)) ;
  bool repeatFlag_12 = true ;
  while (repeatFlag_12) {
    if (select_pic_31__38__5F_bootloader_5F_syntax_2 (inCompiler) == 2) {
      nt_ram_5F_definition_ (outArgument_outSharedRamDefinitionList, inCompiler) ;
    }else{
      repeatFlag_12 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 91)) ;
  {
  routine_pic_31__38_BootloaderSpecificationAnalysis_3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 94)), outArgument_outBootloaderName, outArgument_outDeviceName, outArgument_outBootloaderRoutineDeclarationList, outArgument_outBootloaderReservedRAMmap, outArgument_outReservedRomSize, outArgument_outUserRoutineDeclarationList, outArgument_outSharedRamDefinitionList, outArgument_outListFileContents, outArgument_outPiccoloDeviceModel, outArgument_outAccessBankSplitOffset, outArgument_outRamBank, outArgument_outRegisterTable, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 93)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_bootloader_5F_syntax::rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_bootloader_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_routine_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rom COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 50)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 52)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 66)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_pic_31__38__5F_bootloader_5F_syntax_1 (inCompiler) == 2) {
      nt_routine_5F_declaration_parse (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 86)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_pic_31__38__5F_bootloader_5F_syntax_2 (inCompiler) == 2) {
      nt_ram_5F_definition_parse (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 91)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_bootloader_5F_syntax::rule_pic_31__38__5F_bootloader_5F_syntax_parse_5F_bootloader_i0_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_pic_31__38_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bootloader COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 42)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_pic_31__38__5F_bootloader_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_routine_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_rom COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 50)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 51)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 52)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ram COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 63)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 64)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 65)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 66)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 75)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 77)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_pic_31__38__5F_bootloader_5F_syntax_1 (inCompiler) == 2) {
      nt_routine_5F_declaration_indexing (inCompiler) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 83)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 86)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    if (select_pic_31__38__5F_bootloader_5F_syntax_2 (inCompiler) == 2) {
      nt_ram_5F_definition_indexing (inCompiler) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 91)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_bootloader_5F_syntax::rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_ (Lexique_piccolo_5F_lexique * inCompiler) {
  GGS_lstring var_bootloaderName_3253 ;
  GGS_lstring var_deviceName_3284 ;
  GGS_routineDeclarationList var_bootloaderRoutineDeclarationList_3311 ;
  GGS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap_3360 ;
  GGS_luint var_reservedRomSize_3401 ;
  GGS_routineDeclarationList var_userRoutineDeclarationList_3433 ;
  GGS_ramDefinitionList var_sharedRamDefinitionList_3476 ;
  GGS_string var_listFileContents_3509 ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_3542 ;
  GGS_uint var_accessBankSplitOffset_3577 ;
  GGS_ramBankTable var_ramBank_3615 ;
  GGS_registerTable var_registerTable_3639 ;
  nt_parse_5F_bootloader_ (var_bootloaderName_3253, var_deviceName_3284, var_bootloaderRoutineDeclarationList_3311, var_bootloaderReservedRAMmap_3360, var_reservedRomSize_3401, var_userRoutineDeclarationList_3433, var_sharedRamDefinitionList_3476, var_listFileContents_3509, var_piccoloDeviceModel_3542, var_accessBankSplitOffset_3577, var_ramBank_3615, var_registerTable_3639, inCompiler) ;
  GGS_string var_listingFile_3690 = GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 127)).getter_deletingPathExtension (SOURCE_FILE ("pic18_bootloader_syntax.galgas", 127)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 127)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("pic18_bootloader_syntax.galgas", 128)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()) COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 128)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_bool joker_3924 ; // Joker input parameter
      var_listFileContents_3509.method_writeToFileWhenDifferentContents (var_listingFile_3690, joker_3924, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 129)) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, GGS_uint::class_func_errorCount (SOURCE_FILE ("pic18_bootloader_syntax.galgas", 131)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      {
      GGS_string::class_method_deleteFileIfExists (var_listingFile_3690, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 132)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_bootloader_5F_syntax::rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_importBootloaderSpecification (GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                                                             GGS_string & outArgument_outDeviceName,
                                                                                                                                             GGS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                                                             GGS_ramBankTable & outArgument_outRamBank,
                                                                                                                                             GGS_registerTable & outArgument_outRegisterTable,
                                                                                                                                             GGS_bootloaderReservedRAMmap & outArgument_outBootloaderReservedRAMmap,
                                                                                                                                             GGS_routineDeclarationList & outArgument_outBootloaderRoutineDeclarationList,
                                                                                                                                             GGS_routineDeclarationList & outArgument_outUserRoutineDeclarationList,
                                                                                                                                             GGS_luint & outArgument_outBootloaderReservedROMsize,
                                                                                                                                             Lexique_piccolo_5F_lexique * inCompiler) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outDeviceName.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedRAMmap.drop () ; // Release 'out' argument
  outArgument_outBootloaderRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outUserRoutineDeclarationList.drop () ; // Release 'out' argument
  outArgument_outBootloaderReservedROMsize.drop () ; // Release 'out' argument
  GGS_lstring var_bootloaderName_4478 ;
  GGS_lstring var_deviceName_4511 ;
  GGS_ramDefinitionList var_sharedRamDefinitionList_4681 ;
  GGS_string var_listFileContents_4721 ;
  nt_parse_5F_bootloader_ (var_bootloaderName_4478, var_deviceName_4511, outArgument_outBootloaderRoutineDeclarationList, outArgument_outBootloaderReservedRAMmap, outArgument_outBootloaderReservedROMsize, outArgument_outUserRoutineDeclarationList, var_sharedRamDefinitionList_4681, var_listFileContents_4721, outArgument_outPiccoloDeviceModel, outArgument_outAccessBankSplitOffset, outArgument_outRamBank, outArgument_outRegisterTable, inCompiler) ;
  outArgument_outDeviceName = var_deviceName_4511.readProperty_string () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_bootloader_5F_syntax::rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_parse_5F_bootloader_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_bootloader_5F_syntax::rule_pic_31__38__5F_bootloader_5F_syntax_start_5F_symbol_i1_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  nt_parse_5F_bootloader_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_bootloader_5F_syntax::rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_ (GGS_routineDeclarationList & ioArgument_ioRoutineDefinitionList,
                                                                                                                       Lexique_piccolo_5F_lexique * inCompiler) {
  GGS_bool var_noreturn_5021 ;
  switch (select_pic_31__38__5F_bootloader_5F_syntax_3 (inCompiler)) {
  case 1: {
    var_noreturn_5021 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 169)) ;
    var_noreturn_5021 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 172)) ;
  GGS_lstring var_routineName_5147 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 173)) ;
  GGS_luint var_requiredBank_5172 ;
  GGS_luint var_returnedBank_5198 ;
  GGS_bool var_preservesBank_5223 ;
  switch (select_pic_31__38__5F_bootloader_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_requiredBank_5172 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_bootloader_syntax.galgas", 178)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 178)), inCompiler COMMA_HERE) ;
    var_returnedBank_5198 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_bootloader_syntax.galgas", 179)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 179)), inCompiler COMMA_HERE) ;
    var_preservesBank_5223 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 182)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 183)) ;
    switch (select_pic_31__38__5F_bootloader_5F_syntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 185)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = var_noreturn_5021.boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 187)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:preserved\" setting"), fixItArray1  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 187)) ;
        }
      }
      var_preservesBank_5223 = GGS_bool (true) ;
      var_requiredBank_5172 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_bootloader_syntax.galgas", 190)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 190)), inCompiler COMMA_HERE) ;
      var_returnedBank_5198 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_bootloader_syntax.galgas", 191)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 191)), inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 193)) ;
      var_requiredBank_5172 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 194)) ;
      var_preservesBank_5223 = GGS_bool (false) ;
      switch (select_pic_31__38__5F_bootloader_5F_syntax_6 (inCompiler)) {
      case 1: {
        var_returnedBank_5198 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_bootloader_syntax.galgas", 197)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 197)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 199)) ;
        var_returnedBank_5198 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 200)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = var_noreturn_5021.boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 202)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray3  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 202)) ;
          }
        }
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 206)) ;
      var_returnedBank_5198 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 207)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_noreturn_5021.boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 209)), GGS_string ("a \"noreturn\" routine cannot accept \"bank:returned\" setting"), fixItArray5  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 209)) ;
        }
      }
      var_preservesBank_5223 = GGS_bool (false) ;
      var_requiredBank_5172 = GGS_luint::init_21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("pic18_bootloader_syntax.galgas", 212)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 212)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  ioArgument_ioRoutineDefinitionList.addAssignOperation (var_routineName_5147, var_requiredBank_5172, var_returnedBank_5198, var_preservesBank_5223, var_noreturn_5021  COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 216)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_bootloader_5F_syntax::rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_parse (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_bootloader_5F_syntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 169)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 172)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 173)) ;
  switch (select_pic_31__38__5F_bootloader_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 182)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 183)) ;
    switch (select_pic_31__38__5F_bootloader_5F_syntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 185)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 193)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 194)) ;
      switch (select_pic_31__38__5F_bootloader_5F_syntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 199)) ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 200)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 206)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 207)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_pic_31__38__5F_bootloader_5F_syntax::rule_pic_31__38__5F_bootloader_5F_syntax_routine_5F_declaration_i2_indexing (Lexique_piccolo_5F_lexique * inCompiler) {
  switch (select_pic_31__38__5F_bootloader_5F_syntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_noreturn COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 169)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_routine COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 172)) ;
  inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 173)) ;
  switch (select_pic_31__38__5F_bootloader_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_bank COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 182)) ;
    inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 183)) ;
    switch (select_pic_31__38__5F_bootloader_5F_syntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_preserved COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 185)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_requires COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 193)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 194)) ;
      switch (select_pic_31__38__5F_bootloader_5F_syntax_6 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 199)) ;
        inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 200)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_ensures COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 206)) ;
      inCompiler->acceptTerminal (Lexique_piccolo_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("pic18_bootloader_syntax.galgas", 207)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_terminatorDisplay (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                  const GGS_string in_inNextBlockLabel,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_terminatorDisplay (in_inNextBlockLabel, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@ipic18AbstractBlockTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint callExtensionGetter_terminatorSize (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                             const GGS_string in_inNextBlockLabel,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_terminatorSize (in_inNextBlockLabel, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @midrange_5F_declaredRoutineMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap::GGS_midrange_5F_declaredRoutineMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap::~ GGS_midrange_5F_declaredRoutineMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap::GGS_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap & GGS_midrange_5F_declaredRoutineMap::operator = (const GGS_midrange_5F_declaredRoutineMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap GGS_midrange_5F_declaredRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap GGS_midrange_5F_declaredRoutineMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_declaredRoutineMap::getter_hasKey (const GGS_string & inKey
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_midrange_5F_declaredRoutineMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                   const GGS_uint & inLevel
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_declaredRoutineMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_declaredRoutineMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_midrange_5F_declaredRoutineMap::getter_locationForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_midrange_5F_declaredRoutineMap::getter_keyList (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_declaredRoutineMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_declaredRoutineMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::performInsert (const GGS_midrange_5F_declaredRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_midrange_5F_declaredRoutineMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>
GGS_midrange_5F_declaredRoutineMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_midrange_5F_declaredRoutineMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>>
GGS_midrange_5F_declaredRoutineMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_midrange_5F_declaredRoutineMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ GGS_midrange_5F_declaredRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_midrange_5F_declaredRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_midrange_5F_declaredRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_midrange_5F_declaredRoutineMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap GGS_midrange_5F_declaredRoutineMap::class_func_mapWithMapToOverride (const GGS_midrange_5F_declaredRoutineMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_declaredRoutineMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap GGS_midrange_5F_declaredRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_declaredRoutineMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::setter_insertKey (GGS_lstring inLKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_declaredRoutineMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::method_searchKey (GGS_lstring inLKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' routine is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
  }else{
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_midrange_5F_declaredRoutineMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_declaredRoutineMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_midrange_5F_declaredRoutineMap_2E_element>> array = sortedInfoArray () ;
    GGS_midrange_5F_declaredRoutineMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_midrange_5F_declaredRoutineMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_midrange_5F_declaredRoutineMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @midrange_5F_declaredRoutineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_midrange_5F_declaredRoutineMap::DownEnumerator_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element DownEnumerator_midrange_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_midrange_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @midrange_5F_declaredRoutineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_midrange_5F_declaredRoutineMap::UpEnumerator_midrange_5F_declaredRoutineMap (const GGS_midrange_5F_declaredRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap_2E_element UpEnumerator_midrange_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_midrange_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @midrange_declaredRoutineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ("midrange_declaredRoutineMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_declaredRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_declaredRoutineMap GGS_midrange_5F_declaredRoutineMap::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_declaredRoutineMap result ;
  const GGS_midrange_5F_declaredRoutineMap * p = (const GGS_midrange_5F_declaredRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloSimpleInstruction analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSimpleInstruction (cPtr_pic_31__38_PiccoloSimpleInstruction * inObject,
                                                   const GGS_uint constin_inAccessBankSplitOffset,
                                                   const GGS_routineMap constin_inRoutineMap,
                                                   const GGS_registerTable constin_inRegisterTable,
                                                   const GGS_pic_31__38__5F_dataMap constin_inDataMap,
                                                   const GGS_constantMap constin_inConstantMap,
                                                   GGS_uint & io_ioCurrentBank,
                                                   const GGS_bool constin_inShouldPreserveBSR,
                                                   GGS_stringset & io_ioUsedRegisters,
                                                   GGS_ipic_31__38_SequentialInstruction & out_outInstruction,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outInstruction.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
    inObject->method_analyzeSimpleInstruction (constin_inAccessBankSplitOffset, constin_inRoutineMap, constin_inRegisterTable, constin_inDataMap, constin_inConstantMap, io_ioCurrentBank, constin_inShouldPreserveBSR, io_ioUsedRegisters, out_outInstruction, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction analyze'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (cPtr_pic_31__38_PiccoloInstruction * inObject,
                                  const GGS_uint constin_inAccessBankSplitOffset,
                                  GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                  const GGS_routineMap constin_inRoutineMap,
                                  const GGS_registerTable constin_inRegisterTable,
                                  const GGS_pic_31__38__5F_dataMap constin_inDataMap,
                                  const GGS_constantMap constin_inConstantMap,
                                  const GGS_pic_31__38_MacroMap constin_inMacroMap,
                                  GGS_uint & io_ioLocalLabelIndex,
                                  GGS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                  GGS_lstring & io_ioBlockLabel,
                                  GGS_string & io_ioListFileContents,
                                  GGS_uint & io_ioCurrentBank,
                                  const GGS_bool constin_inShouldPreserveBSR,
                                  const GGS_routineKind constin_inRoutineKind,
                                  GGS_stringset & io_ioUsedRegisters,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    inObject->method_analyze (constin_inAccessBankSplitOffset, io_ioGeneratedBlockList, constin_inRoutineMap, constin_inRegisterTable, constin_inDataMap, constin_inConstantMap, constin_inMacroMap, io_ioLocalLabelIndex, io_ioGeneratedInstructionList, io_ioBlockLabel, io_ioListFileContents, io_ioCurrentBank, constin_inShouldPreserveBSR, constin_inRoutineKind, io_ioUsedRegisters, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Map type @blockInstructionBlockMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap::GGS_blockInstructionBlockMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap::~ GGS_blockInstructionBlockMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap::GGS_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap & GGS_blockInstructionBlockMap::operator = (const GGS_blockInstructionBlockMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_blockInstructionBlockMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockInstructionBlockMap::getter_hasKey (const GGS_string & inKey
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockInstructionBlockMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                             const GGS_uint & inLevel
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInstructionBlockMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInstructionBlockMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_blockInstructionBlockMap::getter_locationForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_blockInstructionBlockMap::getter_keyList (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInstructionBlockMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockInstructionBlockMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::performInsert (const GGS_blockInstructionBlockMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_blockInstructionBlockMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>
GGS_blockInstructionBlockMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_blockInstructionBlockMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>>
GGS_blockInstructionBlockMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_blockInstructionBlockMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element_3F_ GGS_blockInstructionBlockMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockInstructionBlockMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_blockInstructionBlockMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockInstructionBlockMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInstructionList = info->mProperty_mInstructionList ;
      element.mProperty_mBlockTerminaisonForBlockInstruction = info->mProperty_mBlockTerminaisonForBlockInstruction ;
      element.mProperty_mEndOfBlock = info->mProperty_mEndOfBlock ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::class_func_mapWithMapToOverride (const GGS_blockInstructionBlockMap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockInstructionBlockMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_blockInstructionBlockMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_insertKey (GGS_lstring inLKey,
                                                     GGS_pic_31__38_InstructionList inArgument0,
                                                     GGS_abstractBlockTerminationForBlockInstruction inArgument1,
                                                     GGS_location inArgument2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_blockInstructionBlockMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::method_searchKey (GGS_lstring inLKey,
                                                     GGS_pic_31__38_InstructionList & outArgument0,
                                                     GGS_abstractBlockTerminationForBlockInstruction & outArgument1,
                                                     GGS_location & outArgument2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' block is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mInstructionList ;
    outArgument1 = info->mProperty_mBlockTerminaisonForBlockInstruction ;
    outArgument2 = info->mProperty_mEndOfBlock ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_blockInstructionBlockMap::getter_mInstructionListForKey (const GGS_string & inKey,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInstructionList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction GGS_blockInstructionBlockMap::getter_mBlockTerminaisonForBlockInstructionForKey (const GGS_string & inKey,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_abstractBlockTerminationForBlockInstruction result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBlockTerminaisonForBlockInstruction ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_blockInstructionBlockMap::getter_mEndOfBlockForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mEndOfBlock ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_setMInstructionListForKey (GGS_pic_31__38_InstructionList inValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockInstructionBlockMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInstructionList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_setMBlockTerminaisonForBlockInstructionForKey (GGS_abstractBlockTerminationForBlockInstruction inValue,
                                                                                         GGS_string inKey,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockInstructionBlockMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBlockTerminaisonForBlockInstruction = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::setter_setMEndOfBlockForKey (GGS_location inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockInstructionBlockMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mEndOfBlock = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_blockInstructionBlockMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInstructionList:") ;
    inArray (i COMMA_HERE)->mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBlockTerminaisonForBlockInstruction:") ;
    inArray (i COMMA_HERE)->mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mEndOfBlock:") ;
    inArray (i COMMA_HERE)->mProperty_mEndOfBlock.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInstructionBlockMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInstructionBlockMap_2E_element>> array = sortedInfoArray () ;
    GGS_blockInstructionBlockMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_blockInstructionBlockMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_blockInstructionBlockMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @blockInstructionBlockMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_blockInstructionBlockMap::DownEnumerator_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element DownEnumerator_blockInstructionBlockMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_blockInstructionBlockMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_blockInstructionBlockMap::current_mInstructionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction DownEnumerator_blockInstructionBlockMap::current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBlockTerminaisonForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_blockInstructionBlockMap::current_mEndOfBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mEndOfBlock ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @blockInstructionBlockMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_blockInstructionBlockMap::UpEnumerator_blockInstructionBlockMap (const GGS_blockInstructionBlockMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap_2E_element UpEnumerator_blockInstructionBlockMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_blockInstructionBlockMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_blockInstructionBlockMap::current_mInstructionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction UpEnumerator_blockInstructionBlockMap::current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBlockTerminaisonForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_blockInstructionBlockMap::current_mEndOfBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mEndOfBlock ;
}


//--------------------------------------------------------------------------------------------------
//     @blockInstructionBlockMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInstructionBlockMap ("blockInstructionBlockMap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInstructionBlockMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInstructionBlockMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInstructionBlockMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInstructionBlockMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInstructionBlockMap GGS_blockInstructionBlockMap::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_blockInstructionBlockMap result ;
  const GGS_blockInstructionBlockMap * p = (const GGS_blockInstructionBlockMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInstructionBlockMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInstructionBlockMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @blockInitialBankSelectionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap::GGS_blockInitialBankSelectionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap::~ GGS_blockInitialBankSelectionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap::GGS_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap & GGS_blockInitialBankSelectionMap::operator = (const GGS_blockInitialBankSelectionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockInitialBankSelectionMap::getter_hasKey (const GGS_string & inKey
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_blockInitialBankSelectionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                 const GGS_uint & inLevel
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInitialBankSelectionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInitialBankSelectionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_blockInitialBankSelectionMap::getter_locationForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_blockInitialBankSelectionMap::getter_keyList (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_blockInitialBankSelectionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockInitialBankSelectionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::performInsert (const GGS_blockInitialBankSelectionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_blockInitialBankSelectionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>
GGS_blockInitialBankSelectionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_blockInitialBankSelectionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>>
GGS_blockInitialBankSelectionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_blockInitialBankSelectionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element_3F_ GGS_blockInitialBankSelectionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_blockInitialBankSelectionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_blockInitialBankSelectionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_blockInitialBankSelectionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mInitialBankSelection = info->mProperty_mInitialBankSelection ;
      element.mProperty_mSourceBlock = info->mProperty_mSourceBlock ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::class_func_mapWithMapToOverride (const GGS_blockInitialBankSelectionMap & inMapToOverride
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_blockInitialBankSelectionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_blockInitialBankSelectionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::setter_insertKey (GGS_lstring inLKey,
                                                         GGS_uint inArgument0,
                                                         GGS_string inArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_blockInitialBankSelectionMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' block is already declared (internal error)" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::method_searchKey (GGS_lstring inLKey,
                                                         GGS_uint & outArgument0,
                                                         GGS_string & outArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' block is not declared (internal error)" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mInitialBankSelection ;
    outArgument1 = info->mProperty_mSourceBlock ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_blockInitialBankSelectionMap::getter_mInitialBankSelectionForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mInitialBankSelection ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_blockInitialBankSelectionMap::getter_mSourceBlockForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSourceBlock ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::setter_setMInitialBankSelectionForKey (GGS_uint inValue,
                                                                              GGS_string inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockInitialBankSelectionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mInitialBankSelection = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::setter_setMSourceBlockForKey (GGS_string inValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_blockInitialBankSelectionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSourceBlock = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_blockInitialBankSelectionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInitialBankSelection:") ;
    inArray (i COMMA_HERE)->mProperty_mInitialBankSelection.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSourceBlock:") ;
    inArray (i COMMA_HERE)->mProperty_mSourceBlock.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInitialBankSelectionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_blockInitialBankSelectionMap_2E_element>> array = sortedInfoArray () ;
    GGS_blockInitialBankSelectionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_blockInitialBankSelectionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_blockInitialBankSelectionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @blockInitialBankSelectionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_blockInitialBankSelectionMap::DownEnumerator_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element DownEnumerator_blockInitialBankSelectionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_blockInitialBankSelectionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_blockInitialBankSelectionMap::current_mInitialBankSelection (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitialBankSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_blockInitialBankSelectionMap::current_mSourceBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSourceBlock ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @blockInitialBankSelectionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_blockInitialBankSelectionMap::UpEnumerator_blockInitialBankSelectionMap (const GGS_blockInitialBankSelectionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap_2E_element UpEnumerator_blockInitialBankSelectionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_blockInitialBankSelectionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_blockInitialBankSelectionMap::current_mInitialBankSelection (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInitialBankSelection ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_blockInitialBankSelectionMap::current_mSourceBlock (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSourceBlock ;
}


//--------------------------------------------------------------------------------------------------
//     @blockInitialBankSelectionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ("blockInitialBankSelectionMap",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInitialBankSelectionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInitialBankSelectionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInitialBankSelectionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInitialBankSelectionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInitialBankSelectionMap GGS_blockInitialBankSelectionMap::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_blockInitialBankSelectionMap result ;
  const GGS_blockInitialBankSelectionMap * p = (const GGS_blockInitialBankSelectionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInitialBankSelectionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInitialBankSelectionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

