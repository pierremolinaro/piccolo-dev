#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
// @pic_31__38_SimpleConstantCaseItem reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_SimpleConstantCaseItem::objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem & inOperand) const {
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

GGS_pic_31__38_SimpleConstantCaseItem::GGS_pic_31__38_SimpleConstantCaseItem (void) :
GGS_pic_31__38_AbstractCaseItem () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem GGS_pic_31__38_SimpleConstantCaseItem::
init_21__21_ (const GGS_immediatExpression & in_mCaseExpression,
              const GGS_location & in_mCaseExpressionLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_SimpleConstantCaseItem * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_SimpleConstantCaseItem (inCompiler COMMA_THERE)) ;
  object->pic_31__38_SimpleConstantCaseItem_init_21__21_ (in_mCaseExpression, in_mCaseExpressionLocation, inCompiler) ;
  const GGS_pic_31__38_SimpleConstantCaseItem result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_SimpleConstantCaseItem::
pic_31__38_SimpleConstantCaseItem_init_21__21_ (const GGS_immediatExpression & in_mCaseExpression,
                                                const GGS_location & in_mCaseExpressionLocation,
                                                Compiler * /* inCompiler */) {
  mProperty_mCaseExpression = in_mCaseExpression ;
  mProperty_mCaseExpressionLocation = in_mCaseExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem::GGS_pic_31__38_SimpleConstantCaseItem (const cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) :
GGS_pic_31__38_AbstractCaseItem (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_SimpleConstantCaseItem) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem GGS_pic_31__38_SimpleConstantCaseItem::class_func_new (const GGS_immediatExpression & in_mCaseExpression,
                                                                                             const GGS_location & in_mCaseExpressionLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_SimpleConstantCaseItem result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_SimpleConstantCaseItem (in_mCaseExpression, in_mCaseExpressionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_SimpleConstantCaseItem::readProperty_mCaseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    return p->mProperty_mCaseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_SimpleConstantCaseItem::readProperty_mCaseExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    return p->mProperty_mCaseExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18SimpleConstantCaseItem class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_SimpleConstantCaseItem::cPtr_pic_31__38_SimpleConstantCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (inCompiler COMMA_THERE),
mProperty_mCaseExpression (),
mProperty_mCaseExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_SimpleConstantCaseItem::cPtr_pic_31__38_SimpleConstantCaseItem (const GGS_immediatExpression & in_mCaseExpression,
                                                                                const GGS_location & in_mCaseExpressionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (inCompiler COMMA_THERE),
mProperty_mCaseExpression (),
mProperty_mCaseExpressionLocation () {
  mProperty_mCaseExpression = in_mCaseExpression ;
  mProperty_mCaseExpressionLocation = in_mCaseExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_SimpleConstantCaseItem::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;
}

void cPtr_pic_31__38_SimpleConstantCaseItem::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18SimpleConstantCaseItem:") ;
  mProperty_mCaseExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_SimpleConstantCaseItem::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_SimpleConstantCaseItem (mProperty_mCaseExpression, mProperty_mCaseExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_SimpleConstantCaseItem::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_AbstractCaseItem::printNonNullClassInstanceProperties () ;
    mProperty_mCaseExpression.printNonNullClassInstanceProperties ("mCaseExpression") ;
    mProperty_mCaseExpressionLocation.printNonNullClassInstanceProperties ("mCaseExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18SimpleConstantCaseItem generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ("pic18SimpleConstantCaseItem",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_SimpleConstantCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_SimpleConstantCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_SimpleConstantCaseItem (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem GGS_pic_31__38_SimpleConstantCaseItem::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_SimpleConstantCaseItem result ;
  const GGS_pic_31__38_SimpleConstantCaseItem * p = (const GGS_pic_31__38_SimpleConstantCaseItem *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_SimpleConstantCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SimpleConstantCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::objectCompare (const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak & inOperand) const {
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

GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (void) :
GGS_pic_31__38_AbstractCaseItem_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem_2E_weak & GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::operator = (const GGS_pic_31__38_SimpleConstantCaseItem & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (const GGS_pic_31__38_SimpleConstantCaseItem & inSource) :
GGS_pic_31__38_AbstractCaseItem_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem_2E_weak GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_SimpleConstantCaseItem_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_SimpleConstantCaseItem result ;
  if (isValid ()) {
    const cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_SimpleConstantCaseItem (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::bang_pic_31__38_SimpleConstantCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_SimpleConstantCaseItem result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_SimpleConstantCaseItem) ;
      result = GGS_pic_31__38_SimpleConstantCaseItem ((cPtr_pic_31__38_SimpleConstantCaseItem *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18SimpleConstantCaseItem.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem_2E_weak ("pic18SimpleConstantCaseItem.weak",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_SimpleConstantCaseItem_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SimpleConstantCaseItem_2E_weak GGS_pic_31__38_SimpleConstantCaseItem_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_SimpleConstantCaseItem_2E_weak result ;
  const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak * p = (const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_SimpleConstantCaseItem_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SimpleConstantCaseItem.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_IntervalCaseItem reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_IntervalCaseItem::objectCompare (const GGS_pic_31__38_IntervalCaseItem & inOperand) const {
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

GGS_pic_31__38_IntervalCaseItem::GGS_pic_31__38_IntervalCaseItem (void) :
GGS_pic_31__38_AbstractCaseItem () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem GGS_pic_31__38_IntervalCaseItem::
init_21__21__21_ (const GGS_immediatExpression & in_mMinExpression,
                  const GGS_immediatExpression & in_mMaxExpression,
                  const GGS_location & in_mCaseExpressionLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_IntervalCaseItem * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_IntervalCaseItem (inCompiler COMMA_THERE)) ;
  object->pic_31__38_IntervalCaseItem_init_21__21__21_ (in_mMinExpression, in_mMaxExpression, in_mCaseExpressionLocation, inCompiler) ;
  const GGS_pic_31__38_IntervalCaseItem result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::
pic_31__38_IntervalCaseItem_init_21__21__21_ (const GGS_immediatExpression & in_mMinExpression,
                                              const GGS_immediatExpression & in_mMaxExpression,
                                              const GGS_location & in_mCaseExpressionLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mMinExpression = in_mMinExpression ;
  mProperty_mMaxExpression = in_mMaxExpression ;
  mProperty_mCaseExpressionLocation = in_mCaseExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem::GGS_pic_31__38_IntervalCaseItem (const cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) :
GGS_pic_31__38_AbstractCaseItem (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_IntervalCaseItem) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem GGS_pic_31__38_IntervalCaseItem::class_func_new (const GGS_immediatExpression & in_mMinExpression,
                                                                                 const GGS_immediatExpression & in_mMaxExpression,
                                                                                 const GGS_location & in_mCaseExpressionLocation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_IntervalCaseItem result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_IntervalCaseItem (in_mMinExpression, in_mMaxExpression, in_mCaseExpressionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_IntervalCaseItem::readProperty_mMinExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    return p->mProperty_mMinExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_IntervalCaseItem::readProperty_mMaxExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    return p->mProperty_mMaxExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_IntervalCaseItem::readProperty_mCaseExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    return p->mProperty_mCaseExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18IntervalCaseItem class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_IntervalCaseItem::cPtr_pic_31__38_IntervalCaseItem (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (inCompiler COMMA_THERE),
mProperty_mMinExpression (),
mProperty_mMaxExpression (),
mProperty_mCaseExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_IntervalCaseItem::cPtr_pic_31__38_IntervalCaseItem (const GGS_immediatExpression & in_mMinExpression,
                                                                    const GGS_immediatExpression & in_mMaxExpression,
                                                                    const GGS_location & in_mCaseExpressionLocation,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (inCompiler COMMA_THERE),
mProperty_mMinExpression (),
mProperty_mMaxExpression (),
mProperty_mCaseExpressionLocation () {
  mProperty_mMinExpression = in_mMinExpression ;
  mProperty_mMaxExpression = in_mMaxExpression ;
  mProperty_mCaseExpressionLocation = in_mCaseExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_IntervalCaseItem::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;
}

void cPtr_pic_31__38_IntervalCaseItem::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18IntervalCaseItem:") ;
  mProperty_mMinExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMaxExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_IntervalCaseItem::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_IntervalCaseItem (mProperty_mMinExpression, mProperty_mMaxExpression, mProperty_mCaseExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_IntervalCaseItem::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_AbstractCaseItem::printNonNullClassInstanceProperties () ;
    mProperty_mMinExpression.printNonNullClassInstanceProperties ("mMinExpression") ;
    mProperty_mMaxExpression.printNonNullClassInstanceProperties ("mMaxExpression") ;
    mProperty_mCaseExpressionLocation.printNonNullClassInstanceProperties ("mCaseExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18IntervalCaseItem generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ("pic18IntervalCaseItem",
                                                                                & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_IntervalCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_IntervalCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_IntervalCaseItem (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem GGS_pic_31__38_IntervalCaseItem::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_IntervalCaseItem result ;
  const GGS_pic_31__38_IntervalCaseItem * p = (const GGS_pic_31__38_IntervalCaseItem *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_IntervalCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IntervalCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_IntervalCaseItem_2E_weak::objectCompare (const GGS_pic_31__38_IntervalCaseItem_2E_weak & inOperand) const {
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

GGS_pic_31__38_IntervalCaseItem_2E_weak::GGS_pic_31__38_IntervalCaseItem_2E_weak (void) :
GGS_pic_31__38_AbstractCaseItem_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem_2E_weak & GGS_pic_31__38_IntervalCaseItem_2E_weak::operator = (const GGS_pic_31__38_IntervalCaseItem & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem_2E_weak::GGS_pic_31__38_IntervalCaseItem_2E_weak (const GGS_pic_31__38_IntervalCaseItem & inSource) :
GGS_pic_31__38_AbstractCaseItem_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem_2E_weak GGS_pic_31__38_IntervalCaseItem_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_IntervalCaseItem_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem GGS_pic_31__38_IntervalCaseItem_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_IntervalCaseItem result ;
  if (isValid ()) {
    const cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_IntervalCaseItem (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem GGS_pic_31__38_IntervalCaseItem_2E_weak::bang_pic_31__38_IntervalCaseItem_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_IntervalCaseItem result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_IntervalCaseItem) ;
      result = GGS_pic_31__38_IntervalCaseItem ((cPtr_pic_31__38_IntervalCaseItem *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18IntervalCaseItem.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem_2E_weak ("pic18IntervalCaseItem.weak",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_IntervalCaseItem_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_IntervalCaseItem_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_IntervalCaseItem_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IntervalCaseItem_2E_weak GGS_pic_31__38_IntervalCaseItem_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_IntervalCaseItem_2E_weak result ;
  const GGS_pic_31__38_IntervalCaseItem_2E_weak * p = (const GGS_pic_31__38_IntervalCaseItem_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_IntervalCaseItem_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IntervalCaseItem.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_CaseExpressionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_CaseExpressionList : public cCollectionElement {
  public: GGS_pic_31__38_CaseExpressionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_CaseExpressionList (const GGS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_CaseExpressionList::cCollectionElement_pic_31__38_CaseExpressionList (const GGS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseItem) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_CaseExpressionList::cCollectionElement_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCaseItem) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_CaseExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_CaseExpressionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_pic_31__38_CaseExpressionList (mObject.mProperty_mCaseItem COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_CaseExpressionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList::GGS_pic_31__38_CaseExpressionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList::GGS_pic_31__38_CaseExpressionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    const GGS_pic_31__38_CaseExpressionList_2E_element element (p->mObject.mProperty_mCaseItem) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_CaseExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_CaseExpressionList (in_mCaseItem COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_CaseExpressionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_pic_31__38_CaseExpressionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::description (String & ioString,
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
      ioString.appendString ("mCaseItem:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseItem.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_CaseExpressionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_CaseExpressionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::plusPlusAssignOperation (const GGS_pic_31__38_CaseExpressionList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::class_func_listWithValue (const GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_CaseExpressionList_2E_element element (inOperand0) ;
  GGS_pic_31__38_CaseExpressionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::addAssignOperation (const GGS_pic_31__38_AbstractCaseItem & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_CaseExpressionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::setter_append (const GGS_pic_31__38_AbstractCaseItem inOperand0,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_CaseExpressionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::setter_insertAtIndex (const GGS_pic_31__38_AbstractCaseItem inOperand0,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_CaseExpressionList_2E_element newElement (inOperand0) ;
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

void GGS_pic_31__38_CaseExpressionList::setter_removeAtIndex (GGS_pic_31__38_AbstractCaseItem & outOperand0,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mCaseItem ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::setter_popFirst (GGS_pic_31__38_AbstractCaseItem & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseItem ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::setter_popLast (GGS_pic_31__38_AbstractCaseItem & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseItem ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::method_first (GGS_pic_31__38_AbstractCaseItem & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mCaseItem ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::method_last (GGS_pic_31__38_AbstractCaseItem & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mCaseItem ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::add_operation (const GGS_pic_31__38_CaseExpressionList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
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

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
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

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList::plusAssignOperation (const GGS_pic_31__38_CaseExpressionList inList,
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

void GGS_pic_31__38_CaseExpressionList::setter_setMCaseItemAtIndex (GGS_pic_31__38_AbstractCaseItem inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseItem = inOperand ;
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
  
GGS_pic_31__38_AbstractCaseItem GGS_pic_31__38_CaseExpressionList::getter_mCaseItemAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_AbstractCaseItem result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseItem ;
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
// Down Enumerator for @pic_31__38_CaseExpressionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_CaseExpressionList::DownEnumerator_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element DownEnumerator_pic_31__38_CaseExpressionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem DownEnumerator_pic_31__38_CaseExpressionList::current_mCaseItem (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseItem ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_CaseExpressionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_CaseExpressionList::UpEnumerator_pic_31__38_CaseExpressionList (const GGS_pic_31__38_CaseExpressionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element UpEnumerator_pic_31__38_CaseExpressionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AbstractCaseItem UpEnumerator_pic_31__38_CaseExpressionList::current_mCaseItem (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseItem ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18CaseExpressionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ("pic18CaseExpressionList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_CaseExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_CaseExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_CaseExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_CaseExpressionList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_CaseExpressionList result ;
  const GGS_pic_31__38_CaseExpressionList * p = (const GGS_pic_31__38_CaseExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_CaseExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18CaseExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_SwitchInstructionCaseList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_SwitchInstructionCaseList : public cCollectionElement {
  public: GGS_pic_31__38_SwitchInstructionCaseList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GGS_location & in_mStartOfCase,
                                                                   const GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_SwitchInstructionCaseList::cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GGS_location & in_mStartOfCase,
                                                                                                                  const GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                                                                  const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartOfCase, in_mCaseExpressionList, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_SwitchInstructionCaseList::cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStartOfCase, inElement.mProperty_mCaseExpressionList, inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_pic_31__38_SwitchInstructionCaseList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_pic_31__38_SwitchInstructionCaseList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_pic_31__38_SwitchInstructionCaseList (mObject.mProperty_mStartOfCase, mObject.mProperty_mCaseExpressionList, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_SwitchInstructionCaseList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList::GGS_pic_31__38_SwitchInstructionCaseList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList::GGS_pic_31__38_SwitchInstructionCaseList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    const GGS_pic_31__38_SwitchInstructionCaseList_2E_element element (p->mObject.mProperty_mStartOfCase, p->mObject.mProperty_mCaseExpressionList, p->mObject.mProperty_mInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_location & in_mStartOfCase,
                                                                          const GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                          const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList (in_mStartOfCase, in_mCaseExpressionList, in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_SwitchInstructionCaseList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_pic_31__38_SwitchInstructionCaseList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::description (String & ioString,
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
      ioString.appendString ("mStartOfCase:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mStartOfCase.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCaseExpressionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCaseExpressionList.description (ioString, inIndentation + 1) ;
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

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::plusPlusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::class_func_listWithValue (const GGS_location & inOperand0,
                                                                                                             const GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                             const GGS_pic_31__38_InstructionList & inOperand2
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_SwitchInstructionCaseList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::addAssignOperation (const GGS_location & inOperand0,
                                                                   const GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                   const GGS_pic_31__38_InstructionList & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_SwitchInstructionCaseList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::setter_append (const GGS_location inOperand0,
                                                              const GGS_pic_31__38_CaseExpressionList inOperand1,
                                                              const GGS_pic_31__38_InstructionList inOperand2,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_SwitchInstructionCaseList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::setter_insertAtIndex (const GGS_location inOperand0,
                                                                     const GGS_pic_31__38_CaseExpressionList inOperand1,
                                                                     const GGS_pic_31__38_InstructionList inOperand2,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_SwitchInstructionCaseList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_removeAtIndex (GGS_location & outOperand0,
                                                                     GGS_pic_31__38_CaseExpressionList & outOperand1,
                                                                     GGS_pic_31__38_InstructionList & outOperand2,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mStartOfCase ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mCaseExpressionList ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_popFirst (GGS_location & outOperand0,
                                                                GGS_pic_31__38_CaseExpressionList & outOperand1,
                                                                GGS_pic_31__38_InstructionList & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStartOfCase ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCaseExpressionList ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_popLast (GGS_location & outOperand0,
                                                               GGS_pic_31__38_CaseExpressionList & outOperand1,
                                                               GGS_pic_31__38_InstructionList & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStartOfCase ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCaseExpressionList ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::method_first (GGS_location & outOperand0,
                                                             GGS_pic_31__38_CaseExpressionList & outOperand1,
                                                             GGS_pic_31__38_InstructionList & outOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mStartOfCase ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCaseExpressionList ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::method_last (GGS_location & outOperand0,
                                                            GGS_pic_31__38_CaseExpressionList & outOperand1,
                                                            GGS_pic_31__38_InstructionList & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mStartOfCase ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCaseExpressionList ;
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

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::add_operation (const GGS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
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

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
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

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList::plusAssignOperation (const GGS_pic_31__38_SwitchInstructionCaseList inList,
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_setMStartOfCaseAtIndex (GGS_location inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mStartOfCase = inOperand ;
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
  
GGS_location GGS_pic_31__38_SwitchInstructionCaseList::getter_mStartOfCaseAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mStartOfCase ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_setMCaseExpressionListAtIndex (GGS_pic_31__38_CaseExpressionList inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseExpressionList = inOperand ;
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
  
GGS_pic_31__38_CaseExpressionList GGS_pic_31__38_SwitchInstructionCaseList::getter_mCaseExpressionListAtIndex (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_CaseExpressionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCaseExpressionList ;
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

void GGS_pic_31__38_SwitchInstructionCaseList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
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
  
GGS_pic_31__38_InstructionList GGS_pic_31__38_SwitchInstructionCaseList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @pic_31__38_SwitchInstructionCaseList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_SwitchInstructionCaseList::DownEnumerator_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList_2E_element DownEnumerator_pic_31__38_SwitchInstructionCaseList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_pic_31__38_SwitchInstructionCaseList::current_mStartOfCase (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStartOfCase ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList DownEnumerator_pic_31__38_SwitchInstructionCaseList::current_mCaseExpressionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_SwitchInstructionCaseList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_SwitchInstructionCaseList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_SwitchInstructionCaseList::UpEnumerator_pic_31__38_SwitchInstructionCaseList (const GGS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList_2E_element UpEnumerator_pic_31__38_SwitchInstructionCaseList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_pic_31__38_SwitchInstructionCaseList::current_mStartOfCase (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mStartOfCase ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList UpEnumerator_pic_31__38_SwitchInstructionCaseList::current_mCaseExpressionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCaseExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_SwitchInstructionCaseList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18SwitchInstructionCaseList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ("pic18SwitchInstructionCaseList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_SwitchInstructionCaseList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_SwitchInstructionCaseList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_SwitchInstructionCaseList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_SwitchInstructionCaseList::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_SwitchInstructionCaseList result ;
  const GGS_pic_31__38_SwitchInstructionCaseList * p = (const GGS_pic_31__38_SwitchInstructionCaseList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_SwitchInstructionCaseList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SwitchInstructionCaseList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_switch reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_switch::objectCompare (const GGS_pic_31__38_Instruction_5F_switch & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_switch::GGS_pic_31__38_Instruction_5F_switch (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch GGS_pic_31__38_Instruction_5F_switch::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                      const GGS_location & in_mElseBranchStartLocation,
                      const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_switch * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_switch (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_switch_init_21__21__21__21_ (in_mInstructionLocation, in_mCaseList, in_mElseBranchStartLocation, in_mElseInstructionList, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_switch result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::
pic_31__38_Instruction_5F_switch_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                       const GGS_location & in_mElseBranchStartLocation,
                                                       const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCaseList = in_mCaseList ;
  mProperty_mElseBranchStartLocation = in_mElseBranchStartLocation ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch::GGS_pic_31__38_Instruction_5F_switch (const cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_switch) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch GGS_pic_31__38_Instruction_5F_switch::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                                                           const GGS_location & in_mElseBranchStartLocation,
                                                                                           const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_switch result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_Instruction_5F_switch (in_mInstructionLocation, in_mCaseList, in_mElseBranchStartLocation, in_mElseInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList GGS_pic_31__38_Instruction_5F_switch::readProperty_mCaseList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_SwitchInstructionCaseList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    return p->mProperty_mCaseList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_Instruction_5F_switch::readProperty_mElseBranchStartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    return p->mProperty_mElseBranchStartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_Instruction_5F_switch::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_switch class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_switch::cPtr_pic_31__38_Instruction_5F_switch (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mCaseList (),
mProperty_mElseBranchStartLocation (),
mProperty_mElseInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_switch::cPtr_pic_31__38_Instruction_5F_switch (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                                              const GGS_location & in_mElseBranchStartLocation,
                                                                              const GGS_pic_31__38_InstructionList & in_mElseInstructionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mCaseList (),
mProperty_mElseBranchStartLocation (),
mProperty_mElseInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCaseList = in_mCaseList ;
  mProperty_mElseBranchStartLocation = in_mElseBranchStartLocation ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_switch::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

void cPtr_pic_31__38_Instruction_5F_switch::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_switch:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseBranchStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_switch::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_switch (mProperty_mInstructionLocation, mProperty_mCaseList, mProperty_mElseBranchStartLocation, mProperty_mElseInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_switch::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mCaseList.printNonNullClassInstanceProperties ("mCaseList") ;
    mProperty_mElseBranchStartLocation.printNonNullClassInstanceProperties ("mElseBranchStartLocation") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_switch generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ("pic18Instruction_switch",
                                                                                     & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_switch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_switch::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_switch (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch GGS_pic_31__38_Instruction_5F_switch::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_switch result ;
  const GGS_pic_31__38_Instruction_5F_switch * p = (const GGS_pic_31__38_Instruction_5F_switch *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_switch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_switch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_switch_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_switch_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_switch_2E_weak::GGS_pic_31__38_Instruction_5F_switch_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch_2E_weak & GGS_pic_31__38_Instruction_5F_switch_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_switch & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch_2E_weak::GGS_pic_31__38_Instruction_5F_switch_2E_weak (const GGS_pic_31__38_Instruction_5F_switch & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch_2E_weak GGS_pic_31__38_Instruction_5F_switch_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_switch_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch GGS_pic_31__38_Instruction_5F_switch_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_switch result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_switch (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch GGS_pic_31__38_Instruction_5F_switch_2E_weak::bang_pic_31__38_Instruction_5F_switch_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_switch result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_switch) ;
      result = GGS_pic_31__38_Instruction_5F_switch ((cPtr_pic_31__38_Instruction_5F_switch *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_switch.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch_2E_weak ("pic18Instruction_switch.weak",
                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_switch_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_switch_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_switch_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_switch_2E_weak GGS_pic_31__38_Instruction_5F_switch_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_switch_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_switch_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_switch_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_switch_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_switch.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @caseConstantMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap::GGS_caseConstantMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap::~ GGS_caseConstantMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap::GGS_caseConstantMap (const GGS_caseConstantMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap & GGS_caseConstantMap::operator = (const GGS_caseConstantMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap GGS_caseConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_caseConstantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap GGS_caseConstantMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_caseConstantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_caseConstantMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_caseConstantMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_caseConstantMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_caseConstantMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_caseConstantMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_caseConstantMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_caseConstantMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_caseConstantMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap::performInsert (const GGS_caseConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_caseConstantMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>
GGS_caseConstantMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_caseConstantMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>>
GGS_caseConstantMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_caseConstantMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element_3F_ GGS_caseConstantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_caseConstantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_caseConstantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_caseConstantMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap GGS_caseConstantMap::class_func_mapWithMapToOverride (const GGS_caseConstantMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_caseConstantMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_caseConstantMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap GGS_caseConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_caseConstantMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_caseConstantMap::setter_insertKey (GGS_lstring inLKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_caseConstantMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_caseConstantMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>> & inArray,
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

void GGS_caseConstantMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_caseConstantMap_2E_element>> array = sortedInfoArray () ;
    GGS_caseConstantMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_caseConstantMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_caseConstantMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @caseConstantMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_caseConstantMap::DownEnumerator_caseConstantMap (const GGS_caseConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element DownEnumerator_caseConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_caseConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @caseConstantMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_caseConstantMap::UpEnumerator_caseConstantMap (const GGS_caseConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap_2E_element UpEnumerator_caseConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_caseConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @caseConstantMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_caseConstantMap ("caseConstantMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_caseConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_caseConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_caseConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_caseConstantMap GGS_caseConstantMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_caseConstantMap result ;
  const GGS_caseConstantMap * p = (const GGS_caseConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_caseConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("caseConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18AbstractCaseItem analyzeCaseItem'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeCaseItem (cPtr_pic_31__38_AbstractCaseItem * inObject,
                                          const GGS_registerTable constin_inRegisterTable,
                                          const GGS_constantMap constin_inConstantMap,
                                          const GGS_lstring constin_inConditionTrueLabel,
                                          const GGS_string constin_inIndexForLabels,
                                          GGS_stringset & io_ioUsedRegisters,
                                          GGS_caseConstantMap & io_ioCaseConstantMap,
                                          GGS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                          GGS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                          GGS_lstring & io_ioBlockLabel,
                                          GGS_sint_36__34_ & io_ioLastComparisonValue,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_AbstractCaseItem) ;
    inObject->method_analyzeCaseItem (constin_inRegisterTable, constin_inConstantMap, constin_inConditionTrueLabel, constin_inIndexForLabels, io_ioUsedRegisters, io_ioCaseConstantMap, io_ioGeneratedInstructionList, io_ioGeneratedBlockList, io_ioBlockLabel, io_ioLastComparisonValue, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Map type @pic_31__38__5F_dataMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap::GGS_pic_31__38__5F_dataMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap::~ GGS_pic_31__38__5F_dataMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap::GGS_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap & GGS_pic_31__38__5F_dataMap::operator = (const GGS_pic_31__38__5F_dataMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataMap::getter_hasKey (const GGS_string & inKey
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                           const GGS_uint & inLevel
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38__5F_dataMap::getter_locationForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_pic_31__38__5F_dataMap::getter_keyList (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::performInsert (const GGS_pic_31__38__5F_dataMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>
GGS_pic_31__38__5F_dataMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_pic_31__38__5F_dataMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>>
GGS_pic_31__38__5F_dataMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_pic_31__38__5F_dataMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element_3F_ GGS_pic_31__38__5F_dataMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_pic_31__38__5F_dataMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_pic_31__38__5F_dataMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mData = info->mProperty_mData ;
      element.mProperty_mIsData_38_ = info->mProperty_mIsData_38_ ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::class_func_mapWithMapToOverride (const GGS_pic_31__38__5F_dataMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::setter_insertKey (GGS_lstring inLKey,
                                                   GGS_uintlist inArgument0,
                                                   GGS_bool inArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38__5F_dataMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::method_searchKey (GGS_lstring inLKey,
                                                   GGS_uintlist & outArgument0,
                                                   GGS_bool & outArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' data is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mData ;
    outArgument1 = info->mProperty_mIsData_38_ ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_pic_31__38__5F_dataMap::getter_mDataForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mData ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataMap::getter_mIsData_38_ForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsData_38_ ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::setter_setMDataForKey (GGS_uintlist inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mData = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::setter_setMIsData_38_ForKey (GGS_bool inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsData_38_ = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_pic_31__38__5F_dataMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> & inArray,
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
    ioString.appendString ("mData:") ;
    inArray (i COMMA_HERE)->mProperty_mData.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsData8:") ;
    inArray (i COMMA_HERE)->mProperty_mIsData_38_.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataMap_2E_element>> array = sortedInfoArray () ;
    GGS_pic_31__38__5F_dataMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_pic_31__38__5F_dataMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @pic_31__38__5F_dataMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38__5F_dataMap::DownEnumerator_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element DownEnumerator_pic_31__38__5F_dataMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38__5F_dataMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_pic_31__38__5F_dataMap::current_mData (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mData ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_pic_31__38__5F_dataMap::current_mIsData_38_ (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsData_38_ ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @pic_31__38__5F_dataMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38__5F_dataMap::UpEnumerator_pic_31__38__5F_dataMap (const GGS_pic_31__38__5F_dataMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap_2E_element UpEnumerator_pic_31__38__5F_dataMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38__5F_dataMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_pic_31__38__5F_dataMap::current_mData (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mData ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_pic_31__38__5F_dataMap::current_mIsData_38_ (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsData_38_ ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18_dataMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ("pic18_dataMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataMap GGS_pic_31__38__5F_dataMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataMap result ;
  const GGS_pic_31__38__5F_dataMap * p = (const GGS_pic_31__38__5F_dataMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_SequentialInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SequentialInstruction::objectCompare (const GGS_ipic_31__38_SequentialInstruction & inOperand) const {
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

GGS_ipic_31__38_SequentialInstruction::GGS_ipic_31__38_SequentialInstruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_ipic_31__38_SequentialInstruction::
ipic_31__38_SequentialInstruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction::GGS_ipic_31__38_SequentialInstruction (const cPtr_ipic_31__38_SequentialInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_SequentialInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_ipic_31__38_SequentialInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ipic_31__38_SequentialInstruction * p = (cPtr_ipic_31__38_SequentialInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_SequentialInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18SequentialInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SequentialInstruction::cPtr_ipic_31__38_SequentialInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SequentialInstruction::cPtr_ipic_31__38_SequentialInstruction (const GGS_location & in_mInstructionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18SequentialInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ("ipic18SequentialInstruction",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SequentialInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SequentialInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SequentialInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstruction::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction result ;
  const GGS_ipic_31__38_SequentialInstruction * p = (const GGS_ipic_31__38_SequentialInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SequentialInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SequentialInstruction_2E_weak::objectCompare (const GGS_ipic_31__38_SequentialInstruction_2E_weak & inOperand) const {
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

GGS_ipic_31__38_SequentialInstruction_2E_weak::GGS_ipic_31__38_SequentialInstruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak & GGS_ipic_31__38_SequentialInstruction_2E_weak::operator = (const GGS_ipic_31__38_SequentialInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak::GGS_ipic_31__38_SequentialInstruction_2E_weak (const GGS_ipic_31__38_SequentialInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak GGS_ipic_31__38_SequentialInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstruction_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_SequentialInstruction result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_SequentialInstruction * p = (cPtr_ipic_31__38_SequentialInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_SequentialInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstruction_2E_weak::bang_ipic_31__38_SequentialInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_SequentialInstruction) ;
      result = GGS_ipic_31__38_SequentialInstruction ((cPtr_ipic_31__38_SequentialInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18SequentialInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak ("ipic18SequentialInstruction.weak",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SequentialInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SequentialInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SequentialInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction_2E_weak GGS_ipic_31__38_SequentialInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction_2E_weak result ;
  const GGS_ipic_31__38_SequentialInstruction_2E_weak * p = (const GGS_ipic_31__38_SequentialInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SequentialInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ipic_31__38_SequentialInstructionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ipic_31__38_SequentialInstructionList : public cCollectionElement {
  public: GGS_ipic_31__38_SequentialInstructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                    const GGS_uint & in_mMin,
                                                                    const GGS_uint & in_mMax
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_SequentialInstructionList::cCollectionElement_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                                                    const GGS_uint & in_mMin,
                                                                                                                    const GGS_uint & in_mMax
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction, in_mMin, in_mMax) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_SequentialInstructionList::cCollectionElement_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction, inElement.mProperty_mMin, inElement.mProperty_mMax) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ipic_31__38_SequentialInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ipic_31__38_SequentialInstructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ipic_31__38_SequentialInstructionList (mObject.mProperty_mInstruction, mObject.mProperty_mMin, mObject.mProperty_mMax COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ipic_31__38_SequentialInstructionList
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList::GGS_ipic_31__38_SequentialInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList::GGS_ipic_31__38_SequentialInstructionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    const GGS_ipic_31__38_SequentialInstructionList_2E_element element (p->mObject.mProperty_mInstruction, p->mObject.mProperty_mMin, p->mObject.mProperty_mMax) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GGS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                           const GGS_uint & in_mMin,
                                                                           const GGS_uint & in_mMax
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ipic_31__38_SequentialInstructionList (in_mInstruction, in_mMin, in_mMax COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38_SequentialInstructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_ipic_31__38_SequentialInstructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::description (String & ioString,
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
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mMin:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mMin.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mMax:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mMax.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::plusPlusAssignOperation (const GGS_ipic_31__38_SequentialInstructionList_2E_element & inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::class_func_listWithValue (const GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                               const GGS_uint & inOperand1,
                                                                                                               const GGS_uint & inOperand2
                                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstructionList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_ipic_31__38_SequentialInstructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::addAssignOperation (const GGS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                    const GGS_uint & inOperand1,
                                                                    const GGS_uint & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstructionList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::setter_append (const GGS_ipic_31__38_SequentialInstruction inOperand0,
                                                               const GGS_uint inOperand1,
                                                               const GGS_uint inOperand2,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstructionList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::setter_insertAtIndex (const GGS_ipic_31__38_SequentialInstruction inOperand0,
                                                                      const GGS_uint inOperand1,
                                                                      const GGS_uint inOperand2,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_SequentialInstructionList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_ipic_31__38_SequentialInstructionList::setter_removeAtIndex (GGS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                      GGS_uint & outOperand1,
                                                                      GGS_uint & outOperand2,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mMin ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mMax ;
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

void GGS_ipic_31__38_SequentialInstructionList::setter_popFirst (GGS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                 GGS_uint & outOperand1,
                                                                 GGS_uint & outOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mMin ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mMax ;
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

void GGS_ipic_31__38_SequentialInstructionList::setter_popLast (GGS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                GGS_uint & outOperand1,
                                                                GGS_uint & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mMin ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mMax ;
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

void GGS_ipic_31__38_SequentialInstructionList::method_first (GGS_ipic_31__38_SequentialInstruction & outOperand0,
                                                              GGS_uint & outOperand1,
                                                              GGS_uint & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mMin ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mMax ;
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

void GGS_ipic_31__38_SequentialInstructionList::method_last (GGS_ipic_31__38_SequentialInstruction & outOperand0,
                                                             GGS_uint & outOperand1,
                                                             GGS_uint & outOperand2,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mMin ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mMax ;
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

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::add_operation (const GGS_ipic_31__38_SequentialInstructionList & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstructionList result ;
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

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::subList (const int32_t inStart,
                                                                                              const int32_t inLength,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstructionList result ;
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

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_SequentialInstructionList::plusAssignOperation (const GGS_ipic_31__38_SequentialInstructionList inList,
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

void GGS_ipic_31__38_SequentialInstructionList::setter_setMInstructionAtIndex (GGS_ipic_31__38_SequentialInstruction inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
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
  
GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38_SequentialInstructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SequentialInstruction result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
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

void GGS_ipic_31__38_SequentialInstructionList::setter_setMMinAtIndex (GGS_uint inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mMin = inOperand ;
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
  
GGS_uint GGS_ipic_31__38_SequentialInstructionList::getter_mMinAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mMin ;
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

void GGS_ipic_31__38_SequentialInstructionList::setter_setMMaxAtIndex (GGS_uint inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mMax = inOperand ;
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
  
GGS_uint GGS_ipic_31__38_SequentialInstructionList::getter_mMaxAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mMax ;
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
// Down Enumerator for @ipic_31__38_SequentialInstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ipic_31__38_SequentialInstructionList::DownEnumerator_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList_2E_element DownEnumerator_ipic_31__38_SequentialInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction DownEnumerator_ipic_31__38_SequentialInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ipic_31__38_SequentialInstructionList::current_mMin (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMin ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_ipic_31__38_SequentialInstructionList::current_mMax (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMax ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ipic_31__38_SequentialInstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ipic_31__38_SequentialInstructionList::UpEnumerator_ipic_31__38_SequentialInstructionList (const GGS_ipic_31__38_SequentialInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList_2E_element UpEnumerator_ipic_31__38_SequentialInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction UpEnumerator_ipic_31__38_SequentialInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ipic_31__38_SequentialInstructionList::current_mMin (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMin ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_ipic_31__38_SequentialInstructionList::current_mMax (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mMax ;
}




//--------------------------------------------------------------------------------------------------
//     @ipic18SequentialInstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ("ipic18SequentialInstructionList",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SequentialInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SequentialInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SequentialInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38_SequentialInstructionList::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstructionList result ;
  const GGS_ipic_31__38_SequentialInstructionList * p = (const GGS_ipic_31__38_SequentialInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SequentialInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_AbstractBlockTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_AbstractBlockTerminator::objectCompare (const GGS_ipic_31__38_AbstractBlockTerminator & inOperand) const {
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

GGS_ipic_31__38_AbstractBlockTerminator::GGS_ipic_31__38_AbstractBlockTerminator (void) :
AC_GALGAS_reference_class () {
}


void cPtr_ipic_31__38_AbstractBlockTerminator::
ipic_31__38_AbstractBlockTerminator_init_21_ (const GGS_location & in_mInstructionLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator::GGS_ipic_31__38_AbstractBlockTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_AbstractBlockTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_ipic_31__38_AbstractBlockTerminator::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ipic_31__38_AbstractBlockTerminator * p = (cPtr_ipic_31__38_AbstractBlockTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18AbstractBlockTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractBlockTerminator::cPtr_ipic_31__38_AbstractBlockTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractBlockTerminator::cPtr_ipic_31__38_AbstractBlockTerminator (const GGS_location & in_mInstructionLocation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18AbstractBlockTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ("ipic18AbstractBlockTerminator",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_AbstractBlockTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_AbstractBlockTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_AbstractBlockTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator GGS_ipic_31__38_AbstractBlockTerminator::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator result ;
  const GGS_ipic_31__38_AbstractBlockTerminator * p = (const GGS_ipic_31__38_AbstractBlockTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_AbstractBlockTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractBlockTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak & GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::operator = (const GGS_ipic_31__38_AbstractBlockTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (const GGS_ipic_31__38_AbstractBlockTerminator & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_AbstractBlockTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_AbstractBlockTerminator * p = (cPtr_ipic_31__38_AbstractBlockTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_AbstractBlockTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::bang_ipic_31__38_AbstractBlockTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_AbstractBlockTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_AbstractBlockTerminator) ;
      result = GGS_ipic_31__38_AbstractBlockTerminator ((cPtr_ipic_31__38_AbstractBlockTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18AbstractBlockTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak ("ipic18AbstractBlockTerminator.weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractBlockTerminator_2E_weak GGS_ipic_31__38_AbstractBlockTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractBlockTerminator_2E_weak result ;
  const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak * p = (const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_AbstractBlockTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractBlockTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ipic_31__38_BlockList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ipic_31__38_BlockList : public cCollectionElement {
  public: GGS_ipic_31__38_BlockList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ipic_31__38_BlockList (const GGS_ipic_31__38_Block & in_mBlock
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_BlockList::cCollectionElement_ipic_31__38_BlockList (const GGS_ipic_31__38_Block & in_mBlock
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBlock) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_BlockList::cCollectionElement_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBlock) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ipic_31__38_BlockList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ipic_31__38_BlockList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ipic_31__38_BlockList (mObject.mProperty_mBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ipic_31__38_BlockList
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList::GGS_ipic_31__38_BlockList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList::GGS_ipic_31__38_BlockList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    const GGS_ipic_31__38_BlockList_2E_element element (p->mObject.mProperty_mBlock) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_ipic_31__38_Block & in_mBlock
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_BlockList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ipic_31__38_BlockList (in_mBlock COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38_BlockList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_ipic_31__38_BlockList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::description (String & ioString,
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
      ioString.appendString ("mBlock:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBlock.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::plusPlusAssignOperation (const GGS_ipic_31__38_BlockList_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::class_func_listWithValue (const GGS_ipic_31__38_Block & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_BlockList_2E_element element (inOperand0) ;
  GGS_ipic_31__38_BlockList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::addAssignOperation (const GGS_ipic_31__38_Block & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_BlockList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::setter_append (const GGS_ipic_31__38_Block inOperand0,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_BlockList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::setter_insertAtIndex (const GGS_ipic_31__38_Block inOperand0,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_ipic_31__38_BlockList_2E_element newElement (inOperand0) ;
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

void GGS_ipic_31__38_BlockList::setter_removeAtIndex (GGS_ipic_31__38_Block & outOperand0,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBlock ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::setter_popFirst (GGS_ipic_31__38_Block & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBlock ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::setter_popLast (GGS_ipic_31__38_Block & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBlock ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::method_first (GGS_ipic_31__38_Block & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBlock ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::method_last (GGS_ipic_31__38_Block & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBlock ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::add_operation (const GGS_ipic_31__38_BlockList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
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

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
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

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_BlockList::plusAssignOperation (const GGS_ipic_31__38_BlockList inList,
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

void GGS_ipic_31__38_BlockList::setter_setMBlockAtIndex (GGS_ipic_31__38_Block inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBlock = inOperand ;
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
  
GGS_ipic_31__38_Block GGS_ipic_31__38_BlockList::getter_mBlockAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_Block result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBlock ;
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
// Down Enumerator for @ipic_31__38_BlockList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ipic_31__38_BlockList::DownEnumerator_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element DownEnumerator_ipic_31__38_BlockList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block DownEnumerator_ipic_31__38_BlockList::current_mBlock (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlock ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ipic_31__38_BlockList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ipic_31__38_BlockList::UpEnumerator_ipic_31__38_BlockList (const GGS_ipic_31__38_BlockList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList_2E_element UpEnumerator_ipic_31__38_BlockList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_Block UpEnumerator_ipic_31__38_BlockList::current_mBlock (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlock ;
}




//--------------------------------------------------------------------------------------------------
//     @ipic18BlockList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList ("ipic18BlockList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_BlockList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_BlockList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_BlockList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList GGS_ipic_31__38_BlockList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_BlockList result ;
  const GGS_ipic_31__38_BlockList * p = (const GGS_ipic_31__38_BlockList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_BlockList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18BlockList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_SingleInstructionTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SingleInstructionTerminator::objectCompare (const GGS_ipic_31__38_SingleInstructionTerminator & inOperand) const {
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

GGS_ipic_31__38_SingleInstructionTerminator::GGS_ipic_31__38_SingleInstructionTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}


void cPtr_ipic_31__38_SingleInstructionTerminator::
ipic_31__38_SingleInstructionTerminator_init_21_ (const GGS_location & in_mInstructionLocation,
                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator::GGS_ipic_31__38_SingleInstructionTerminator (const cPtr_ipic_31__38_SingleInstructionTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_SingleInstructionTerminator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18SingleInstructionTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SingleInstructionTerminator::cPtr_ipic_31__38_SingleInstructionTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SingleInstructionTerminator::cPtr_ipic_31__38_SingleInstructionTerminator (const GGS_location & in_mInstructionLocation,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18SingleInstructionTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ("ipic18SingleInstructionTerminator",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SingleInstructionTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SingleInstructionTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SingleInstructionTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_SingleInstructionTerminator::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SingleInstructionTerminator result ;
  const GGS_ipic_31__38_SingleInstructionTerminator * p = (const GGS_ipic_31__38_SingleInstructionTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SingleInstructionTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SingleInstructionTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak & GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::operator = (const GGS_ipic_31__38_SingleInstructionTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (const GGS_ipic_31__38_SingleInstructionTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_SingleInstructionTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_SingleInstructionTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_SingleInstructionTerminator * p = (cPtr_ipic_31__38_SingleInstructionTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_SingleInstructionTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::bang_ipic_31__38_SingleInstructionTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_SingleInstructionTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_SingleInstructionTerminator) ;
      result = GGS_ipic_31__38_SingleInstructionTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18SingleInstructionTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak ("ipic18SingleInstructionTerminator.weak",
                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator_2E_weak GGS_ipic_31__38_SingleInstructionTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_SingleInstructionTerminator_2E_weak result ;
  const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak * p = (const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_SingleInstructionTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SingleInstructionTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ReturnTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ReturnTerminator::objectCompare (const GGS_ipic_31__38_ReturnTerminator & inOperand) const {
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

GGS_ipic_31__38_ReturnTerminator::GGS_ipic_31__38_ReturnTerminator (void) :
GGS_ipic_31__38_SingleInstructionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_ReturnTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_ReturnTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_ReturnTerminator_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_ipic_31__38_ReturnTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::
ipic_31__38_ReturnTerminator_init_21_ (const GGS_location & in_mInstructionLocation,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator::GGS_ipic_31__38_ReturnTerminator (const cPtr_ipic_31__38_ReturnTerminator * inSourcePtr) :
GGS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ReturnTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ReturnTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ReturnTerminator (in_mInstructionLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ReturnTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ReturnTerminator::cPtr_ipic_31__38_ReturnTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ReturnTerminator::cPtr_ipic_31__38_ReturnTerminator (const GGS_location & in_mInstructionLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_ReturnTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;
}

void cPtr_ipic_31__38_ReturnTerminator::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18ReturnTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ReturnTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ReturnTerminator (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ReturnTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18ReturnTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ("ipic18ReturnTerminator",
                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ReturnTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ReturnTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ReturnTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ReturnTerminator result ;
  const GGS_ipic_31__38_ReturnTerminator * p = (const GGS_ipic_31__38_ReturnTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ReturnTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ReturnTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ReturnTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ReturnTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_ReturnTerminator_2E_weak::GGS_ipic_31__38_ReturnTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak & GGS_ipic_31__38_ReturnTerminator_2E_weak::operator = (const GGS_ipic_31__38_ReturnTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak::GGS_ipic_31__38_ReturnTerminator_2E_weak (const GGS_ipic_31__38_ReturnTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak GGS_ipic_31__38_ReturnTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ReturnTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ReturnTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ReturnTerminator * p = (cPtr_ipic_31__38_ReturnTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ReturnTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator GGS_ipic_31__38_ReturnTerminator_2E_weak::bang_ipic_31__38_ReturnTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ReturnTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ReturnTerminator) ;
      result = GGS_ipic_31__38_ReturnTerminator ((cPtr_ipic_31__38_ReturnTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ReturnTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2E_weak ("ipic18ReturnTerminator.weak",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ReturnTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ReturnTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ReturnTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ReturnTerminator_2E_weak GGS_ipic_31__38_ReturnTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ReturnTerminator_2E_weak result ;
  const GGS_ipic_31__38_ReturnTerminator_2E_weak * p = (const GGS_ipic_31__38_ReturnTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ReturnTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ReturnTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_RetlwTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RetlwTerminator::objectCompare (const GGS_ipic_31__38_RetlwTerminator & inOperand) const {
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

GGS_ipic_31__38_RetlwTerminator::GGS_ipic_31__38_RetlwTerminator (void) :
GGS_ipic_31__38_SingleInstructionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_uint & in_mLiteralValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_RetlwTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_RetlwTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_RetlwTerminator_init_21__21_ (in_mInstructionLocation, in_mLiteralValue, inCompiler) ;
  const GGS_ipic_31__38_RetlwTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::
ipic_31__38_RetlwTerminator_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                          const GGS_uint & in_mLiteralValue,
                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator::GGS_ipic_31__38_RetlwTerminator (const cPtr_ipic_31__38_RetlwTerminator * inSourcePtr) :
GGS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_RetlwTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                 const GGS_uint & in_mLiteralValue,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetlwTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_RetlwTerminator (in_mInstructionLocation, in_mLiteralValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38_RetlwTerminator::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38_RetlwTerminator * p = (cPtr_ipic_31__38_RetlwTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetlwTerminator) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18RetlwTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetlwTerminator::cPtr_ipic_31__38_RetlwTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (inCompiler COMMA_THERE),
mProperty_mLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetlwTerminator::cPtr_ipic_31__38_RetlwTerminator (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_uint & in_mLiteralValue,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLiteralValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_RetlwTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;
}

void cPtr_ipic_31__38_RetlwTerminator::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18RetlwTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_RetlwTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_RetlwTerminator (mProperty_mInstructionLocation, mProperty_mLiteralValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_RetlwTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18RetlwTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ("ipic18RetlwTerminator",
                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RetlwTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RetlwTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RetlwTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetlwTerminator result ;
  const GGS_ipic_31__38_RetlwTerminator * p = (const GGS_ipic_31__38_RetlwTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RetlwTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetlwTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RetlwTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_RetlwTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_RetlwTerminator_2E_weak::GGS_ipic_31__38_RetlwTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak & GGS_ipic_31__38_RetlwTerminator_2E_weak::operator = (const GGS_ipic_31__38_RetlwTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak::GGS_ipic_31__38_RetlwTerminator_2E_weak (const GGS_ipic_31__38_RetlwTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak GGS_ipic_31__38_RetlwTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_RetlwTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_RetlwTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_RetlwTerminator * p = (cPtr_ipic_31__38_RetlwTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_RetlwTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator GGS_ipic_31__38_RetlwTerminator_2E_weak::bang_ipic_31__38_RetlwTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_RetlwTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_RetlwTerminator) ;
      result = GGS_ipic_31__38_RetlwTerminator ((cPtr_ipic_31__38_RetlwTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18RetlwTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2E_weak ("ipic18RetlwTerminator.weak",
                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RetlwTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RetlwTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RetlwTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetlwTerminator_2E_weak GGS_ipic_31__38_RetlwTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetlwTerminator_2E_weak result ;
  const GGS_ipic_31__38_RetlwTerminator_2E_weak * p = (const GGS_ipic_31__38_RetlwTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RetlwTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetlwTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_RetfieTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RetfieTerminator::objectCompare (const GGS_ipic_31__38_RetfieTerminator & inOperand) const {
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

GGS_ipic_31__38_RetfieTerminator::GGS_ipic_31__38_RetfieTerminator (void) :
GGS_ipic_31__38_SingleInstructionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_bool & in_mFastReturn,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_RetfieTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_RetfieTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_RetfieTerminator_init_21__21_ (in_mInstructionLocation, in_mFastReturn, inCompiler) ;
  const GGS_ipic_31__38_RetfieTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::
ipic_31__38_RetfieTerminator_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_bool & in_mFastReturn,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFastReturn = in_mFastReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator::GGS_ipic_31__38_RetfieTerminator (const cPtr_ipic_31__38_RetfieTerminator * inSourcePtr) :
GGS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_RetfieTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_bool & in_mFastReturn,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetfieTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_RetfieTerminator (in_mInstructionLocation, in_mFastReturn,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_RetfieTerminator::readProperty_mFastReturn (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_RetfieTerminator * p = (cPtr_ipic_31__38_RetfieTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetfieTerminator) ;
    return p->mProperty_mFastReturn ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18RetfieTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetfieTerminator::cPtr_ipic_31__38_RetfieTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (inCompiler COMMA_THERE),
mProperty_mFastReturn () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetfieTerminator::cPtr_ipic_31__38_RetfieTerminator (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_bool & in_mFastReturn,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFastReturn () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFastReturn = in_mFastReturn ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_RetfieTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;
}

void cPtr_ipic_31__38_RetfieTerminator::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18RetfieTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFastReturn.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_RetfieTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_RetfieTerminator (mProperty_mInstructionLocation, mProperty_mFastReturn, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_RetfieTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mFastReturn.printNonNullClassInstanceProperties ("mFastReturn") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18RetfieTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ("ipic18RetfieTerminator",
                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RetfieTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RetfieTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RetfieTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetfieTerminator result ;
  const GGS_ipic_31__38_RetfieTerminator * p = (const GGS_ipic_31__38_RetfieTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RetfieTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetfieTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RetfieTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_RetfieTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_RetfieTerminator_2E_weak::GGS_ipic_31__38_RetfieTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak & GGS_ipic_31__38_RetfieTerminator_2E_weak::operator = (const GGS_ipic_31__38_RetfieTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak::GGS_ipic_31__38_RetfieTerminator_2E_weak (const GGS_ipic_31__38_RetfieTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak GGS_ipic_31__38_RetfieTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_RetfieTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_RetfieTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_RetfieTerminator * p = (cPtr_ipic_31__38_RetfieTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_RetfieTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator GGS_ipic_31__38_RetfieTerminator_2E_weak::bang_ipic_31__38_RetfieTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_RetfieTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_RetfieTerminator) ;
      result = GGS_ipic_31__38_RetfieTerminator ((cPtr_ipic_31__38_RetfieTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18RetfieTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2E_weak ("ipic18RetfieTerminator.weak",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RetfieTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RetfieTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RetfieTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RetfieTerminator_2E_weak GGS_ipic_31__38_RetfieTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RetfieTerminator_2E_weak result ;
  const GGS_ipic_31__38_RetfieTerminator_2E_weak * p = (const GGS_ipic_31__38_RetfieTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RetfieTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetfieTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_JumpTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_JumpTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_JumpTerminator_2E_weak::GGS_ipic_31__38_JumpTerminator_2E_weak (void) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak & GGS_ipic_31__38_JumpTerminator_2E_weak::operator = (const GGS_ipic_31__38_JumpTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak::GGS_ipic_31__38_JumpTerminator_2E_weak (const GGS_ipic_31__38_JumpTerminator & inSource) :
GGS_ipic_31__38_SingleInstructionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak GGS_ipic_31__38_JumpTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_JumpTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator GGS_ipic_31__38_JumpTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_JumpTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_JumpTerminator * p = (cPtr_ipic_31__38_JumpTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_JumpTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator GGS_ipic_31__38_JumpTerminator_2E_weak::bang_ipic_31__38_JumpTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_JumpTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_JumpTerminator) ;
      result = GGS_ipic_31__38_JumpTerminator ((cPtr_ipic_31__38_JumpTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18JumpTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2E_weak ("ipic18JumpTerminator.weak",
                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_JumpTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_JumpTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_JumpTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_JumpTerminator_2E_weak GGS_ipic_31__38_JumpTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_JumpTerminator_2E_weak result ;
  const GGS_ipic_31__38_JumpTerminator_2E_weak * p = (const GGS_ipic_31__38_JumpTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_JumpTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18JumpTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak & GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::operator = (const GGS_ipic_31__38_ComputedGotoTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (const GGS_ipic_31__38_ComputedGotoTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedGotoTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ComputedGotoTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ComputedGotoTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::bang_ipic_31__38_ComputedGotoTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ComputedGotoTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ComputedGotoTerminator) ;
      result = GGS_ipic_31__38_ComputedGotoTerminator ((cPtr_ipic_31__38_ComputedGotoTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedGotoTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2E_weak ("ipic18ComputedGotoTerminator.weak",
                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedGotoTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedGotoTerminator_2E_weak GGS_ipic_31__38_ComputedGotoTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedGotoTerminator_2E_weak result ;
  const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak * p = (const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedGotoTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedGotoTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ComputedRETLWTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedRETLWTerminator::objectCompare (const GGS_ipic_31__38_ComputedRETLWTerminator & inOperand) const {
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

GGS_ipic_31__38_ComputedRETLWTerminator::GGS_ipic_31__38_ComputedRETLWTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator GGS_ipic_31__38_ComputedRETLWTerminator::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_uintlist & in_mLiteralValues,
                  const GGS_bool & in_mUsesRCALL,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_ComputedRETLWTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_ComputedRETLWTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_ComputedRETLWTerminator_init_21__21__21_ (in_mInstructionLocation, in_mLiteralValues, in_mUsesRCALL, inCompiler) ;
  const GGS_ipic_31__38_ComputedRETLWTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::
ipic_31__38_ComputedRETLWTerminator_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_uintlist & in_mLiteralValues,
                                                      const GGS_bool & in_mUsesRCALL,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralValues = in_mLiteralValues ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator::GGS_ipic_31__38_ComputedRETLWTerminator (const cPtr_ipic_31__38_ComputedRETLWTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator GGS_ipic_31__38_ComputedRETLWTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_uintlist & in_mLiteralValues,
                                                                                                 const GGS_bool & in_mUsesRCALL,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedRETLWTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ComputedRETLWTerminator (in_mInstructionLocation, in_mLiteralValues, in_mUsesRCALL,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist GGS_ipic_31__38_ComputedRETLWTerminator::readProperty_mLiteralValues (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uintlist () ;
  }else{
    cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    return p->mProperty_mLiteralValues ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_ComputedRETLWTerminator::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedRETLWTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedRETLWTerminator::cPtr_ipic_31__38_ComputedRETLWTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE),
mProperty_mLiteralValues (),
mProperty_mUsesRCALL () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedRETLWTerminator::cPtr_ipic_31__38_ComputedRETLWTerminator (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_uintlist & in_mLiteralValues,
                                                                                    const GGS_bool & in_mUsesRCALL,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLiteralValues (),
mProperty_mUsesRCALL () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralValues = in_mLiteralValues ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_ComputedRETLWTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;
}

void cPtr_ipic_31__38_ComputedRETLWTerminator::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18ComputedRETLWTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValues.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedRETLWTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedRETLWTerminator (mProperty_mInstructionLocation, mProperty_mLiteralValues, mProperty_mUsesRCALL, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ComputedRETLWTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralValues.printNonNullClassInstanceProperties ("mLiteralValues") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedRETLWTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ("ipic18ComputedRETLWTerminator",
                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedRETLWTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedRETLWTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedRETLWTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator GGS_ipic_31__38_ComputedRETLWTerminator::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedRETLWTerminator result ;
  const GGS_ipic_31__38_ComputedRETLWTerminator * p = (const GGS_ipic_31__38_ComputedRETLWTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedRETLWTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedRETLWTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak & GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::operator = (const GGS_ipic_31__38_ComputedRETLWTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak (const GGS_ipic_31__38_ComputedRETLWTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ComputedRETLWTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ComputedRETLWTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::bang_ipic_31__38_ComputedRETLWTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ComputedRETLWTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
      result = GGS_ipic_31__38_ComputedRETLWTerminator ((cPtr_ipic_31__38_ComputedRETLWTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedRETLWTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2E_weak ("ipic18ComputedRETLWTerminator.weak",
                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak result ;
  const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak * p = (const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedRETLWTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum conditionalBranchMode
//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode::GGS_conditionalBranchMode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode GGS_conditionalBranchMode::class_func_native (UNUSED_LOCATION_ARGS) {
  GGS_conditionalBranchMode result ;
  result.mEnum = Enumeration::enum_native ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode GGS_conditionalBranchMode::class_func_ipicBRA (UNUSED_LOCATION_ARGS) {
  GGS_conditionalBranchMode result ;
  result.mEnum = Enumeration::enum_ipicBRA ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode GGS_conditionalBranchMode::class_func_ipicGOTO (UNUSED_LOCATION_ARGS) {
  GGS_conditionalBranchMode result ;
  result.mEnum = Enumeration::enum_ipicGOTO ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_conditionalBranchMode [4] = {
  "(not built)",
  "native",
  "ipicBRA",
  "ipicGOTO"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditionalBranchMode::getter_isNative (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_native == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditionalBranchMode::getter_isIpicBRA (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ipicBRA == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditionalBranchMode::getter_isIpicGOTO (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ipicGOTO == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_conditionalBranchMode::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @conditionalBranchMode: ") ;
  ioString.appendCString (gEnumNameArrayFor_conditionalBranchMode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_conditionalBranchMode::objectCompare (const GGS_conditionalBranchMode & inOperand) const {
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
//     @conditionalBranchMode generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_conditionalBranchMode ("conditionalBranchMode",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_conditionalBranchMode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_conditionalBranchMode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_conditionalBranchMode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_conditionalBranchMode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditionalBranchMode GGS_conditionalBranchMode::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_conditionalBranchMode result ;
  const GGS_conditionalBranchMode * p = (const GGS_conditionalBranchMode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_conditionalBranchMode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("conditionalBranchMode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak & GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::operator = (const GGS_ipic_31__38_ConditionalJumpTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak (const GGS_ipic_31__38_ConditionalJumpTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ConditionalJumpTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ConditionalJumpTerminator * p = (cPtr_ipic_31__38_ConditionalJumpTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ConditionalJumpTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::bang_ipic_31__38_ConditionalJumpTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ConditionalJumpTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
      result = GGS_ipic_31__38_ConditionalJumpTerminator ((cPtr_ipic_31__38_ConditionalJumpTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ConditionalJumpTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2E_weak ("ipic18ConditionalJumpTerminator.weak",
                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak result ;
  const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak * p = (const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ConditionalJumpTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ComputedBraTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedBraTerminator::objectCompare (const GGS_ipic_31__38_ComputedBraTerminator & inOperand) const {
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

GGS_ipic_31__38_ComputedBraTerminator::GGS_ipic_31__38_ComputedBraTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator GGS_ipic_31__38_ComputedBraTerminator::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstringlist & in_mTargetLabels,
                  const GGS_bool & in_mUsesRCALL,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_ComputedBraTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_ComputedBraTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_ComputedBraTerminator_init_21__21__21_ (in_mInstructionLocation, in_mTargetLabels, in_mUsesRCALL, inCompiler) ;
  const GGS_ipic_31__38_ComputedBraTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::
ipic_31__38_ComputedBraTerminator_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_lstringlist & in_mTargetLabels,
                                                    const GGS_bool & in_mUsesRCALL,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetLabels = in_mTargetLabels ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator::GGS_ipic_31__38_ComputedBraTerminator (const cPtr_ipic_31__38_ComputedBraTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedBraTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator GGS_ipic_31__38_ComputedBraTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                             const GGS_lstringlist & in_mTargetLabels,
                                                                                             const GGS_bool & in_mUsesRCALL,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedBraTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ComputedBraTerminator (in_mInstructionLocation, in_mTargetLabels, in_mUsesRCALL,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_ipic_31__38_ComputedBraTerminator::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_ComputedBraTerminator::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedBraTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedBraTerminator::cPtr_ipic_31__38_ComputedBraTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE),
mProperty_mTargetLabels (),
mProperty_mUsesRCALL () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedBraTerminator::cPtr_ipic_31__38_ComputedBraTerminator (const GGS_location & in_mInstructionLocation,
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

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_ComputedBraTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;
}

void cPtr_ipic_31__38_ComputedBraTerminator::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18ComputedBraTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedBraTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedBraTerminator (mProperty_mInstructionLocation, mProperty_mTargetLabels, mProperty_mUsesRCALL, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ComputedBraTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabels.printNonNullClassInstanceProperties ("mTargetLabels") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedBraTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ("ipic18ComputedBraTerminator",
                                                                                      & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedBraTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedBraTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedBraTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator GGS_ipic_31__38_ComputedBraTerminator::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedBraTerminator result ;
  const GGS_ipic_31__38_ComputedBraTerminator * p = (const GGS_ipic_31__38_ComputedBraTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedBraTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedBraTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedBraTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ComputedBraTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_ComputedBraTerminator_2E_weak::GGS_ipic_31__38_ComputedBraTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator_2E_weak & GGS_ipic_31__38_ComputedBraTerminator_2E_weak::operator = (const GGS_ipic_31__38_ComputedBraTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator_2E_weak::GGS_ipic_31__38_ComputedBraTerminator_2E_weak (const GGS_ipic_31__38_ComputedBraTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator_2E_weak GGS_ipic_31__38_ComputedBraTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedBraTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator GGS_ipic_31__38_ComputedBraTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_ComputedBraTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_ComputedBraTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator GGS_ipic_31__38_ComputedBraTerminator_2E_weak::bang_ipic_31__38_ComputedBraTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_ComputedBraTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ComputedBraTerminator) ;
      result = GGS_ipic_31__38_ComputedBraTerminator ((cPtr_ipic_31__38_ComputedBraTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18ComputedBraTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2E_weak ("ipic18ComputedBraTerminator.weak",
                                                                                              & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_ComputedBraTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_ComputedBraTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_ComputedBraTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_ComputedBraTerminator_2E_weak GGS_ipic_31__38_ComputedBraTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_ComputedBraTerminator_2E_weak result ;
  const GGS_ipic_31__38_ComputedBraTerminator_2E_weak * p = (const GGS_ipic_31__38_ComputedBraTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_ComputedBraTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedBraTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum ipic18RegisterComparison
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison::GGS_ipic_31__38_RegisterComparison (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison GGS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_registerEqualsToW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison GGS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_registerGreaterThanW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison GGS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_RegisterComparison result ;
  result.mEnum = Enumeration::enum_registerLowerThanW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ipic_31__38_RegisterComparison [4] = {
  "(not built)",
  "registerEqualsToW",
  "registerGreaterThanW",
  "registerLowerThanW"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_RegisterComparison::getter_isRegisterEqualsToW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_registerEqualsToW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_RegisterComparison::getter_isRegisterGreaterThanW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_registerGreaterThanW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_RegisterComparison::getter_isRegisterLowerThanW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_registerLowerThanW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38_RegisterComparison::description (String & ioString,
                                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @ipic18RegisterComparison: ") ;
  ioString.appendCString (gEnumNameArrayFor_ipic_31__38_RegisterComparison [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_RegisterComparison::objectCompare (const GGS_ipic_31__38_RegisterComparison & inOperand) const {
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
//     @ipic18RegisterComparison generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ("ipic18RegisterComparison",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_RegisterComparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_RegisterComparison::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_RegisterComparison (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_RegisterComparison GGS_ipic_31__38_RegisterComparison::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_RegisterComparison result ;
  const GGS_ipic_31__38_RegisterComparison * p = (const GGS_ipic_31__38_RegisterComparison *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_RegisterComparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RegisterComparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_AbstractConditionTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_AbstractConditionTerminator::objectCompare (const GGS_ipic_31__38_AbstractConditionTerminator & inOperand) const {
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

GGS_ipic_31__38_AbstractConditionTerminator::GGS_ipic_31__38_AbstractConditionTerminator (void) :
GGS_ipic_31__38_AbstractBlockTerminator () {
}


void cPtr_ipic_31__38_AbstractConditionTerminator::
ipic_31__38_AbstractConditionTerminator_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                          const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                          const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator::GGS_ipic_31__38_AbstractConditionTerminator (const cPtr_ipic_31__38_AbstractConditionTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_AbstractConditionTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_AbstractConditionTerminator::readProperty_mSingleInstructionTerminatorIfConditionTrue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38_SingleInstructionTerminator () ;
  }else{
    cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    return p->mProperty_mSingleInstructionTerminatorIfConditionTrue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SingleInstructionTerminator GGS_ipic_31__38_AbstractConditionTerminator::readProperty_mSingleInstructionTerminatorIfConditionFalse (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38_SingleInstructionTerminator () ;
  }else{
    cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    return p->mProperty_mSingleInstructionTerminatorIfConditionFalse ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18AbstractConditionTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractConditionTerminator::cPtr_ipic_31__38_AbstractConditionTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (inCompiler COMMA_THERE),
mProperty_mSingleInstructionTerminatorIfConditionTrue (),
mProperty_mSingleInstructionTerminatorIfConditionFalse () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractConditionTerminator::cPtr_ipic_31__38_AbstractConditionTerminator (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                            const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSingleInstructionTerminatorIfConditionTrue (),
mProperty_mSingleInstructionTerminatorIfConditionFalse () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mSingleInstructionTerminatorIfConditionTrue.printNonNullClassInstanceProperties ("mSingleInstructionTerminatorIfConditionTrue") ;
    mProperty_mSingleInstructionTerminatorIfConditionFalse.printNonNullClassInstanceProperties ("mSingleInstructionTerminatorIfConditionFalse") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18AbstractConditionTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ("ipic18AbstractConditionTerminator",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_AbstractConditionTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_AbstractConditionTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_AbstractConditionTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator GGS_ipic_31__38_AbstractConditionTerminator::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractConditionTerminator result ;
  const GGS_ipic_31__38_AbstractConditionTerminator * p = (const GGS_ipic_31__38_AbstractConditionTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_AbstractConditionTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractConditionTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator_2E_weak & GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::operator = (const GGS_ipic_31__38_AbstractConditionTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (const GGS_ipic_31__38_AbstractConditionTerminator & inSource) :
GGS_ipic_31__38_AbstractBlockTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator_2E_weak GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractConditionTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_AbstractConditionTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_AbstractConditionTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::bang_ipic_31__38_AbstractConditionTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_AbstractConditionTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_AbstractConditionTerminator) ;
      result = GGS_ipic_31__38_AbstractConditionTerminator ((cPtr_ipic_31__38_AbstractConditionTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18AbstractConditionTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak ("ipic18AbstractConditionTerminator.weak",
                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_AbstractConditionTerminator_2E_weak GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_AbstractConditionTerminator_2E_weak result ;
  const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak * p = (const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractConditionTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression::GGS_ipic_31__38__5F_intermediate_5F_registerExpression (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress (),
mProperty_mNeedsBSR () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression::GGS_ipic_31__38__5F_intermediate_5F_registerExpression (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inSource) :
mProperty_mAssemblyString (inSource.mProperty_mAssemblyString),
mProperty_mRegisterAddress (inSource.mProperty_mRegisterAddress),
mProperty_mNeedsBSR (inSource.mProperty_mNeedsBSR) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression & GGS_ipic_31__38__5F_intermediate_5F_registerExpression::operator = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inSource) {
  mProperty_mAssemblyString = inSource.mProperty_mAssemblyString ;
  mProperty_mRegisterAddress = inSource.mProperty_mRegisterAddress ;
  mProperty_mNeedsBSR = inSource.mProperty_mNeedsBSR ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_intermediate_5F_registerExpression::init_21__21__21_ (const GGS_string & in_mAssemblyString,
                                                                                                                                 const GGS_uint & in_mRegisterAddress,
                                                                                                                                 const GGS_bool & in_mNeedsBSR,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mNeedsBSR = in_mNeedsBSR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpression::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression::GGS_ipic_31__38__5F_intermediate_5F_registerExpression (const GGS_string & inOperand0,
                                                                                                                const GGS_uint & inOperand1,
                                                                                                                const GGS_bool & inOperand2) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mNeedsBSR (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_intermediate_5F_registerExpression::class_func_new (const GGS_string & in_mAssemblyString,
                                                                                                                               const GGS_uint & in_mRegisterAddress,
                                                                                                                               const GGS_bool & in_mNeedsBSR,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  result.mProperty_mNeedsBSR = in_mNeedsBSR ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ipic_31__38__5F_intermediate_5F_registerExpression::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mNeedsBSR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpression::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mNeedsBSR.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpression::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ipic18_intermediate_registerExpression:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeedsBSR.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_registerExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ("ipic18_intermediate_registerExpression",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_intermediate_5F_registerExpression::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression * p = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::objectCompare (const GGS_pic_31__38_RegisterComparisonTerminator_2E_weak & inOperand) const {
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

GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::GGS_pic_31__38_RegisterComparisonTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator_2E_weak & GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::operator = (const GGS_pic_31__38_RegisterComparisonTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::GGS_pic_31__38_RegisterComparisonTerminator_2E_weak (const GGS_pic_31__38_RegisterComparisonTerminator & inSource) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator_2E_weak GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparisonTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_RegisterComparisonTerminator result ;
  if (isValid ()) {
    const cPtr_pic_31__38_RegisterComparisonTerminator * p = (cPtr_pic_31__38_RegisterComparisonTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_RegisterComparisonTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::bang_pic_31__38_RegisterComparisonTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_RegisterComparisonTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_RegisterComparisonTerminator) ;
      result = GGS_pic_31__38_RegisterComparisonTerminator ((cPtr_pic_31__38_RegisterComparisonTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18RegisterComparisonTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2E_weak ("pic18RegisterComparisonTerminator.weak",
                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_RegisterComparisonTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonTerminator_2E_weak GGS_pic_31__38_RegisterComparisonTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_RegisterComparisonTerminator_2E_weak result ;
  const GGS_pic_31__38_RegisterComparisonTerminator_2E_weak * p = (const GGS_pic_31__38_RegisterComparisonTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_RegisterComparisonTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparisonTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_IncDecRegisterTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_IncDecRegisterTerminator::objectCompare (const GGS_ipic_31__38_IncDecRegisterTerminator & inOperand) const {
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

GGS_ipic_31__38_IncDecRegisterTerminator::GGS_ipic_31__38_IncDecRegisterTerminator (void) :
GGS_ipic_31__38_AbstractConditionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator GGS_ipic_31__38_IncDecRegisterTerminator::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                              const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                              const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                              const GGS_bool & in_mIncrement,
                              const GGS_bool & in_m_5F_W_5F_isDestination,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38_IncDecRegisterTerminator * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38_IncDecRegisterTerminator (inCompiler COMMA_THERE)) ;
  object->ipic_31__38_IncDecRegisterTerminator_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription, in_mIncrement, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_ipic_31__38_IncDecRegisterTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::
ipic_31__38_IncDecRegisterTerminator_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                   const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                   const GGS_bool & in_mIncrement,
                                                                   const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator::GGS_ipic_31__38_IncDecRegisterTerminator (const cPtr_ipic_31__38_IncDecRegisterTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator GGS_ipic_31__38_IncDecRegisterTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                   const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                                   const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                   const GGS_bool & in_mIncrement,
                                                                                                   const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_IncDecRegisterTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_IncDecRegisterTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription, in_mIncrement, in_m_5F_W_5F_isDestination,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38_IncDecRegisterTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_IncDecRegisterTerminator::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38_IncDecRegisterTerminator::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18IncDecRegisterTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_IncDecRegisterTerminator::cPtr_ipic_31__38_IncDecRegisterTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_IncDecRegisterTerminator::cPtr_ipic_31__38_IncDecRegisterTerminator (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                      const GGS_bool & in_mIncrement,
                                                                                      const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38_IncDecRegisterTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;
}

void cPtr_ipic_31__38_IncDecRegisterTerminator::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18IncDecRegisterTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_IncDecRegisterTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_IncDecRegisterTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_IncDecRegisterTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18IncDecRegisterTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ("ipic18IncDecRegisterTerminator",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_IncDecRegisterTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_IncDecRegisterTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_IncDecRegisterTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator GGS_ipic_31__38_IncDecRegisterTerminator::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_IncDecRegisterTerminator result ;
  const GGS_ipic_31__38_IncDecRegisterTerminator * p = (const GGS_ipic_31__38_IncDecRegisterTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_IncDecRegisterTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18IncDecRegisterTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak & inOperand) const {
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

GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak & GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::operator = (const GGS_ipic_31__38_IncDecRegisterTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak (const GGS_ipic_31__38_IncDecRegisterTerminator & inSource) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_IncDecRegisterTerminator result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_IncDecRegisterTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::bang_ipic_31__38_IncDecRegisterTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_IncDecRegisterTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
      result = GGS_ipic_31__38_IncDecRegisterTerminator ((cPtr_ipic_31__38_IncDecRegisterTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18IncDecRegisterTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator_2E_weak ("ipic18IncDecRegisterTerminator.weak",
                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak result ;
  const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak * p = (const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18IncDecRegisterTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_TestRegisterTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_TestRegisterTerminator::objectCompare (const GGS_pic_31__38_TestRegisterTerminator & inOperand) const {
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

GGS_pic_31__38_TestRegisterTerminator::GGS_pic_31__38_TestRegisterTerminator (void) :
GGS_ipic_31__38_AbstractConditionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator GGS_pic_31__38_TestRegisterTerminator::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_TestRegisterTerminator * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_TestRegisterTerminator (inCompiler COMMA_THERE)) ;
  object->pic_31__38_TestRegisterTerminator_init_21__21__21__21_ (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription, inCompiler) ;
  const GGS_pic_31__38_TestRegisterTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::
pic_31__38_TestRegisterTerminator_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                        const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                        const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator::GGS_pic_31__38_TestRegisterTerminator (const cPtr_pic_31__38_TestRegisterTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_TestRegisterTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator GGS_pic_31__38_TestRegisterTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                             const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                             const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                             const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_TestRegisterTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_TestRegisterTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_pic_31__38_TestRegisterTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_pic_31__38_TestRegisterTerminator * p = (cPtr_pic_31__38_TestRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_TestRegisterTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18TestRegisterTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_TestRegisterTerminator::cPtr_pic_31__38_TestRegisterTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (inCompiler COMMA_THERE),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_TestRegisterTerminator::cPtr_pic_31__38_TestRegisterTerminator (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, inCompiler COMMA_THERE),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_TestRegisterTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;
}

void cPtr_pic_31__38_TestRegisterTerminator::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18TestRegisterTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_TestRegisterTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_TestRegisterTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_TestRegisterTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18TestRegisterTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ("pic18TestRegisterTerminator",
                                                                                      & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_TestRegisterTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_TestRegisterTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_TestRegisterTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator GGS_pic_31__38_TestRegisterTerminator::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_TestRegisterTerminator result ;
  const GGS_pic_31__38_TestRegisterTerminator * p = (const GGS_pic_31__38_TestRegisterTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_TestRegisterTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18TestRegisterTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_TestRegisterTerminator_2E_weak::objectCompare (const GGS_pic_31__38_TestRegisterTerminator_2E_weak & inOperand) const {
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

GGS_pic_31__38_TestRegisterTerminator_2E_weak::GGS_pic_31__38_TestRegisterTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator_2E_weak & GGS_pic_31__38_TestRegisterTerminator_2E_weak::operator = (const GGS_pic_31__38_TestRegisterTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator_2E_weak::GGS_pic_31__38_TestRegisterTerminator_2E_weak (const GGS_pic_31__38_TestRegisterTerminator & inSource) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator_2E_weak GGS_pic_31__38_TestRegisterTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_TestRegisterTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator GGS_pic_31__38_TestRegisterTerminator_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_TestRegisterTerminator result ;
  if (isValid ()) {
    const cPtr_pic_31__38_TestRegisterTerminator * p = (cPtr_pic_31__38_TestRegisterTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_TestRegisterTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator GGS_pic_31__38_TestRegisterTerminator_2E_weak::bang_pic_31__38_TestRegisterTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_TestRegisterTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_TestRegisterTerminator) ;
      result = GGS_pic_31__38_TestRegisterTerminator ((cPtr_pic_31__38_TestRegisterTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18TestRegisterTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator_2E_weak ("pic18TestRegisterTerminator.weak",
                                                                                              & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_TestRegisterTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_TestRegisterTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_TestRegisterTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_TestRegisterTerminator_2E_weak GGS_pic_31__38_TestRegisterTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_TestRegisterTerminator_2E_weak result ;
  const GGS_pic_31__38_TestRegisterTerminator_2E_weak * p = (const GGS_pic_31__38_TestRegisterTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_TestRegisterTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18TestRegisterTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_BitTestTerminator reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_BitTestTerminator::objectCompare (const GGS_pic_31__38_BitTestTerminator & inOperand) const {
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

GGS_pic_31__38_BitTestTerminator::GGS_pic_31__38_BitTestTerminator (void) :
GGS_ipic_31__38_AbstractConditionTerminator () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator GGS_pic_31__38_BitTestTerminator::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                          const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                          const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                          const GGS_uint & in_mBitNumber,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_BitTestTerminator * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_BitTestTerminator (inCompiler COMMA_THERE)) ;
  object->pic_31__38_BitTestTerminator_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_pic_31__38_BitTestTerminator result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::
pic_31__38_BitTestTerminator_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                       const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                       const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                       const GGS_uint & in_mBitNumber,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator::GGS_pic_31__38_BitTestTerminator (const cPtr_pic_31__38_BitTestTerminator * inSourcePtr) :
GGS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BitTestTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator GGS_pic_31__38_BitTestTerminator::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                   const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                   const GGS_uint & in_mBitNumber,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BitTestTerminator result ;
  macroMyNew (result.mObjectPtr, cPtr_pic_31__38_BitTestTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, in_mRegisterDescription, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_pic_31__38_BitTestTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_BitTestTerminator::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18BitTestTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BitTestTerminator::cPtr_pic_31__38_BitTestTerminator (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BitTestTerminator::cPtr_pic_31__38_BitTestTerminator (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                      const GGS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GGS_uint & in_mBitNumber,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse, inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue = in_mSingleInstructionTerminatorIfConditionTrue ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse = in_mSingleInstructionTerminatorIfConditionFalse ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_BitTestTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;
}

void cPtr_pic_31__38_BitTestTerminator::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18BitTestTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_BitTestTerminator::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_BitTestTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_BitTestTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18BitTestTerminator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ("pic18BitTestTerminator",
                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BitTestTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BitTestTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BitTestTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator GGS_pic_31__38_BitTestTerminator::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BitTestTerminator result ;
  const GGS_pic_31__38_BitTestTerminator * p = (const GGS_pic_31__38_BitTestTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BitTestTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_BitTestTerminator_2E_weak::objectCompare (const GGS_pic_31__38_BitTestTerminator_2E_weak & inOperand) const {
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

GGS_pic_31__38_BitTestTerminator_2E_weak::GGS_pic_31__38_BitTestTerminator_2E_weak (void) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator_2E_weak & GGS_pic_31__38_BitTestTerminator_2E_weak::operator = (const GGS_pic_31__38_BitTestTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator_2E_weak::GGS_pic_31__38_BitTestTerminator_2E_weak (const GGS_pic_31__38_BitTestTerminator & inSource) :
GGS_ipic_31__38_AbstractConditionTerminator_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator_2E_weak GGS_pic_31__38_BitTestTerminator_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_BitTestTerminator_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator GGS_pic_31__38_BitTestTerminator_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_BitTestTerminator result ;
  if (isValid ()) {
    const cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_BitTestTerminator (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator GGS_pic_31__38_BitTestTerminator_2E_weak::bang_pic_31__38_BitTestTerminator_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_BitTestTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_BitTestTerminator) ;
      result = GGS_pic_31__38_BitTestTerminator ((cPtr_pic_31__38_BitTestTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18BitTestTerminator.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator_2E_weak ("pic18BitTestTerminator.weak",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BitTestTerminator_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BitTestTerminator_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BitTestTerminator_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestTerminator_2E_weak GGS_pic_31__38_BitTestTerminator_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BitTestTerminator_2E_weak result ;
  const GGS_pic_31__38_BitTestTerminator_2E_weak * p = (const GGS_pic_31__38_BitTestTerminator_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BitTestTerminator_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestTerminator.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::objectCompare (const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak & inOperand) const {
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

GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::GGS_ipic_31__38_InstructionWithNoOperand_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand_2E_weak & GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::operator = (const GGS_ipic_31__38_InstructionWithNoOperand & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::GGS_ipic_31__38_InstructionWithNoOperand_2E_weak (const GGS_ipic_31__38_InstructionWithNoOperand & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand_2E_weak GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38_InstructionWithNoOperand_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38_InstructionWithNoOperand result ;
  if (isValid ()) {
    const cPtr_ipic_31__38_InstructionWithNoOperand * p = (cPtr_ipic_31__38_InstructionWithNoOperand *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38_InstructionWithNoOperand (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::bang_ipic_31__38_InstructionWithNoOperand_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_InstructionWithNoOperand result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_InstructionWithNoOperand) ;
      result = GGS_ipic_31__38_InstructionWithNoOperand ((cPtr_ipic_31__38_InstructionWithNoOperand *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18InstructionWithNoOperand.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand_2E_weak ("ipic18InstructionWithNoOperand.weak",
                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38_InstructionWithNoOperand_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_InstructionWithNoOperand_2E_weak GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38_InstructionWithNoOperand_2E_weak result ;
  const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak * p = (const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18InstructionWithNoOperand.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@ipic18_intermediate_registerExpression isEqualToRegister'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isEqualToRegister (const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & inObject,
                                            const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & constinArgument_inRegister,
                                            Compiler *
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression temp_0 = inObject ;
  result_outResult = GGS_bool (ComparisonKind::equal, temp_0.readProperty_mAssemblyString ().objectCompare (constinArgument_inRegister.readProperty_mAssemblyString ())) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression temp_2 = inObject ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mRegisterAddress ().objectCompare (constinArgument_inRegister.readProperty_mRegisterAddress ())) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ipic_31__38__5F_intermediate_5F_registerExpression temp_4 = inObject ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mNeedsBSR ().objectCompare (constinArgument_inRegister.readProperty_mNeedsBSR ())) ;
    }
  }
//---
  return result_outResult ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FDA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak ("ipic18_intermediate_instruction_FDA.weak",
                                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FDA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum FA_sequential_instruction_base_code
//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MULWF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_MULWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_NEGF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_NEGF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (UNUSED_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_SETF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_FA_5F_sequential_5F_instruction_5F_base_5F_code [6] = {
  "(not built)",
  "CLRF",
  "MOVWF",
  "MULWF",
  "NEGF",
  "SETF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isMULWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MULWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isNEGF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_NEGF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isSETF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SETF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @FA_sequential_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_FA_5F_sequential_5F_instruction_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @FA_sequential_instruction_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ("FA_sequential_instruction_base_code",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code * p = (const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("FA_sequential_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_FA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_FA_init_21__21__21_ (in_mInstructionLocation, in_mFAinstruction, in_mRegisterDescription, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::
ipic_31__38__5F_intermediate_5F_instruction_5F_FA_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                    const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                             const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                                                             const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (in_mInstructionLocation, in_mFAinstruction, in_mRegisterDescription,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const GGS_location & in_mInstructionLocation,
                                                                                                                const GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                                                const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFAinstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFAinstruction = in_mFAinstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_FA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFAinstruction.printNonNullClassInstanceProperties ("mFAinstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ("ipic18_intermediate_instruction_FA",
                                                                                                      & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak ("ipic18_intermediate_instruction_FA.weak",
                                                                                                              & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inSource) :
mProperty_mAssemblyString (inSource.mProperty_mAssemblyString),
mProperty_mRegisterAddress (inSource.mProperty_mRegisterAddress) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::operator = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inSource) {
  mProperty_mAssemblyString = inSource.mProperty_mAssemblyString ;
  mProperty_mRegisterAddress = inSource.mProperty_mRegisterAddress ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::init_21__21_ (const GGS_string & in_mAssemblyString,
                                                                                                                                                                     const GGS_uint & in_mRegisterAddress,
                                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GGS_string & inOperand0,
                                                                                                                                                        const GGS_uint & inOperand1) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::class_func_new (const GGS_string & in_mAssemblyString,
                                                                                                                                                                       const GGS_uint & in_mRegisterAddress,
                                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::description (String & ioString,
                                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ipic18_intermediate_registerExpressionWithoutBSRIndication:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_registerExpressionWithoutBSRIndication generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ("ipic18_intermediate_registerExpressionWithoutBSRIndication",
                                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::extractObject (const GGS_object & inObject,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication * p = (const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_registerExpressionWithoutBSRIndication", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_init_21__21__21_ (in_mInstructionLocation, in_mSourceRegisterDescription, in_mDestinationRegisterDescription, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::
ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                       const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceRegisterDescription = in_mSourceRegisterDescription ;
  mProperty_mDestinationRegisterDescription = in_mDestinationRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                                                                                   const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (in_mInstructionLocation, in_mSourceRegisterDescription, in_mDestinationRegisterDescription,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::readProperty_mSourceRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    return p->mProperty_mSourceRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::readProperty_mDestinationRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    return p->mProperty_mDestinationRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MOVFF class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mSourceRegisterDescription (),
mProperty_mDestinationRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const GGS_location & in_mInstructionLocation,
                                                                                                                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                                                                      const GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSourceRegisterDescription (),
mProperty_mDestinationRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceRegisterDescription = in_mSourceRegisterDescription ;
  mProperty_mDestinationRegisterDescription = in_mDestinationRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_MOVFF:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDestinationRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (mProperty_mInstructionLocation, mProperty_mSourceRegisterDescription, mProperty_mDestinationRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSourceRegisterDescription.printNonNullClassInstanceProperties ("mSourceRegisterDescription") ;
    mProperty_mDestinationRegisterDescription.printNonNullClassInstanceProperties ("mDestinationRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MOVFF generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ("ipic18_intermediate_instruction_MOVFF",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVFF", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MOVFF.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak ("ipic18_intermediate_instruction_MOVFF.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVFF.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_literalOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ("ipic18_intermediate_instruction_literalOperation.weak",
                                                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_luint & in_mFSRindex,
                  const GGS_uint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_init_21__21__21_ (in_mInstructionLocation, in_mFSRindex, in_mValue, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::
ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_luint & in_mFSRindex,
                                                                      const GGS_uint & in_mValue,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFSRindex = in_mFSRindex ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                 const GGS_luint & in_mFSRindex,
                                                                                                                                 const GGS_uint & in_mValue,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (in_mInstructionLocation, in_mFSRindex, in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::readProperty_mFSRindex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    return p->mProperty_mFSRindex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_LFSR class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mFSRindex (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const GGS_location & in_mInstructionLocation,
                                                                                                                    const GGS_luint & in_mFSRindex,
                                                                                                                    const GGS_uint & in_mValue,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mFSRindex (),
mProperty_mValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFSRindex = in_mFSRindex ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_LFSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFSRindex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (mProperty_mInstructionLocation, mProperty_mFSRindex, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFSRindex.printNonNullClassInstanceProperties ("mFSRindex") ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_LFSR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ("ipic18_intermediate_instruction_LFSR",
                                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_LFSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_LFSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak ("ipic18_intermediate_instruction_LFSR.weak",
                                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_LFSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FBA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak ("ipic18_intermediate_instruction_FBA.weak",
                                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FBA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_JSR & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_JSR result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_JSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_JSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::bang_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_JSR ((cPtr_ipic_31__38__5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_JSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak ("ipic18_intermediate_JSR.weak",
                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_JSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_JSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mBankIndex,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_init_21__21_ (in_mInstructionLocation, in_mBankIndex, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::
ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_luint & in_mBankIndex,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                   const GGS_luint & in_mBankIndex,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (in_mInstructionLocation, in_mBankIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MOVLB class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mBankIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const GGS_location & in_mInstructionLocation,
                                                                                                                      const GGS_luint & in_mBankIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBankIndex () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_MOVLB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (mProperty_mInstructionLocation, mProperty_mBankIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MOVLB generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ("ipic18_intermediate_instruction_MOVLB",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVLB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MOVLB.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak ("ipic18_intermediate_instruction_MOVLB.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVLB.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_uint & in_mBlankValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_init_21__21_ (in_mInstructionLocation, in_mBlankValue, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::
ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_uint & in_mBlankValue,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBlankValue = in_mBlankValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                 const GGS_uint & in_mBlankValue,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (in_mInstructionLocation, in_mBlankValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::readProperty_mBlankValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
    return p->mProperty_mBlankValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FNOP class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mBlankValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const GGS_location & in_mInstructionLocation,
                                                                                                                    const GGS_uint & in_mBlankValue,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBlankValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBlankValue = in_mBlankValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_FNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBlankValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (mProperty_mInstructionLocation, mProperty_mBlankValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBlankValue.printNonNullClassInstanceProperties ("mBlankValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ("ipic18_intermediate_instruction_FNOP",
                                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_FNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak ("ipic18_intermediate_instruction_FNOP.weak",
                                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_uint & in_mBlankValue,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_init_21__21_ (in_mInstructionLocation, in_mBlankValue, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::
ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_uint & in_mBlankValue,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBlankValue = in_mBlankValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                   const GGS_uint & in_mBlankValue,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (in_mInstructionLocation, in_mBlankValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::readProperty_mBlankValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
    return p->mProperty_mBlankValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_BLANK class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mBlankValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const GGS_location & in_mInstructionLocation,
                                                                                                                      const GGS_uint & in_mBlankValue,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBlankValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBlankValue = in_mBlankValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_BLANK:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBlankValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (mProperty_mInstructionLocation, mProperty_mBlankValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBlankValue.printNonNullClassInstanceProperties ("mBlankValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_BLANK generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ("ipic18_intermediate_instruction_BLANK",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_BLANK", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_BLANK.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak ("ipic18_intermediate_instruction_BLANK.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_BLANK.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_TBLRD.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak ("ipic18_intermediate_instruction_TBLRD.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLRD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_tableAccessOption & in_mOption,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_init_21__21_ (in_mInstructionLocation, in_mOption, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::
ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_tableAccessOption & in_mOption,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOption = in_mOption ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                   const GGS_tableAccessOption & in_mOption,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (in_mInstructionLocation, in_mOption,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableAccessOption () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_TBLWT class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mOption () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const GGS_location & in_mInstructionLocation,
                                                                                                                      const GGS_tableAccessOption & in_mOption,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOption () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOption = in_mOption ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_TBLWT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (mProperty_mInstructionLocation, mProperty_mOption, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_TBLWT generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ("ipic18_intermediate_instruction_TBLWT",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLWT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_TBLWT.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak ("ipic18_intermediate_instruction_TBLWT.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLWT.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::
ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_luint & in_mOccurrenceFactor,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                 const GGS_luint & in_mOccurrenceFactor,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (in_mInstructionLocation, in_mOccurrenceFactor,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const GGS_location & in_mInstructionLocation,
                                                                                                                    const GGS_luint & in_mOccurrenceFactor,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MNOP generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ("ipic18_intermediate_instruction_MNOP",
                                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_MNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak ("ipic18_intermediate_instruction_MNOP.weak",
                                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::
ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_luint & in_mOccurrenceFactor,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                     const GGS_luint & in_mOccurrenceFactor,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (in_mInstructionLocation, in_mOccurrenceFactor,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_NOPBRA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const GGS_location & in_mInstructionLocation,
                                                                                                                        const GGS_luint & in_mOccurrenceFactor,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_NOPBRA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_NOPBRA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ("ipic18_intermediate_instruction_NOPBRA",
                                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_NOPBRA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_NOPBRA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak ("ipic18_intermediate_instruction_NOPBRA.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_NOPBRA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W * p = (cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::bang_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ((cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_MOV_LABEL_W.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak ("ipic18_intermediate_MOV_LABEL_W.weak",
                                                                                                              & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_MOV_LABEL_W.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (void) :
GGS_ipic_31__38_SequentialInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                  const GGS_bool & in_mUsesRCALL,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_init_21__21__21_ (in_mInstructionLocation, in_mTargetInstructions, in_mUsesRCALL, inCompiler) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::
ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                   const GGS_bool & in_mUsesRCALL,
                                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetInstructions = in_mTargetInstructions ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                                                           const GGS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                                                                                           const GGS_bool & in_mUsesRCALL,
                                                                                                                                                           Compiler * inCompiler
                                                                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (in_mInstructionLocation, in_mTargetInstructions, in_mUsesRCALL,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstructionList GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::readProperty_mTargetInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38_SequentialInstructionList () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mTargetInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_computed_rcall class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mTargetInstructions (),
mProperty_mUsesRCALL () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const GGS_location & in_mInstructionLocation,
                                                                                                                                              const GGS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                                                                              const GGS_bool & in_mUsesRCALL,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetInstructions (),
mProperty_mUsesRCALL () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetInstructions = in_mTargetInstructions ;
  mProperty_mUsesRCALL = in_mUsesRCALL ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::description (String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_intermediate_instruction_computed_rcall:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (mProperty_mInstructionLocation, mProperty_mTargetInstructions, mProperty_mUsesRCALL, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetInstructions.printNonNullClassInstanceProperties ("mTargetInstructions") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_computed_rcall generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ("ipic18_intermediate_instruction_computed_rcall",
                                                                                                                     & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::extractObject (const GGS_object & inObject,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_computed_rcall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak & GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::operator = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
      result = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_intermediate_instruction_computed_rcall.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak ("ipic18_intermediate_instruction_computed_rcall.weak",
                                                                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak result ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak * p = (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_computed_rcall.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_condition_5F_skip_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::objectCompare (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inOperand) const {
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

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (void) :
GGS_ipic_31__38_SequentialInstruction () {
}


void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::
ipic_31__38__5F_condition_5F_skip_5F_instruction_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                               const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * inSourcePtr) :
GGS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_SequentialInstruction GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::readProperty_mEmbeddedInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38_SequentialInstruction () ;
  }else{
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
    return p->mProperty_mEmbeddedInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_condition_skip_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (inCompiler COMMA_THERE),
mProperty_mEmbeddedInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (const GGS_location & in_mInstructionLocation,
                                                                                                              const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mEmbeddedInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mEmbeddedInstruction.printNonNullClassInstanceProperties ("mEmbeddedInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_condition_skip_instruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ("ipic18_condition_skip_instruction",
                                                                                                     & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction result ;
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_condition_skip_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::objectCompare (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (void) :
GGS_ipic_31__38_SequentialInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak & GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::operator = (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) :
GGS_ipic_31__38_SequentialInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::bang_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
      result = GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction ((cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_condition_skip_instruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak ("ipic18_condition_skip_instruction.weak",
                                                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak result ;
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak * p = (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_condition_skip_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                          const GGS_bool & in_mSkipIfSet,
                          const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                          const GGS_uint & in_mBitNumber,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * object = nullptr ;
  macroMyNew (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (inCompiler COMMA_THERE)) ;
  object->ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_init_21__21__21__21__21_ (in_mInstructionLocation, in_mEmbeddedInstruction, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::
ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                             const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                             const GGS_bool & in_mSkipIfSet,
                                                                             const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                             const GGS_uint & in_mBitNumber,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                                               const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                                               const GGS_bool & in_mSkipIfSet,
                                                                                                                               const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                               const GGS_uint & in_mBitNumber,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (in_mInstructionLocation, in_mEmbeddedInstruction, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_intermediate_5F_registerExpression GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                                                                  const GGS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                                  const GGS_bool & in_mSkipIfSet,
                                                                                                                  const GGS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GGS_uint & in_mBitNumber,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction, inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@ipic18_skip_instruction_BitTestSkip:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_BitTestSkip generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ("ipic18_skip_instruction_BitTestSkip",
                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const {
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

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak & GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::operator = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_BitTestSkip.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak ("ipic18_skip_instruction_BitTestSkip.weak",
                                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_BitTestSkip.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum ipic18_compare_register_instruction_base_code
//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSEQ (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSEQ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSGT (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSGT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSLT (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_CPFSLT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_TSTFSZ (UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_TSTFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code [5] = {
  "(not built)",
  "CPFSEQ",
  "CPFSGT",
  "CPFSLT",
  "TSTFSZ"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSEQ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSEQ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSGT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSGT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSLT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSLT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isTSTFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_TSTFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @ipic18_compare_register_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @ipic18_compare_register_instruction_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ("ipic18_compare_register_instruction_base_code",
                                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code * p = (const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_compare_register_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

