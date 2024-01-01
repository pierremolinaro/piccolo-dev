#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
// @pic_31__38_SimpleConstantCaseItem reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_SimpleConstantCaseItem::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_AbstractCaseItem::printNonNullClassInstanceProperties () ;
    mProperty_mCaseExpression.printNonNullClassInstanceProperties ("mCaseExpression") ;
    mProperty_mCaseExpressionLocation.printNonNullClassInstanceProperties ("mCaseExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_SimpleConstantCaseItem::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_SimpleConstantCaseItem * p = (const cPtr_pic_31__38_SimpleConstantCaseItem *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
  if (kOperandEqual == result) {
    result = mProperty_mCaseExpression.objectCompare (p->mProperty_mCaseExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseExpressionLocation.objectCompare (p->mProperty_mCaseExpressionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_SimpleConstantCaseItem::objectCompare (const GALGAS_pic_31__38_SimpleConstantCaseItem & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem::GALGAS_pic_31__38_SimpleConstantCaseItem (void) :
GALGAS_pic_31__38_AbstractCaseItem () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem::GALGAS_pic_31__38_SimpleConstantCaseItem (const cPtr_pic_31__38_SimpleConstantCaseItem * inSourcePtr) :
GALGAS_pic_31__38_AbstractCaseItem (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_SimpleConstantCaseItem) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem GALGAS_pic_31__38_SimpleConstantCaseItem::class_func_new (const GALGAS_immediatExpression & inAttribute_mCaseExpression,
                                                                                                   const GALGAS_location & inAttribute_mCaseExpressionLocation
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SimpleConstantCaseItem result ;
  if (inAttribute_mCaseExpression.isValid () && inAttribute_mCaseExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_SimpleConstantCaseItem (inAttribute_mCaseExpression, inAttribute_mCaseExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SimpleConstantCaseItem::setter_setMCaseExpression (GALGAS_immediatExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    p->mProperty_mCaseExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SimpleConstantCaseItem::setter_setMCaseExpressionLocation (GALGAS_location inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    p->mProperty_mCaseExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_SimpleConstantCaseItem::readProperty_mCaseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    return p->mProperty_mCaseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_SimpleConstantCaseItem::readProperty_mCaseExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_SimpleConstantCaseItem * p = (cPtr_pic_31__38_SimpleConstantCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_SimpleConstantCaseItem) ;
    return p->mProperty_mCaseExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18SimpleConstantCaseItem class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_SimpleConstantCaseItem::cPtr_pic_31__38_SimpleConstantCaseItem (const GALGAS_immediatExpression & in_mCaseExpression,
                                                                                const GALGAS_location & in_mCaseExpressionLocation
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (THERE),
mProperty_mCaseExpression (in_mCaseExpression),
mProperty_mCaseExpressionLocation (in_mCaseExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_SimpleConstantCaseItem::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;
}

void cPtr_pic_31__38_SimpleConstantCaseItem::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("[@pic18SimpleConstantCaseItem:") ;
  mProperty_mCaseExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCaseExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_SimpleConstantCaseItem::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_SimpleConstantCaseItem (mProperty_mCaseExpression, mProperty_mCaseExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18SimpleConstantCaseItem generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ("pic18SimpleConstantCaseItem",
                                                                                         & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_SimpleConstantCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_SimpleConstantCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_SimpleConstantCaseItem (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem GALGAS_pic_31__38_SimpleConstantCaseItem::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SimpleConstantCaseItem result ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem * p = (const GALGAS_pic_31__38_SimpleConstantCaseItem *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_SimpleConstantCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SimpleConstantCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak::objectCompare (const GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak::GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak (void) :
GALGAS_pic_31__38_AbstractCaseItem_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak & GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak::operator = (const GALGAS_pic_31__38_SimpleConstantCaseItem & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak::GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak (const GALGAS_pic_31__38_SimpleConstantCaseItem & inSource) :
GALGAS_pic_31__38_AbstractCaseItem_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak::bang_pic_31__38_SimpleConstantCaseItem_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SimpleConstantCaseItem result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_SimpleConstantCaseItem) ;
      result = GALGAS_pic_31__38_SimpleConstantCaseItem ((cPtr_pic_31__38_SimpleConstantCaseItem *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18SimpleConstantCaseItem-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak ("pic18SimpleConstantCaseItem-weak",
                                                                                                 & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak result ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak * p = (const GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_SimpleConstantCaseItem_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SimpleConstantCaseItem-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_IntervalCaseItem reference class
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

typeComparisonResult cPtr_pic_31__38_IntervalCaseItem::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_IntervalCaseItem * p = (const cPtr_pic_31__38_IntervalCaseItem *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
  if (kOperandEqual == result) {
    result = mProperty_mMinExpression.objectCompare (p->mProperty_mMinExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMaxExpression.objectCompare (p->mProperty_mMaxExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseExpressionLocation.objectCompare (p->mProperty_mCaseExpressionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_IntervalCaseItem::objectCompare (const GALGAS_pic_31__38_IntervalCaseItem & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem::GALGAS_pic_31__38_IntervalCaseItem (void) :
GALGAS_pic_31__38_AbstractCaseItem () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem::GALGAS_pic_31__38_IntervalCaseItem (const cPtr_pic_31__38_IntervalCaseItem * inSourcePtr) :
GALGAS_pic_31__38_AbstractCaseItem (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_IntervalCaseItem) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem GALGAS_pic_31__38_IntervalCaseItem::class_func_new (const GALGAS_immediatExpression & inAttribute_mMinExpression,
                                                                                       const GALGAS_immediatExpression & inAttribute_mMaxExpression,
                                                                                       const GALGAS_location & inAttribute_mCaseExpressionLocation
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_IntervalCaseItem result ;
  if (inAttribute_mMinExpression.isValid () && inAttribute_mMaxExpression.isValid () && inAttribute_mCaseExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_IntervalCaseItem (inAttribute_mMinExpression, inAttribute_mMaxExpression, inAttribute_mCaseExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_IntervalCaseItem::setter_setMMinExpression (GALGAS_immediatExpression inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    p->mProperty_mMinExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_IntervalCaseItem::setter_setMMaxExpression (GALGAS_immediatExpression inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    p->mProperty_mMaxExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_IntervalCaseItem::setter_setMCaseExpressionLocation (GALGAS_location inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    p->mProperty_mCaseExpressionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_IntervalCaseItem::readProperty_mMinExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    return p->mProperty_mMinExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_pic_31__38_IntervalCaseItem::readProperty_mMaxExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    return p->mProperty_mMaxExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_IntervalCaseItem::readProperty_mCaseExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_IntervalCaseItem * p = (cPtr_pic_31__38_IntervalCaseItem *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_IntervalCaseItem) ;
    return p->mProperty_mCaseExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18IntervalCaseItem class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_IntervalCaseItem::cPtr_pic_31__38_IntervalCaseItem (const GALGAS_immediatExpression & in_mMinExpression,
                                                                    const GALGAS_immediatExpression & in_mMaxExpression,
                                                                    const GALGAS_location & in_mCaseExpressionLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_AbstractCaseItem (THERE),
mProperty_mMinExpression (in_mMinExpression),
mProperty_mMaxExpression (in_mMaxExpression),
mProperty_mCaseExpressionLocation (in_mCaseExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_IntervalCaseItem::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;
}

void cPtr_pic_31__38_IntervalCaseItem::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.addString ("[@pic18IntervalCaseItem:") ;
  mProperty_mMinExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mMaxExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCaseExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_IntervalCaseItem::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_IntervalCaseItem (mProperty_mMinExpression, mProperty_mMaxExpression, mProperty_mCaseExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18IntervalCaseItem generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ("pic18IntervalCaseItem",
                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_IntervalCaseItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_IntervalCaseItem::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_IntervalCaseItem (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem GALGAS_pic_31__38_IntervalCaseItem::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_IntervalCaseItem result ;
  const GALGAS_pic_31__38_IntervalCaseItem * p = (const GALGAS_pic_31__38_IntervalCaseItem *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_IntervalCaseItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IntervalCaseItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_IntervalCaseItem_2D_weak::objectCompare (const GALGAS_pic_31__38_IntervalCaseItem_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem_2D_weak::GALGAS_pic_31__38_IntervalCaseItem_2D_weak (void) :
GALGAS_pic_31__38_AbstractCaseItem_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem_2D_weak & GALGAS_pic_31__38_IntervalCaseItem_2D_weak::operator = (const GALGAS_pic_31__38_IntervalCaseItem & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem_2D_weak::GALGAS_pic_31__38_IntervalCaseItem_2D_weak (const GALGAS_pic_31__38_IntervalCaseItem & inSource) :
GALGAS_pic_31__38_AbstractCaseItem_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem_2D_weak GALGAS_pic_31__38_IntervalCaseItem_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_IntervalCaseItem_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem GALGAS_pic_31__38_IntervalCaseItem_2D_weak::bang_pic_31__38_IntervalCaseItem_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_IntervalCaseItem result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_IntervalCaseItem) ;
      result = GALGAS_pic_31__38_IntervalCaseItem ((cPtr_pic_31__38_IntervalCaseItem *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18IntervalCaseItem-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem_2D_weak ("pic18IntervalCaseItem-weak",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_AbstractCaseItem_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_IntervalCaseItem_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_IntervalCaseItem_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_IntervalCaseItem_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_IntervalCaseItem_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_IntervalCaseItem_2D_weak GALGAS_pic_31__38_IntervalCaseItem_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_IntervalCaseItem_2D_weak result ;
  const GALGAS_pic_31__38_IntervalCaseItem_2D_weak * p = (const GALGAS_pic_31__38_IntervalCaseItem_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_IntervalCaseItem_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18IntervalCaseItem-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_CaseExpressionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_CaseExpressionList : public cCollectionElement {
  public: GALGAS_pic_31__38_CaseExpressionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_CaseExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_CaseExpressionList::cCollectionElement_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCaseItem) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_CaseExpressionList::cCollectionElement_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_CaseExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_pic_31__38_CaseExpressionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mCaseItem" ":") ;
  mObject.mProperty_mCaseItem.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_CaseExpressionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_CaseExpressionList * operand = (cCollectionElement_pic_31__38_CaseExpressionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_CaseExpressionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList::GALGAS_pic_31__38_CaseExpressionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList::GALGAS_pic_31__38_CaseExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_CaseExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::class_func_listWithValue (const GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_CaseExpressionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_pic_31__38_CaseExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_pic_31__38_CaseExpressionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_pic_31__38_AbstractCaseItem & in_mCaseItem
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_CaseExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_CaseExpressionList (in_mCaseItem COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::addAssign_operation (const GALGAS_pic_31__38_AbstractCaseItem & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_CaseExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::setter_append (const GALGAS_pic_31__38_AbstractCaseItem inOperand0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_CaseExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::setter_insertAtIndex (const GALGAS_pic_31__38_AbstractCaseItem inOperand0,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_pic_31__38_CaseExpressionList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::setter_removeAtIndex (GALGAS_pic_31__38_AbstractCaseItem & outOperand0,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
        outOperand0 = p->mObject.mProperty_mCaseItem ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::setter_popFirst (GALGAS_pic_31__38_AbstractCaseItem & outOperand0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    outOperand0 = p->mObject.mProperty_mCaseItem ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::setter_popLast (GALGAS_pic_31__38_AbstractCaseItem & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    outOperand0 = p->mObject.mProperty_mCaseItem ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::method_first (GALGAS_pic_31__38_AbstractCaseItem & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    outOperand0 = p->mObject.mProperty_mCaseItem ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::method_last (GALGAS_pic_31__38_AbstractCaseItem & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    outOperand0 = p->mObject.mProperty_mCaseItem ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::add_operation (const GALGAS_pic_31__38_CaseExpressionList & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_CaseExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_CaseExpressionList result = GALGAS_pic_31__38_CaseExpressionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_CaseExpressionList result = GALGAS_pic_31__38_CaseExpressionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_CaseExpressionList result = GALGAS_pic_31__38_CaseExpressionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::plusAssign_operation (const GALGAS_pic_31__38_CaseExpressionList inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_CaseExpressionList::setter_setMCaseItemAtIndex (GALGAS_pic_31__38_AbstractCaseItem inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseItem = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem GALGAS_pic_31__38_CaseExpressionList::getter_mCaseItemAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_CaseExpressionList * p = (cCollectionElement_pic_31__38_CaseExpressionList *) attributes.ptr () ;
  GALGAS_pic_31__38_AbstractCaseItem result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
    result = p->mObject.mProperty_mCaseItem ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_CaseExpressionList::cEnumerator_pic_31__38_CaseExpressionList (const GALGAS_pic_31__38_CaseExpressionList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList_2D_element cEnumerator_pic_31__38_CaseExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_CaseExpressionList * p = (const cCollectionElement_pic_31__38_CaseExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_AbstractCaseItem cEnumerator_pic_31__38_CaseExpressionList::current_mCaseItem (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_CaseExpressionList * p = (const cCollectionElement_pic_31__38_CaseExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_CaseExpressionList) ;
  return p->mObject.mProperty_mCaseItem ;
}




//--------------------------------------------------------------------------------------------------
//
//     @pic18CaseExpressionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ("pic18CaseExpressionList",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_CaseExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_CaseExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_CaseExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_CaseExpressionList::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_CaseExpressionList result ;
  const GALGAS_pic_31__38_CaseExpressionList * p = (const GALGAS_pic_31__38_CaseExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_CaseExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18CaseExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@pic_31__38_SwitchInstructionCaseList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_pic_31__38_SwitchInstructionCaseList : public cCollectionElement {
  public: GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GALGAS_location & in_mStartOfCase,
                                                                   const GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                   const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_SwitchInstructionCaseList::cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GALGAS_location & in_mStartOfCase,
                                                                                                                  const GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                                                                  const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartOfCase, in_mCaseExpressionList, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_pic_31__38_SwitchInstructionCaseList::cCollectionElement_pic_31__38_SwitchInstructionCaseList (const GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_pic_31__38_SwitchInstructionCaseList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mStartOfCase" ":") ;
  mObject.mProperty_mStartOfCase.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mCaseExpressionList" ":") ;
  mObject.mProperty_mCaseExpressionList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_pic_31__38_SwitchInstructionCaseList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * operand = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList::GALGAS_pic_31__38_SwitchInstructionCaseList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList::GALGAS_pic_31__38_SwitchInstructionCaseList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_pic_31__38_SwitchInstructionCaseList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::class_func_listWithValue (const GALGAS_location & inOperand0,
                                                                                                                   const GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                                   const GALGAS_pic_31__38_InstructionList & inOperand2
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SwitchInstructionCaseList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_pic_31__38_SwitchInstructionCaseList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_pic_31__38_SwitchInstructionCaseList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_location & in_mStartOfCase,
                                                                             const GALGAS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                             const GALGAS_pic_31__38_InstructionList & in_mInstructionList
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = nullptr ;
  macroMyNew (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList (in_mStartOfCase,
                                                                          in_mCaseExpressionList,
                                                                          in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::addAssign_operation (const GALGAS_location & inOperand0,
                                                                       const GALGAS_pic_31__38_CaseExpressionList & inOperand1,
                                                                       const GALGAS_pic_31__38_InstructionList & inOperand2
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_append (const GALGAS_location inOperand0,
                                                                 const GALGAS_pic_31__38_CaseExpressionList inOperand1,
                                                                 const GALGAS_pic_31__38_InstructionList inOperand2,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                                        const GALGAS_pic_31__38_CaseExpressionList inOperand1,
                                                                        const GALGAS_pic_31__38_InstructionList inOperand2,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                                        GALGAS_pic_31__38_CaseExpressionList & outOperand1,
                                                                        GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
        outOperand0 = p->mObject.mProperty_mStartOfCase ;
        outOperand1 = p->mObject.mProperty_mCaseExpressionList ;
        outOperand2 = p->mObject.mProperty_mInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_popFirst (GALGAS_location & outOperand0,
                                                                   GALGAS_pic_31__38_CaseExpressionList & outOperand1,
                                                                   GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    outOperand0 = p->mObject.mProperty_mStartOfCase ;
    outOperand1 = p->mObject.mProperty_mCaseExpressionList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_popLast (GALGAS_location & outOperand0,
                                                                  GALGAS_pic_31__38_CaseExpressionList & outOperand1,
                                                                  GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    outOperand0 = p->mObject.mProperty_mStartOfCase ;
    outOperand1 = p->mObject.mProperty_mCaseExpressionList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::method_first (GALGAS_location & outOperand0,
                                                                GALGAS_pic_31__38_CaseExpressionList & outOperand1,
                                                                GALGAS_pic_31__38_InstructionList & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    outOperand0 = p->mObject.mProperty_mStartOfCase ;
    outOperand1 = p->mObject.mProperty_mCaseExpressionList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::method_last (GALGAS_location & outOperand0,
                                                               GALGAS_pic_31__38_CaseExpressionList & outOperand1,
                                                               GALGAS_pic_31__38_InstructionList & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    outOperand0 = p->mObject.mProperty_mStartOfCase ;
    outOperand1 = p->mObject.mProperty_mCaseExpressionList ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::add_operation (const GALGAS_pic_31__38_SwitchInstructionCaseList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result = GALGAS_pic_31__38_SwitchInstructionCaseList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result = GALGAS_pic_31__38_SwitchInstructionCaseList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_SwitchInstructionCaseList result = GALGAS_pic_31__38_SwitchInstructionCaseList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::plusAssign_operation (const GALGAS_pic_31__38_SwitchInstructionCaseList inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_setMStartOfCaseAtIndex (GALGAS_location inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStartOfCase = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_SwitchInstructionCaseList::getter_mStartOfCaseAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    result = p->mObject.mProperty_mStartOfCase ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_setMCaseExpressionListAtIndex (GALGAS_pic_31__38_CaseExpressionList inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCaseExpressionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList GALGAS_pic_31__38_SwitchInstructionCaseList::getter_mCaseExpressionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  GALGAS_pic_31__38_CaseExpressionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    result = p->mObject.mProperty_mCaseExpressionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_SwitchInstructionCaseList::setter_setMInstructionListAtIndex (GALGAS_pic_31__38_InstructionList inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_SwitchInstructionCaseList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (cCollectionElement_pic_31__38_SwitchInstructionCaseList *) attributes.ptr () ;
  GALGAS_pic_31__38_InstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38_SwitchInstructionCaseList::cEnumerator_pic_31__38_SwitchInstructionCaseList (const GALGAS_pic_31__38_SwitchInstructionCaseList & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList_2D_element cEnumerator_pic_31__38_SwitchInstructionCaseList::current (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (const cCollectionElement_pic_31__38_SwitchInstructionCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_pic_31__38_SwitchInstructionCaseList::current_mStartOfCase (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (const cCollectionElement_pic_31__38_SwitchInstructionCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
  return p->mObject.mProperty_mStartOfCase ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_CaseExpressionList cEnumerator_pic_31__38_SwitchInstructionCaseList::current_mCaseExpressionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (const cCollectionElement_pic_31__38_SwitchInstructionCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
  return p->mObject.mProperty_mCaseExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList cEnumerator_pic_31__38_SwitchInstructionCaseList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_pic_31__38_SwitchInstructionCaseList * p = (const cCollectionElement_pic_31__38_SwitchInstructionCaseList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_pic_31__38_SwitchInstructionCaseList) ;
  return p->mObject.mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @pic18SwitchInstructionCaseList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ("pic18SwitchInstructionCaseList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_SwitchInstructionCaseList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_SwitchInstructionCaseList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_SwitchInstructionCaseList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_SwitchInstructionCaseList::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_SwitchInstructionCaseList result ;
  const GALGAS_pic_31__38_SwitchInstructionCaseList * p = (const GALGAS_pic_31__38_SwitchInstructionCaseList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_SwitchInstructionCaseList *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_switch::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mCaseList.printNonNullClassInstanceProperties ("mCaseList") ;
    mProperty_mElseBranchStartLocation.printNonNullClassInstanceProperties ("mElseBranchStartLocation") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_Instruction_5F_switch::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_Instruction_5F_switch * p = (const cPtr_pic_31__38_Instruction_5F_switch *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseList.objectCompare (p->mProperty_mCaseList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseBranchStartLocation.objectCompare (p->mProperty_mElseBranchStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_Instruction_5F_switch::objectCompare (const GALGAS_pic_31__38_Instruction_5F_switch & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch::GALGAS_pic_31__38_Instruction_5F_switch (void) :
GALGAS_pic_31__38_PiccoloInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch::GALGAS_pic_31__38_Instruction_5F_switch (const cPtr_pic_31__38_Instruction_5F_switch * inSourcePtr) :
GALGAS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_switch) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch GALGAS_pic_31__38_Instruction_5F_switch::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
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

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_switch::setter_setMCaseList (GALGAS_pic_31__38_SwitchInstructionCaseList inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    p->mProperty_mCaseList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_switch::setter_setMElseBranchStartLocation (GALGAS_location inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    p->mProperty_mElseBranchStartLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_Instruction_5F_switch::setter_setMElseInstructionList (GALGAS_pic_31__38_InstructionList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_SwitchInstructionCaseList GALGAS_pic_31__38_Instruction_5F_switch::readProperty_mCaseList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_SwitchInstructionCaseList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    return p->mProperty_mCaseList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_pic_31__38_Instruction_5F_switch::readProperty_mElseBranchStartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    return p->mProperty_mElseBranchStartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionList GALGAS_pic_31__38_Instruction_5F_switch::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_switch * p = (cPtr_pic_31__38_Instruction_5F_switch *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_switch) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_switch class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_switch::cPtr_pic_31__38_Instruction_5F_switch (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_pic_31__38_SwitchInstructionCaseList & in_mCaseList,
                                                                              const GALGAS_location & in_mElseBranchStartLocation,
                                                                              const GALGAS_pic_31__38_InstructionList & in_mElseInstructionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mCaseList (in_mCaseList),
mProperty_mElseBranchStartLocation (in_mElseBranchStartLocation),
mProperty_mElseInstructionList (in_mElseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_Instruction_5F_switch::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

void cPtr_pic_31__38_Instruction_5F_switch::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@pic18Instruction_switch:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCaseList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mElseBranchStartLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_Instruction_5F_switch::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_switch (mProperty_mInstructionLocation, mProperty_mCaseList, mProperty_mElseBranchStartLocation, mProperty_mElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_switch generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ("pic18Instruction_switch",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_switch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_switch::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_switch (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch GALGAS_pic_31__38_Instruction_5F_switch::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_switch result ;
  const GALGAS_pic_31__38_Instruction_5F_switch * p = (const GALGAS_pic_31__38_Instruction_5F_switch *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_switch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_switch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_Instruction_5F_switch_2D_weak::objectCompare (const GALGAS_pic_31__38_Instruction_5F_switch_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch_2D_weak::GALGAS_pic_31__38_Instruction_5F_switch_2D_weak (void) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch_2D_weak & GALGAS_pic_31__38_Instruction_5F_switch_2D_weak::operator = (const GALGAS_pic_31__38_Instruction_5F_switch & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch_2D_weak::GALGAS_pic_31__38_Instruction_5F_switch_2D_weak (const GALGAS_pic_31__38_Instruction_5F_switch & inSource) :
GALGAS_pic_31__38_PiccoloInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch_2D_weak GALGAS_pic_31__38_Instruction_5F_switch_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_switch_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch GALGAS_pic_31__38_Instruction_5F_switch_2D_weak::bang_pic_31__38_Instruction_5F_switch_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_Instruction_5F_switch result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_switch) ;
      result = GALGAS_pic_31__38_Instruction_5F_switch ((cPtr_pic_31__38_Instruction_5F_switch *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18Instruction_switch-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch_2D_weak ("pic18Instruction_switch-weak",
                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_Instruction_5F_switch_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_switch_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_Instruction_5F_switch_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_Instruction_5F_switch_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_switch_2D_weak GALGAS_pic_31__38_Instruction_5F_switch_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_Instruction_5F_switch_2D_weak result ;
  const GALGAS_pic_31__38_Instruction_5F_switch_2D_weak * p = (const GALGAS_pic_31__38_Instruction_5F_switch_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_Instruction_5F_switch_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_switch-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_caseConstantMap::cMapElement_caseConstantMap (const GALGAS_lstring & inKey
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_caseConstantMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_caseConstantMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_caseConstantMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_caseConstantMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_caseConstantMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_caseConstantMap * operand = (cMapElement_caseConstantMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap::GALGAS_caseConstantMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap::GALGAS_caseConstantMap (const GALGAS_caseConstantMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap & GALGAS_caseConstantMap::operator = (const GALGAS_caseConstantMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap GALGAS_caseConstantMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_caseConstantMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap GALGAS_caseConstantMap::class_func_mapWithMapToOverride (const GALGAS_caseConstantMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_caseConstantMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap GALGAS_caseConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_caseConstantMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_caseConstantMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_caseConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_caseConstantMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@caseConstantMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap GALGAS_caseConstantMap::add_operation (const GALGAS_caseConstantMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_caseConstantMap result = *this ;
  cEnumerator_caseConstantMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_caseConstantMap::setter_insertKey (GALGAS_lstring inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_caseConstantMap * p = nullptr ;
  macroMyNew (p, cMapElement_caseConstantMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_caseConstantMap * GALGAS_caseConstantMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_caseConstantMap * result = (cMapElement_caseConstantMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_caseConstantMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_caseConstantMap::cEnumerator_caseConstantMap (const GALGAS_caseConstantMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap_2D_element cEnumerator_caseConstantMap::current (LOCATION_ARGS) const {
  const cMapElement_caseConstantMap * p = (const cMapElement_caseConstantMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_caseConstantMap) ;
  return GALGAS_caseConstantMap_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_caseConstantMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_caseConstantMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_caseConstantMap * p = (const cMapElement_caseConstantMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_caseConstantMap) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @caseConstantMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_caseConstantMap ("caseConstantMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_caseConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_caseConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_caseConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_caseConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_caseConstantMap GALGAS_caseConstantMap::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_caseConstantMap result ;
  const GALGAS_caseConstantMap * p = (const GALGAS_caseConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_caseConstantMap *> (p)) {
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
                                          const GALGAS_registerTable constin_inRegisterTable,
                                          const GALGAS_constantMap constin_inConstantMap,
                                          const GALGAS_lstring constin_inConditionTrueLabel,
                                          const GALGAS_string constin_inIndexForLabels,
                                          GALGAS_stringset & io_ioUsedRegisters,
                                          GALGAS_caseConstantMap & io_ioCaseConstantMap,
                                          GALGAS_ipic_31__38_SequentialInstructionList & io_ioGeneratedInstructionList,
                                          GALGAS_ipic_31__38_BlockList & io_ioGeneratedBlockList,
                                          GALGAS_lstring & io_ioBlockLabel,
                                          GALGAS_sint_36__34_ & io_ioLastComparisonValue,
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

cMapElement_pic_31__38__5F_dataMap::cMapElement_pic_31__38__5F_dataMap (const GALGAS_lstring & inKey,
                                                                        const GALGAS_uintlist & in_mData,
                                                                        const GALGAS_bool & in_mIsData_38_
                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mData (in_mData),
mProperty_mIsData_38_ (in_mIsData_38_) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_pic_31__38__5F_dataMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_pic_31__38__5F_dataMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_pic_31__38__5F_dataMap (mProperty_lkey, mProperty_mData, mProperty_mIsData_38_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_pic_31__38__5F_dataMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mData" ":") ;
  mProperty_mData.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mIsData8" ":") ;
  mProperty_mIsData_38_.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_pic_31__38__5F_dataMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_pic_31__38__5F_dataMap * operand = (cMapElement_pic_31__38__5F_dataMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mData.objectCompare (operand->mProperty_mData) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsData_38_.objectCompare (operand->mProperty_mIsData_38_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap::GALGAS_pic_31__38__5F_dataMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap::GALGAS_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap & GALGAS_pic_31__38__5F_dataMap::operator = (const GALGAS_pic_31__38__5F_dataMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap GALGAS_pic_31__38__5F_dataMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap GALGAS_pic_31__38__5F_dataMap::class_func_mapWithMapToOverride (const GALGAS_pic_31__38__5F_dataMap & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap GALGAS_pic_31__38__5F_dataMap::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38__5F_dataMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                         const GALGAS_uintlist & inArgument0,
                                                         const GALGAS_bool & inArgument1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataMap * p = nullptr ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@pic_31__38__5F_dataMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap GALGAS_pic_31__38__5F_dataMap::add_operation (const GALGAS_pic_31__38__5F_dataMap & inOperand,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38__5F_dataMap result = *this ;
  cEnumerator_pic_31__38__5F_dataMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mData (HERE), enumerator.current_mIsData_38_ (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap::setter_insertKey (GALGAS_lstring inKey,
                                                      GALGAS_uintlist inArgument0,
                                                      GALGAS_bool inArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataMap * p = nullptr ;
  macroMyNew (p, cMapElement_pic_31__38__5F_dataMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_pic_31__38__5F_dataMap_searchKey = "the '%K' data is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap::method_searchKey (GALGAS_lstring inKey,
                                                      GALGAS_uintlist & outArgument0,
                                                      GALGAS_bool & outArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) performSearch (inKey,
                                                                                                             inCompiler,
                                                                                                             kSearchErrorMessage_pic_31__38__5F_dataMap_searchKey
                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    outArgument0 = p->mProperty_mData ;
    outArgument1 = p->mProperty_mIsData_38_ ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_pic_31__38__5F_dataMap::getter_mDataForKey (const GALGAS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) attributes ;
  GALGAS_uintlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    result = p->mProperty_mData ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_pic_31__38__5F_dataMap::getter_mIsData_38_ForKey (const GALGAS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    result = p->mProperty_mIsData_38_ ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap::setter_setMDataForKey (GALGAS_uintlist inAttributeValue,
                                                           GALGAS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38__5F_dataMap * p = (cMapElement_pic_31__38__5F_dataMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    p->mProperty_mData = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38__5F_dataMap::setter_setMIsData_38_ForKey (GALGAS_bool inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_pic_31__38__5F_dataMap * p = (cMapElement_pic_31__38__5F_dataMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    p->mProperty_mIsData_38_ = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_pic_31__38__5F_dataMap * GALGAS_pic_31__38__5F_dataMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                       const GALGAS_string & inKey
                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_pic_31__38__5F_dataMap * result = (cMapElement_pic_31__38__5F_dataMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_pic_31__38__5F_dataMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_pic_31__38__5F_dataMap::cEnumerator_pic_31__38__5F_dataMap (const GALGAS_pic_31__38__5F_dataMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap_2D_element cEnumerator_pic_31__38__5F_dataMap::current (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
  return GALGAS_pic_31__38__5F_dataMap_2D_element (p->mProperty_lkey, p->mProperty_mData, p->mProperty_mIsData_38_) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_pic_31__38__5F_dataMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist cEnumerator_pic_31__38__5F_dataMap::current_mData (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
  return p->mProperty_mData ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_pic_31__38__5F_dataMap::current_mIsData_38_ (LOCATION_ARGS) const {
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
  return p->mProperty_mIsData_38_ ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_pic_31__38__5F_dataMap::optional_searchKey (const GALGAS_string & inKey,
                                                        GALGAS_uintlist & outArgument0,
                                                        GALGAS_bool & outArgument1) const {
  const cMapElement_pic_31__38__5F_dataMap * p = (const cMapElement_pic_31__38__5F_dataMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_pic_31__38__5F_dataMap) ;
    outArgument0 = p->mProperty_mData ;
    outArgument1 = p->mProperty_mIsData_38_ ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18_dataMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ("pic18_dataMap",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38__5F_dataMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38__5F_dataMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38__5F_dataMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38__5F_dataMap GALGAS_pic_31__38__5F_dataMap::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38__5F_dataMap result ;
  const GALGAS_pic_31__38__5F_dataMap * p = (const GALGAS_pic_31__38__5F_dataMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38__5F_dataMap *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ipic_31__38_SequentialInstruction::objectCompare (const GALGAS_ipic_31__38_SequentialInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction::GALGAS_ipic_31__38_SequentialInstruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction::GALGAS_ipic_31__38_SequentialInstruction (const cPtr_ipic_31__38_SequentialInstruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_SequentialInstruction) ;
}
//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstruction::setter_setMInstructionLocation (GALGAS_location inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_SequentialInstruction * p = (cPtr_ipic_31__38_SequentialInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_SequentialInstruction) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ipic_31__38_SequentialInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ipic_31__38_SequentialInstruction * p = (cPtr_ipic_31__38_SequentialInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_SequentialInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18SequentialInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SequentialInstruction::cPtr_ipic_31__38_SequentialInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18SequentialInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ("ipic18SequentialInstruction",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SequentialInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_SequentialInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SequentialInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction GALGAS_ipic_31__38_SequentialInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstruction result ;
  const GALGAS_ipic_31__38_SequentialInstruction * p = (const GALGAS_ipic_31__38_SequentialInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_SequentialInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_SequentialInstruction_2D_weak::objectCompare (const GALGAS_ipic_31__38_SequentialInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction_2D_weak::GALGAS_ipic_31__38_SequentialInstruction_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction_2D_weak & GALGAS_ipic_31__38_SequentialInstruction_2D_weak::operator = (const GALGAS_ipic_31__38_SequentialInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction_2D_weak::GALGAS_ipic_31__38_SequentialInstruction_2D_weak (const GALGAS_ipic_31__38_SequentialInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction_2D_weak GALGAS_ipic_31__38_SequentialInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction GALGAS_ipic_31__38_SequentialInstruction_2D_weak::bang_ipic_31__38_SequentialInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_SequentialInstruction) ;
      result = GALGAS_ipic_31__38_SequentialInstruction ((cPtr_ipic_31__38_SequentialInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18SequentialInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak ("ipic18SequentialInstruction-weak",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SequentialInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_SequentialInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SequentialInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction_2D_weak GALGAS_ipic_31__38_SequentialInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstruction_2D_weak result ;
  const GALGAS_ipic_31__38_SequentialInstruction_2D_weak * p = (const GALGAS_ipic_31__38_SequentialInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_SequentialInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SequentialInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ipic_31__38_SequentialInstructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ipic_31__38_SequentialInstructionList : public cCollectionElement {
  public: GALGAS_ipic_31__38_SequentialInstructionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                    const GALGAS_uint & in_mMin,
                                                                    const GALGAS_uint & in_mMax
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_SequentialInstructionList::cCollectionElement_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                                                                    const GALGAS_uint & in_mMin,
                                                                                                                    const GALGAS_uint & in_mMax
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction, in_mMin, in_mMax) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_SequentialInstructionList::cCollectionElement_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_ipic_31__38_SequentialInstructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMin" ":") ;
  mObject.mProperty_mMin.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mMax" ":") ;
  mObject.mProperty_mMax.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_ipic_31__38_SequentialInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ipic_31__38_SequentialInstructionList * operand = (cCollectionElement_ipic_31__38_SequentialInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList::GALGAS_ipic_31__38_SequentialInstructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList::GALGAS_ipic_31__38_SequentialInstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ipic_31__38_SequentialInstructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::class_func_listWithValue (const GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                                                                     const GALGAS_uint & inOperand1,
                                                                                                                     const GALGAS_uint & inOperand2
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstructionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_ipic_31__38_SequentialInstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ipic_31__38_SequentialInstructionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_ipic_31__38_SequentialInstruction & in_mInstruction,
                                                                              const GALGAS_uint & in_mMin,
                                                                              const GALGAS_uint & in_mMax
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ipic_31__38_SequentialInstructionList (in_mInstruction,
                                                                           in_mMin,
                                                                           in_mMax COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::addAssign_operation (const GALGAS_ipic_31__38_SequentialInstruction & inOperand0,
                                                                        const GALGAS_uint & inOperand1,
                                                                        const GALGAS_uint & inOperand2
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ipic_31__38_SequentialInstructionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_append (const GALGAS_ipic_31__38_SequentialInstruction inOperand0,
                                                                  const GALGAS_uint inOperand1,
                                                                  const GALGAS_uint inOperand2,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ipic_31__38_SequentialInstructionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_insertAtIndex (const GALGAS_ipic_31__38_SequentialInstruction inOperand0,
                                                                         const GALGAS_uint inOperand1,
                                                                         const GALGAS_uint inOperand2,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ipic_31__38_SequentialInstructionList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_removeAtIndex (GALGAS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                         GALGAS_uint & outOperand1,
                                                                         GALGAS_uint & outOperand2,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
        outOperand1 = p->mObject.mProperty_mMin ;
        outOperand2 = p->mObject.mProperty_mMax ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_popFirst (GALGAS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                    GALGAS_uint & outOperand1,
                                                                    GALGAS_uint & outOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
    outOperand1 = p->mObject.mProperty_mMin ;
    outOperand2 = p->mObject.mProperty_mMax ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_popLast (GALGAS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                   GALGAS_uint & outOperand1,
                                                                   GALGAS_uint & outOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
    outOperand1 = p->mObject.mProperty_mMin ;
    outOperand2 = p->mObject.mProperty_mMax ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::method_first (GALGAS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                 GALGAS_uint & outOperand1,
                                                                 GALGAS_uint & outOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
    outOperand1 = p->mObject.mProperty_mMin ;
    outOperand2 = p->mObject.mProperty_mMax ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::method_last (GALGAS_ipic_31__38_SequentialInstruction & outOperand0,
                                                                GALGAS_uint & outOperand1,
                                                                GALGAS_uint & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
    outOperand1 = p->mObject.mProperty_mMin ;
    outOperand2 = p->mObject.mProperty_mMax ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::add_operation (const GALGAS_ipic_31__38_SequentialInstructionList & inOperand,
                                                                                                          Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstructionList result = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstructionList result = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SequentialInstructionList result = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::plusAssign_operation (const GALGAS_ipic_31__38_SequentialInstructionList inOperand,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_setMInstructionAtIndex (GALGAS_ipic_31__38_SequentialInstruction inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction GALGAS_ipic_31__38_SequentialInstructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  GALGAS_ipic_31__38_SequentialInstruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_setMMinAtIndex (GALGAS_uint inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMin = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38_SequentialInstructionList::getter_mMinAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    result = p->mObject.mProperty_mMin ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_SequentialInstructionList::setter_setMMaxAtIndex (GALGAS_uint inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMax = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38_SequentialInstructionList::getter_mMaxAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_SequentialInstructionList * p = (cCollectionElement_ipic_31__38_SequentialInstructionList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
    result = p->mObject.mProperty_mMax ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ipic_31__38_SequentialInstructionList::cEnumerator_ipic_31__38_SequentialInstructionList (const GALGAS_ipic_31__38_SequentialInstructionList & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList_2D_element cEnumerator_ipic_31__38_SequentialInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_SequentialInstructionList * p = (const cCollectionElement_ipic_31__38_SequentialInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction cEnumerator_ipic_31__38_SequentialInstructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_SequentialInstructionList * p = (const cCollectionElement_ipic_31__38_SequentialInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
  return p->mObject.mProperty_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ipic_31__38_SequentialInstructionList::current_mMin (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_SequentialInstructionList * p = (const cCollectionElement_ipic_31__38_SequentialInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
  return p->mObject.mProperty_mMin ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ipic_31__38_SequentialInstructionList::current_mMax (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_SequentialInstructionList * p = (const cCollectionElement_ipic_31__38_SequentialInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_SequentialInstructionList) ;
  return p->mObject.mProperty_mMax ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ipic18SequentialInstructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ("ipic18SequentialInstructionList",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SequentialInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_SequentialInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SequentialInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38_SequentialInstructionList::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SequentialInstructionList result ;
  const GALGAS_ipic_31__38_SequentialInstructionList * p = (const GALGAS_ipic_31__38_SequentialInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_SequentialInstructionList *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ipic_31__38_AbstractBlockTerminator::objectCompare (const GALGAS_ipic_31__38_AbstractBlockTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator::GALGAS_ipic_31__38_AbstractBlockTerminator (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator::GALGAS_ipic_31__38_AbstractBlockTerminator (const cPtr_ipic_31__38_AbstractBlockTerminator * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_AbstractBlockTerminator) ;
}
//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_AbstractBlockTerminator::setter_setMInstructionLocation (GALGAS_location inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_AbstractBlockTerminator * p = (cPtr_ipic_31__38_AbstractBlockTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ipic_31__38_AbstractBlockTerminator::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ipic_31__38_AbstractBlockTerminator * p = (cPtr_ipic_31__38_AbstractBlockTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractBlockTerminator) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18AbstractBlockTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractBlockTerminator::cPtr_ipic_31__38_AbstractBlockTerminator (const GALGAS_location & in_mInstructionLocation
                                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18AbstractBlockTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ("ipic18AbstractBlockTerminator",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_AbstractBlockTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_AbstractBlockTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_AbstractBlockTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator GALGAS_ipic_31__38_AbstractBlockTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_AbstractBlockTerminator result ;
  const GALGAS_ipic_31__38_AbstractBlockTerminator * p = (const GALGAS_ipic_31__38_AbstractBlockTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_AbstractBlockTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractBlockTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak::GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak & GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_AbstractBlockTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak::GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (const GALGAS_ipic_31__38_AbstractBlockTerminator & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak::bang_ipic_31__38_AbstractBlockTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_AbstractBlockTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_AbstractBlockTerminator) ;
      result = GALGAS_ipic_31__38_AbstractBlockTerminator ((cPtr_ipic_31__38_AbstractBlockTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18AbstractBlockTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak ("ipic18AbstractBlockTerminator-weak",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak * p = (const GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractBlockTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ipic_31__38_BlockList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ipic_31__38_BlockList : public cCollectionElement {
  public: GALGAS_ipic_31__38_BlockList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_ipic_31__38_BlockList (const GALGAS_ipic_31__38_Block & in_mBlock
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ipic_31__38_BlockList (const GALGAS_ipic_31__38_BlockList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_BlockList::cCollectionElement_ipic_31__38_BlockList (const GALGAS_ipic_31__38_Block & in_mBlock
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBlock) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ipic_31__38_BlockList::cCollectionElement_ipic_31__38_BlockList (const GALGAS_ipic_31__38_BlockList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

void cCollectionElement_ipic_31__38_BlockList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mBlock" ":") ;
  mObject.mProperty_mBlock.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_ipic_31__38_BlockList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ipic_31__38_BlockList * operand = (cCollectionElement_ipic_31__38_BlockList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ipic_31__38_BlockList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList::GALGAS_ipic_31__38_BlockList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList::GALGAS_ipic_31__38_BlockList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ipic_31__38_BlockList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::class_func_listWithValue (const GALGAS_ipic_31__38_Block & inOperand0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ipic_31__38_BlockList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ipic_31__38_BlockList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_ipic_31__38_Block & in_mBlock
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_BlockList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ipic_31__38_BlockList (in_mBlock COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::addAssign_operation (const GALGAS_ipic_31__38_Block & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ipic_31__38_BlockList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::setter_append (const GALGAS_ipic_31__38_Block inOperand0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ipic_31__38_BlockList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::setter_insertAtIndex (const GALGAS_ipic_31__38_Block inOperand0,
                                                         const GALGAS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ipic_31__38_BlockList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::setter_removeAtIndex (GALGAS_ipic_31__38_Block & outOperand0,
                                                         const GALGAS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
        outOperand0 = p->mObject.mProperty_mBlock ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::setter_popFirst (GALGAS_ipic_31__38_Block & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    outOperand0 = p->mObject.mProperty_mBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::setter_popLast (GALGAS_ipic_31__38_Block & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    outOperand0 = p->mObject.mProperty_mBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::method_first (GALGAS_ipic_31__38_Block & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    outOperand0 = p->mObject.mProperty_mBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::method_last (GALGAS_ipic_31__38_Block & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    outOperand0 = p->mObject.mProperty_mBlock ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::add_operation (const GALGAS_ipic_31__38_BlockList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_BlockList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_BlockList result = GALGAS_ipic_31__38_BlockList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_BlockList result = GALGAS_ipic_31__38_BlockList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_BlockList result = GALGAS_ipic_31__38_BlockList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::plusAssign_operation (const GALGAS_ipic_31__38_BlockList inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_BlockList::setter_setMBlockAtIndex (GALGAS_ipic_31__38_Block inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBlock = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block GALGAS_ipic_31__38_BlockList::getter_mBlockAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ipic_31__38_BlockList * p = (cCollectionElement_ipic_31__38_BlockList *) attributes.ptr () ;
  GALGAS_ipic_31__38_Block result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
    result = p->mObject.mProperty_mBlock ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ipic_31__38_BlockList::cEnumerator_ipic_31__38_BlockList (const GALGAS_ipic_31__38_BlockList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList_2D_element cEnumerator_ipic_31__38_BlockList::current (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_BlockList * p = (const cCollectionElement_ipic_31__38_BlockList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_Block cEnumerator_ipic_31__38_BlockList::current_mBlock (LOCATION_ARGS) const {
  const cCollectionElement_ipic_31__38_BlockList * p = (const cCollectionElement_ipic_31__38_BlockList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ipic_31__38_BlockList) ;
  return p->mObject.mProperty_mBlock ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ipic18BlockList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_BlockList ("ipic18BlockList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_BlockList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_BlockList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_BlockList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_BlockList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_BlockList GALGAS_ipic_31__38_BlockList::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList result ;
  const GALGAS_ipic_31__38_BlockList * p = (const GALGAS_ipic_31__38_BlockList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_BlockList *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ipic_31__38_SingleInstructionTerminator::objectCompare (const GALGAS_ipic_31__38_SingleInstructionTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator::GALGAS_ipic_31__38_SingleInstructionTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator::GALGAS_ipic_31__38_SingleInstructionTerminator (const cPtr_ipic_31__38_SingleInstructionTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_SingleInstructionTerminator) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18SingleInstructionTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_SingleInstructionTerminator::cPtr_ipic_31__38_SingleInstructionTerminator (const GALGAS_location & in_mInstructionLocation
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18SingleInstructionTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ("ipic18SingleInstructionTerminator",
                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SingleInstructionTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_SingleInstructionTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SingleInstructionTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator GALGAS_ipic_31__38_SingleInstructionTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SingleInstructionTerminator result ;
  const GALGAS_ipic_31__38_SingleInstructionTerminator * p = (const GALGAS_ipic_31__38_SingleInstructionTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_SingleInstructionTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SingleInstructionTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak::GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak & GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_SingleInstructionTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak::GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak (const GALGAS_ipic_31__38_SingleInstructionTerminator & inSource) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak::bang_ipic_31__38_SingleInstructionTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_SingleInstructionTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_SingleInstructionTerminator) ;
      result = GALGAS_ipic_31__38_SingleInstructionTerminator ((cPtr_ipic_31__38_SingleInstructionTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18SingleInstructionTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak ("ipic18SingleInstructionTerminator-weak",
                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak * p = (const GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18SingleInstructionTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ReturnTerminator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ReturnTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_ReturnTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_ReturnTerminator * p = (const cPtr_ipic_31__38_ReturnTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ReturnTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_ReturnTerminator::objectCompare (const GALGAS_ipic_31__38_ReturnTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator::GALGAS_ipic_31__38_ReturnTerminator (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator::GALGAS_ipic_31__38_ReturnTerminator (const cPtr_ipic_31__38_ReturnTerminator * inSourcePtr) :
GALGAS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ReturnTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator GALGAS_ipic_31__38_ReturnTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ReturnTerminator result ;
  if (inAttribute_mInstructionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ReturnTerminator (inAttribute_mInstructionLocation COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ReturnTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ReturnTerminator::cPtr_ipic_31__38_ReturnTerminator (const GALGAS_location & in_mInstructionLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_ReturnTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;
}

void cPtr_ipic_31__38_ReturnTerminator::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("[@ipic18ReturnTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ReturnTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ReturnTerminator (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18ReturnTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ("ipic18ReturnTerminator",
                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ReturnTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ReturnTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ReturnTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator GALGAS_ipic_31__38_ReturnTerminator::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ReturnTerminator result ;
  const GALGAS_ipic_31__38_ReturnTerminator * p = (const GALGAS_ipic_31__38_ReturnTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_ReturnTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ReturnTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_ReturnTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_ReturnTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator_2D_weak::GALGAS_ipic_31__38_ReturnTerminator_2D_weak (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator_2D_weak & GALGAS_ipic_31__38_ReturnTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_ReturnTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator_2D_weak::GALGAS_ipic_31__38_ReturnTerminator_2D_weak (const GALGAS_ipic_31__38_ReturnTerminator & inSource) :
GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator_2D_weak GALGAS_ipic_31__38_ReturnTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_ReturnTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator GALGAS_ipic_31__38_ReturnTerminator_2D_weak::bang_ipic_31__38_ReturnTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_ReturnTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ReturnTerminator) ;
      result = GALGAS_ipic_31__38_ReturnTerminator ((cPtr_ipic_31__38_ReturnTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18ReturnTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2D_weak ("ipic18ReturnTerminator-weak",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ReturnTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ReturnTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ReturnTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ReturnTerminator_2D_weak GALGAS_ipic_31__38_ReturnTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ReturnTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_ReturnTerminator_2D_weak * p = (const GALGAS_ipic_31__38_ReturnTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_ReturnTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ReturnTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_RetlwTerminator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_RetlwTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_RetlwTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_RetlwTerminator * p = (const cPtr_ipic_31__38_RetlwTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_RetlwTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralValue.objectCompare (p->mProperty_mLiteralValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_RetlwTerminator::objectCompare (const GALGAS_ipic_31__38_RetlwTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator::GALGAS_ipic_31__38_RetlwTerminator (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator::GALGAS_ipic_31__38_RetlwTerminator (const cPtr_ipic_31__38_RetlwTerminator * inSourcePtr) :
GALGAS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_RetlwTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator GALGAS_ipic_31__38_RetlwTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                       const GALGAS_uint & inAttribute_mLiteralValue
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetlwTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_RetlwTerminator (inAttribute_mInstructionLocation, inAttribute_mLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_RetlwTerminator::setter_setMLiteralValue (GALGAS_uint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_RetlwTerminator * p = (cPtr_ipic_31__38_RetlwTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetlwTerminator) ;
    p->mProperty_mLiteralValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38_RetlwTerminator::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38_RetlwTerminator * p = (cPtr_ipic_31__38_RetlwTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetlwTerminator) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18RetlwTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetlwTerminator::cPtr_ipic_31__38_RetlwTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                    const GALGAS_uint & in_mLiteralValue
                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralValue (in_mLiteralValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_RetlwTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;
}

void cPtr_ipic_31__38_RetlwTerminator::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.addString ("[@ipic18RetlwTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_RetlwTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_RetlwTerminator (mProperty_mInstructionLocation, mProperty_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18RetlwTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ("ipic18RetlwTerminator",
                                                                                   & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_RetlwTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_RetlwTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_RetlwTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator GALGAS_ipic_31__38_RetlwTerminator::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetlwTerminator result ;
  const GALGAS_ipic_31__38_RetlwTerminator * p = (const GALGAS_ipic_31__38_RetlwTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_RetlwTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetlwTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_RetlwTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_RetlwTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator_2D_weak::GALGAS_ipic_31__38_RetlwTerminator_2D_weak (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator_2D_weak & GALGAS_ipic_31__38_RetlwTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_RetlwTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator_2D_weak::GALGAS_ipic_31__38_RetlwTerminator_2D_weak (const GALGAS_ipic_31__38_RetlwTerminator & inSource) :
GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator_2D_weak GALGAS_ipic_31__38_RetlwTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetlwTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator GALGAS_ipic_31__38_RetlwTerminator_2D_weak::bang_ipic_31__38_RetlwTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_RetlwTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_RetlwTerminator) ;
      result = GALGAS_ipic_31__38_RetlwTerminator ((cPtr_ipic_31__38_RetlwTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18RetlwTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2D_weak ("ipic18RetlwTerminator-weak",
                                                                                           & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_RetlwTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_RetlwTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_RetlwTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetlwTerminator_2D_weak GALGAS_ipic_31__38_RetlwTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetlwTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_RetlwTerminator_2D_weak * p = (const GALGAS_ipic_31__38_RetlwTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_RetlwTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetlwTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_RetfieTerminator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_RetfieTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SingleInstructionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mFastReturn.printNonNullClassInstanceProperties ("mFastReturn") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_RetfieTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_RetfieTerminator * p = (const cPtr_ipic_31__38_RetfieTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_RetfieTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFastReturn.objectCompare (p->mProperty_mFastReturn) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_RetfieTerminator::objectCompare (const GALGAS_ipic_31__38_RetfieTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator::GALGAS_ipic_31__38_RetfieTerminator (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator::GALGAS_ipic_31__38_RetfieTerminator (const cPtr_ipic_31__38_RetfieTerminator * inSourcePtr) :
GALGAS_ipic_31__38_SingleInstructionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_RetfieTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator GALGAS_ipic_31__38_RetfieTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                         const GALGAS_bool & inAttribute_mFastReturn
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetfieTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFastReturn.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_RetfieTerminator (inAttribute_mInstructionLocation, inAttribute_mFastReturn COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_RetfieTerminator::setter_setMFastReturn (GALGAS_bool inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_RetfieTerminator * p = (cPtr_ipic_31__38_RetfieTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetfieTerminator) ;
    p->mProperty_mFastReturn = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_RetfieTerminator::readProperty_mFastReturn (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ipic_31__38_RetfieTerminator * p = (cPtr_ipic_31__38_RetfieTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_RetfieTerminator) ;
    return p->mProperty_mFastReturn ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18RetfieTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_RetfieTerminator::cPtr_ipic_31__38_RetfieTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_bool & in_mFastReturn
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SingleInstructionTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mFastReturn (in_mFastReturn) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_RetfieTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;
}

void cPtr_ipic_31__38_RetfieTerminator::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("[@ipic18RetfieTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFastReturn.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_RetfieTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_RetfieTerminator (mProperty_mInstructionLocation, mProperty_mFastReturn COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18RetfieTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ("ipic18RetfieTerminator",
                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_RetfieTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_RetfieTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_RetfieTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator GALGAS_ipic_31__38_RetfieTerminator::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetfieTerminator result ;
  const GALGAS_ipic_31__38_RetfieTerminator * p = (const GALGAS_ipic_31__38_RetfieTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_RetfieTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetfieTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_RetfieTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_RetfieTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator_2D_weak::GALGAS_ipic_31__38_RetfieTerminator_2D_weak (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator_2D_weak & GALGAS_ipic_31__38_RetfieTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_RetfieTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator_2D_weak::GALGAS_ipic_31__38_RetfieTerminator_2D_weak (const GALGAS_ipic_31__38_RetfieTerminator & inSource) :
GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator_2D_weak GALGAS_ipic_31__38_RetfieTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetfieTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator GALGAS_ipic_31__38_RetfieTerminator_2D_weak::bang_ipic_31__38_RetfieTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_RetfieTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_RetfieTerminator) ;
      result = GALGAS_ipic_31__38_RetfieTerminator ((cPtr_ipic_31__38_RetfieTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18RetfieTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2D_weak ("ipic18RetfieTerminator-weak",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_RetfieTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_RetfieTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_RetfieTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RetfieTerminator_2D_weak GALGAS_ipic_31__38_RetfieTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RetfieTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_RetfieTerminator_2D_weak * p = (const GALGAS_ipic_31__38_RetfieTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_RetfieTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18RetfieTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_JumpTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_JumpTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator_2D_weak::GALGAS_ipic_31__38_JumpTerminator_2D_weak (void) :
GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator_2D_weak & GALGAS_ipic_31__38_JumpTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_JumpTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator_2D_weak::GALGAS_ipic_31__38_JumpTerminator_2D_weak (const GALGAS_ipic_31__38_JumpTerminator & inSource) :
GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator_2D_weak GALGAS_ipic_31__38_JumpTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_JumpTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator GALGAS_ipic_31__38_JumpTerminator_2D_weak::bang_ipic_31__38_JumpTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_JumpTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_JumpTerminator) ;
      result = GALGAS_ipic_31__38_JumpTerminator ((cPtr_ipic_31__38_JumpTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18JumpTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2D_weak ("ipic18JumpTerminator-weak",
                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38_SingleInstructionTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_JumpTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_JumpTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_JumpTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_JumpTerminator_2D_weak GALGAS_ipic_31__38_JumpTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_JumpTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_JumpTerminator_2D_weak * p = (const GALGAS_ipic_31__38_JumpTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_JumpTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18JumpTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ComputedGotoTerminator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ComputedGotoTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabels.printNonNullClassInstanceProperties ("mTargetLabels") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_ComputedGotoTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_ComputedGotoTerminator * p = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabels.objectCompare (p->mProperty_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRCALL.objectCompare (p->mProperty_mUsesRCALL) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_ComputedGotoTerminator::objectCompare (const GALGAS_ipic_31__38_ComputedGotoTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator::GALGAS_ipic_31__38_ComputedGotoTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator::GALGAS_ipic_31__38_ComputedGotoTerminator (const cPtr_ipic_31__38_ComputedGotoTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedGotoTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator GALGAS_ipic_31__38_ComputedGotoTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                     const GALGAS_lstringlist & inAttribute_mTargetLabels,
                                                                                                     const GALGAS_bool & inAttribute_mUsesRCALL
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedGotoTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabels.isValid () && inAttribute_mUsesRCALL.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ComputedGotoTerminator (inAttribute_mInstructionLocation, inAttribute_mTargetLabels, inAttribute_mUsesRCALL COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedGotoTerminator::setter_setMTargetLabels (GALGAS_lstringlist inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
    p->mProperty_mTargetLabels = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedGotoTerminator::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
    p->mProperty_mUsesRCALL = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_ipic_31__38_ComputedGotoTerminator::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_ComputedGotoTerminator::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ipic_31__38_ComputedGotoTerminator * p = (cPtr_ipic_31__38_ComputedGotoTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedGotoTerminator) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedGotoTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedGotoTerminator::cPtr_ipic_31__38_ComputedGotoTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_lstringlist & in_mTargetLabels,
                                                                                  const GALGAS_bool & in_mUsesRCALL
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabels (in_mTargetLabels),
mProperty_mUsesRCALL (in_mUsesRCALL) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_ComputedGotoTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;
}

void cPtr_ipic_31__38_ComputedGotoTerminator::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("[@ipic18ComputedGotoTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedGotoTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedGotoTerminator (mProperty_mInstructionLocation, mProperty_mTargetLabels, mProperty_mUsesRCALL COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18ComputedGotoTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ("ipic18ComputedGotoTerminator",
                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ComputedGotoTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ComputedGotoTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ComputedGotoTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator GALGAS_ipic_31__38_ComputedGotoTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedGotoTerminator result ;
  const GALGAS_ipic_31__38_ComputedGotoTerminator * p = (const GALGAS_ipic_31__38_ComputedGotoTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_ComputedGotoTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedGotoTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak::GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak & GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_ComputedGotoTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak::GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak (const GALGAS_ipic_31__38_ComputedGotoTerminator & inSource) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak::bang_ipic_31__38_ComputedGotoTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_ComputedGotoTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ComputedGotoTerminator) ;
      result = GALGAS_ipic_31__38_ComputedGotoTerminator ((cPtr_ipic_31__38_ComputedGotoTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18ComputedGotoTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak ("ipic18ComputedGotoTerminator-weak",
                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak * p = (const GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_ComputedGotoTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedGotoTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ComputedRETLWTerminator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ComputedRETLWTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralValues.printNonNullClassInstanceProperties ("mLiteralValues") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_ComputedRETLWTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_ComputedRETLWTerminator * p = (const cPtr_ipic_31__38_ComputedRETLWTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralValues.objectCompare (p->mProperty_mLiteralValues) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRCALL.objectCompare (p->mProperty_mUsesRCALL) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_ComputedRETLWTerminator::objectCompare (const GALGAS_ipic_31__38_ComputedRETLWTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator::GALGAS_ipic_31__38_ComputedRETLWTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator::GALGAS_ipic_31__38_ComputedRETLWTerminator (const cPtr_ipic_31__38_ComputedRETLWTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator GALGAS_ipic_31__38_ComputedRETLWTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                       const GALGAS_uintlist & inAttribute_mLiteralValues,
                                                                                                       const GALGAS_bool & inAttribute_mUsesRCALL
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedRETLWTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralValues.isValid () && inAttribute_mUsesRCALL.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ComputedRETLWTerminator (inAttribute_mInstructionLocation, inAttribute_mLiteralValues, inAttribute_mUsesRCALL COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedRETLWTerminator::setter_setMLiteralValues (GALGAS_uintlist inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    p->mProperty_mLiteralValues = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedRETLWTerminator::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    p->mProperty_mUsesRCALL = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintlist GALGAS_ipic_31__38_ComputedRETLWTerminator::readProperty_mLiteralValues (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uintlist () ;
  }else{
    cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    return p->mProperty_mLiteralValues ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_ComputedRETLWTerminator::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ipic_31__38_ComputedRETLWTerminator * p = (cPtr_ipic_31__38_ComputedRETLWTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedRETLWTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedRETLWTerminator::cPtr_ipic_31__38_ComputedRETLWTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_uintlist & in_mLiteralValues,
                                                                                    const GALGAS_bool & in_mUsesRCALL
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralValues (in_mLiteralValues),
mProperty_mUsesRCALL (in_mUsesRCALL) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_ComputedRETLWTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;
}

void cPtr_ipic_31__38_ComputedRETLWTerminator::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("[@ipic18ComputedRETLWTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLiteralValues.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedRETLWTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedRETLWTerminator (mProperty_mInstructionLocation, mProperty_mLiteralValues, mProperty_mUsesRCALL COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18ComputedRETLWTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ("ipic18ComputedRETLWTerminator",
                                                                                           & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ComputedRETLWTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ComputedRETLWTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ComputedRETLWTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator GALGAS_ipic_31__38_ComputedRETLWTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedRETLWTerminator result ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator * p = (const GALGAS_ipic_31__38_ComputedRETLWTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_ComputedRETLWTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedRETLWTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak::GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak & GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_ComputedRETLWTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak::GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak (const GALGAS_ipic_31__38_ComputedRETLWTerminator & inSource) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak::bang_ipic_31__38_ComputedRETLWTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_ComputedRETLWTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ComputedRETLWTerminator) ;
      result = GALGAS_ipic_31__38_ComputedRETLWTerminator ((cPtr_ipic_31__38_ComputedRETLWTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18ComputedRETLWTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak ("ipic18ComputedRETLWTerminator-weak",
                                                                                                   & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak * p = (const GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_ComputedRETLWTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedRETLWTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode::GALGAS_conditionalBranchMode (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_conditionalBranchMode::class_func_native (UNUSED_LOCATION_ARGS) {
  GALGAS_conditionalBranchMode result ;
  result.mEnum = kEnum_native ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_conditionalBranchMode::class_func_ipicBRA (UNUSED_LOCATION_ARGS) {
  GALGAS_conditionalBranchMode result ;
  result.mEnum = kEnum_ipicBRA ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_conditionalBranchMode::class_func_ipicGOTO (UNUSED_LOCATION_ARGS) {
  GALGAS_conditionalBranchMode result ;
  result.mEnum = kEnum_ipicGOTO ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditionalBranchMode::optional_native () const {
  const bool ok = mEnum == kEnum_native ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditionalBranchMode::optional_ipicBRA () const {
  const bool ok = mEnum == kEnum_ipicBRA ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_conditionalBranchMode::optional_ipicGOTO () const {
  const bool ok = mEnum == kEnum_ipicGOTO ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_conditionalBranchMode [4] = {
  "(not built)",
  "native",
  "ipicBRA",
  "ipicGOTO"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditionalBranchMode::getter_isNative (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_native == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditionalBranchMode::getter_isIpicBRA (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ipicBRA == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_conditionalBranchMode::getter_isIpicGOTO (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ipicGOTO == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_conditionalBranchMode::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @conditionalBranchMode: ") ;
  ioString.addString (gEnumNameArrayFor_conditionalBranchMode [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_conditionalBranchMode::objectCompare (const GALGAS_conditionalBranchMode & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @conditionalBranchMode generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_conditionalBranchMode ("conditionalBranchMode",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_conditionalBranchMode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_conditionalBranchMode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_conditionalBranchMode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_conditionalBranchMode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_conditionalBranchMode GALGAS_conditionalBranchMode::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_conditionalBranchMode result ;
  const GALGAS_conditionalBranchMode * p = (const GALGAS_conditionalBranchMode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_conditionalBranchMode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("conditionalBranchMode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak::GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak & GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_ConditionalJumpTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak::GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak (const GALGAS_ipic_31__38_ConditionalJumpTerminator & inSource) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak::bang_ipic_31__38_ConditionalJumpTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_ConditionalJumpTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
      result = GALGAS_ipic_31__38_ConditionalJumpTerminator ((cPtr_ipic_31__38_ConditionalJumpTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18ConditionalJumpTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak ("ipic18ConditionalJumpTerminator-weak",
                                                                                                     & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak * p = (const GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_ConditionalJumpTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ConditionalJumpTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_ComputedBraTerminator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_ComputedBraTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mTargetLabels.printNonNullClassInstanceProperties ("mTargetLabels") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_ComputedBraTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_ComputedBraTerminator * p = (const cPtr_ipic_31__38_ComputedBraTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetLabels.objectCompare (p->mProperty_mTargetLabels) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRCALL.objectCompare (p->mProperty_mUsesRCALL) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_ComputedBraTerminator::objectCompare (const GALGAS_ipic_31__38_ComputedBraTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator::GALGAS_ipic_31__38_ComputedBraTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator::GALGAS_ipic_31__38_ComputedBraTerminator (const cPtr_ipic_31__38_ComputedBraTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_ComputedBraTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator GALGAS_ipic_31__38_ComputedBraTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                   const GALGAS_lstringlist & inAttribute_mTargetLabels,
                                                                                                   const GALGAS_bool & inAttribute_mUsesRCALL
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedBraTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetLabels.isValid () && inAttribute_mUsesRCALL.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_ComputedBraTerminator (inAttribute_mInstructionLocation, inAttribute_mTargetLabels, inAttribute_mUsesRCALL COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedBraTerminator::setter_setMTargetLabels (GALGAS_lstringlist inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    p->mProperty_mTargetLabels = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_ComputedBraTerminator::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    p->mProperty_mUsesRCALL = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_ipic_31__38_ComputedBraTerminator::readProperty_mTargetLabels (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    return p->mProperty_mTargetLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_ComputedBraTerminator::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ipic_31__38_ComputedBraTerminator * p = (cPtr_ipic_31__38_ComputedBraTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_ComputedBraTerminator) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18ComputedBraTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_ComputedBraTerminator::cPtr_ipic_31__38_ComputedBraTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_lstringlist & in_mTargetLabels,
                                                                                const GALGAS_bool & in_mUsesRCALL
                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetLabels (in_mTargetLabels),
mProperty_mUsesRCALL (in_mUsesRCALL) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_ComputedBraTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;
}

void cPtr_ipic_31__38_ComputedBraTerminator::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("[@ipic18ComputedBraTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetLabels.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_ComputedBraTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_ComputedBraTerminator (mProperty_mInstructionLocation, mProperty_mTargetLabels, mProperty_mUsesRCALL COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18ComputedBraTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ("ipic18ComputedBraTerminator",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ComputedBraTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ComputedBraTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ComputedBraTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator GALGAS_ipic_31__38_ComputedBraTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedBraTerminator result ;
  const GALGAS_ipic_31__38_ComputedBraTerminator * p = (const GALGAS_ipic_31__38_ComputedBraTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_ComputedBraTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedBraTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak::GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak & GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_ComputedBraTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak::GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak (const GALGAS_ipic_31__38_ComputedBraTerminator & inSource) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak::bang_ipic_31__38_ComputedBraTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_ComputedBraTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_ComputedBraTerminator) ;
      result = GALGAS_ipic_31__38_ComputedBraTerminator ((cPtr_ipic_31__38_ComputedBraTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18ComputedBraTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak ("ipic18ComputedBraTerminator-weak",
                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak * p = (const GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_ComputedBraTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18ComputedBraTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison::GALGAS_ipic_31__38_RegisterComparison (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison GALGAS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_registerEqualsToW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison GALGAS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_registerGreaterThanW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison GALGAS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RegisterComparison result ;
  result.mEnum = kEnum_registerLowerThanW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_RegisterComparison::optional_registerEqualsToW () const {
  const bool ok = mEnum == kEnum_registerEqualsToW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_RegisterComparison::optional_registerGreaterThanW () const {
  const bool ok = mEnum == kEnum_registerGreaterThanW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38_RegisterComparison::optional_registerLowerThanW () const {
  const bool ok = mEnum == kEnum_registerLowerThanW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ipic_31__38_RegisterComparison [4] = {
  "(not built)",
  "registerEqualsToW",
  "registerGreaterThanW",
  "registerLowerThanW"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_RegisterComparison::getter_isRegisterEqualsToW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerEqualsToW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_RegisterComparison::getter_isRegisterGreaterThanW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerGreaterThanW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_RegisterComparison::getter_isRegisterLowerThanW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_registerLowerThanW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_RegisterComparison::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @ipic18RegisterComparison: ") ;
  ioString.addString (gEnumNameArrayFor_ipic_31__38_RegisterComparison [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_RegisterComparison::objectCompare (const GALGAS_ipic_31__38_RegisterComparison & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18RegisterComparison generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ("ipic18RegisterComparison",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_RegisterComparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_RegisterComparison ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_RegisterComparison::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_RegisterComparison (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_RegisterComparison GALGAS_ipic_31__38_RegisterComparison::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_RegisterComparison result ;
  const GALGAS_ipic_31__38_RegisterComparison * p = (const GALGAS_ipic_31__38_RegisterComparison *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_RegisterComparison *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractBlockTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mSingleInstructionTerminatorIfConditionTrue.printNonNullClassInstanceProperties ("mSingleInstructionTerminatorIfConditionTrue") ;
    mProperty_mSingleInstructionTerminatorIfConditionFalse.printNonNullClassInstanceProperties ("mSingleInstructionTerminatorIfConditionFalse") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ipic_31__38_AbstractConditionTerminator::objectCompare (const GALGAS_ipic_31__38_AbstractConditionTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator::GALGAS_ipic_31__38_AbstractConditionTerminator (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator::GALGAS_ipic_31__38_AbstractConditionTerminator (const cPtr_ipic_31__38_AbstractConditionTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractBlockTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_AbstractConditionTerminator) ;
}
//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_AbstractConditionTerminator::setter_setMSingleInstructionTerminatorIfConditionTrue (GALGAS_ipic_31__38_SingleInstructionTerminator inValue
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    p->mProperty_mSingleInstructionTerminatorIfConditionTrue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_AbstractConditionTerminator::setter_setMSingleInstructionTerminatorIfConditionFalse (GALGAS_ipic_31__38_SingleInstructionTerminator inValue
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    p->mProperty_mSingleInstructionTerminatorIfConditionFalse = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator GALGAS_ipic_31__38_AbstractConditionTerminator::readProperty_mSingleInstructionTerminatorIfConditionTrue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38_SingleInstructionTerminator () ;
  }else{
    cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    return p->mProperty_mSingleInstructionTerminatorIfConditionTrue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SingleInstructionTerminator GALGAS_ipic_31__38_AbstractConditionTerminator::readProperty_mSingleInstructionTerminatorIfConditionFalse (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38_SingleInstructionTerminator () ;
  }else{
    cPtr_ipic_31__38_AbstractConditionTerminator * p = (cPtr_ipic_31__38_AbstractConditionTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_AbstractConditionTerminator) ;
    return p->mProperty_mSingleInstructionTerminatorIfConditionFalse ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18AbstractConditionTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_AbstractConditionTerminator::cPtr_ipic_31__38_AbstractConditionTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                            const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                            const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractBlockTerminator (in_mInstructionLocation COMMA_THERE),
mProperty_mSingleInstructionTerminatorIfConditionTrue (in_mSingleInstructionTerminatorIfConditionTrue),
mProperty_mSingleInstructionTerminatorIfConditionFalse (in_mSingleInstructionTerminatorIfConditionFalse) {
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18AbstractConditionTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ("ipic18AbstractConditionTerminator",
                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_AbstractConditionTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_AbstractConditionTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_AbstractConditionTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator GALGAS_ipic_31__38_AbstractConditionTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_AbstractConditionTerminator result ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator * p = (const GALGAS_ipic_31__38_AbstractConditionTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_AbstractConditionTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractConditionTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak::GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak (void) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak & GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_AbstractConditionTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak::GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak (const GALGAS_ipic_31__38_AbstractConditionTerminator & inSource) :
GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak::bang_ipic_31__38_AbstractConditionTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_AbstractConditionTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_AbstractConditionTerminator) ;
      result = GALGAS_ipic_31__38_AbstractConditionTerminator ((cPtr_ipic_31__38_AbstractConditionTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18AbstractConditionTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak ("ipic18AbstractConditionTerminator-weak",
                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38_AbstractBlockTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak * p = (const GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18AbstractConditionTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress (),
mProperty_mNeedsBSR () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (const GALGAS_string & inOperand0,
                                                                                                                      const GALGAS_uint & inOperand1,
                                                                                                                      const GALGAS_bool & inOperand2) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1),
mProperty_mNeedsBSR (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::class_func_new (const GALGAS_string & in_mAssemblyString,
                                                                                                                                     const GALGAS_uint & in_mRegisterAddress,
                                                                                                                                     const GALGAS_bool & in_mNeedsBSR,
                                                                                                                                     Compiler * /* inCompiler */
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  if (in_mAssemblyString.isValid () && in_mRegisterAddress.isValid () && in_mNeedsBSR.isValid ()) {
    result = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (in_mAssemblyString, in_mRegisterAddress, in_mNeedsBSR) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAssemblyString.objectCompare (inOperand.mProperty_mAssemblyString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsBSR.objectCompare (inOperand.mProperty_mNeedsBSR) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () && mProperty_mNeedsBSR.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
  mProperty_mNeedsBSR.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("<struct @ipic18_intermediate_registerExpression:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mNeedsBSR.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_registerExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ("ipic18_intermediate_registerExpression",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak::objectCompare (const GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak::GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak & GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak::operator = (const GALGAS_pic_31__38_RegisterComparisonTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak::GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak (const GALGAS_pic_31__38_RegisterComparisonTerminator & inSource) :
GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak::bang_pic_31__38_RegisterComparisonTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_RegisterComparisonTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_RegisterComparisonTerminator) ;
      result = GALGAS_pic_31__38_RegisterComparisonTerminator ((cPtr_pic_31__38_RegisterComparisonTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18RegisterComparisonTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak ("pic18RegisterComparisonTerminator-weak",
                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak result ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak * p = (const GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_RegisterComparisonTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18RegisterComparisonTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_IncDecRegisterTerminator reference class
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

typeComparisonResult cPtr_ipic_31__38_IncDecRegisterTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_IncDecRegisterTerminator * p = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
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
    result = mProperty_mIncrement.objectCompare (p->mProperty_mIncrement) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_IncDecRegisterTerminator::objectCompare (const GALGAS_ipic_31__38_IncDecRegisterTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator::GALGAS_ipic_31__38_IncDecRegisterTerminator (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator::GALGAS_ipic_31__38_IncDecRegisterTerminator (const cPtr_ipic_31__38_IncDecRegisterTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator GALGAS_ipic_31__38_IncDecRegisterTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionTrue,
                                                                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionFalse,
                                                                                                         const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                         const GALGAS_bool & inAttribute_mIncrement,
                                                                                                         const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_IncDecRegisterTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionTrue.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionFalse.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mIncrement.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_IncDecRegisterTerminator (inAttribute_mInstructionLocation, inAttribute_mSingleInstructionTerminatorIfConditionTrue, inAttribute_mSingleInstructionTerminatorIfConditionFalse, inAttribute_mRegisterDescription, inAttribute_mIncrement, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_IncDecRegisterTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_IncDecRegisterTerminator::setter_setMIncrement (GALGAS_bool inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_IncDecRegisterTerminator::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38_IncDecRegisterTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_IncDecRegisterTerminator::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38_IncDecRegisterTerminator::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ipic_31__38_IncDecRegisterTerminator * p = (cPtr_ipic_31__38_IncDecRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18IncDecRegisterTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_IncDecRegisterTerminator::cPtr_ipic_31__38_IncDecRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                      const GALGAS_bool & in_mIncrement,
                                                                                      const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse COMMA_THERE),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mIncrement (in_mIncrement),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_IncDecRegisterTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;
}

void cPtr_ipic_31__38_IncDecRegisterTerminator::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.addString ("[@ipic18IncDecRegisterTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_IncDecRegisterTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_IncDecRegisterTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18IncDecRegisterTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ("ipic18IncDecRegisterTerminator",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_IncDecRegisterTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_IncDecRegisterTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_IncDecRegisterTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator GALGAS_ipic_31__38_IncDecRegisterTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_IncDecRegisterTerminator result ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator * p = (const GALGAS_ipic_31__38_IncDecRegisterTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_IncDecRegisterTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18IncDecRegisterTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak::objectCompare (const GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak::GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak & GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak::operator = (const GALGAS_ipic_31__38_IncDecRegisterTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak::GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak (const GALGAS_ipic_31__38_IncDecRegisterTerminator & inSource) :
GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak::bang_ipic_31__38_IncDecRegisterTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_IncDecRegisterTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
      result = GALGAS_ipic_31__38_IncDecRegisterTerminator ((cPtr_ipic_31__38_IncDecRegisterTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18IncDecRegisterTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak ("ipic18IncDecRegisterTerminator-weak",
                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak result ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak * p = (const GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_IncDecRegisterTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18IncDecRegisterTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_TestRegisterTerminator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_TestRegisterTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_TestRegisterTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_TestRegisterTerminator * p = (const cPtr_pic_31__38_TestRegisterTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_TestRegisterTerminator) ;
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
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_TestRegisterTerminator::objectCompare (const GALGAS_pic_31__38_TestRegisterTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator::GALGAS_pic_31__38_TestRegisterTerminator (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator::GALGAS_pic_31__38_TestRegisterTerminator (const cPtr_pic_31__38_TestRegisterTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_TestRegisterTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator GALGAS_pic_31__38_TestRegisterTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                   const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionTrue,
                                                                                                   const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionFalse,
                                                                                                   const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_TestRegisterTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionTrue.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionFalse.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_TestRegisterTerminator (inAttribute_mInstructionLocation, inAttribute_mSingleInstructionTerminatorIfConditionTrue, inAttribute_mSingleInstructionTerminatorIfConditionFalse, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_TestRegisterTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_TestRegisterTerminator * p = (cPtr_pic_31__38_TestRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_TestRegisterTerminator) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_pic_31__38_TestRegisterTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_pic_31__38_TestRegisterTerminator * p = (cPtr_pic_31__38_TestRegisterTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_TestRegisterTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18TestRegisterTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_TestRegisterTerminator::cPtr_pic_31__38_TestRegisterTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                                const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                                const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse COMMA_THERE),
mProperty_mRegisterDescription (in_mRegisterDescription) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_TestRegisterTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;
}

void cPtr_pic_31__38_TestRegisterTerminator::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("[@pic18TestRegisterTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_TestRegisterTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_TestRegisterTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18TestRegisterTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ("pic18TestRegisterTerminator",
                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_TestRegisterTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_TestRegisterTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_TestRegisterTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator GALGAS_pic_31__38_TestRegisterTerminator::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_TestRegisterTerminator result ;
  const GALGAS_pic_31__38_TestRegisterTerminator * p = (const GALGAS_pic_31__38_TestRegisterTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_TestRegisterTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18TestRegisterTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_TestRegisterTerminator_2D_weak::objectCompare (const GALGAS_pic_31__38_TestRegisterTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator_2D_weak::GALGAS_pic_31__38_TestRegisterTerminator_2D_weak (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator_2D_weak & GALGAS_pic_31__38_TestRegisterTerminator_2D_weak::operator = (const GALGAS_pic_31__38_TestRegisterTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator_2D_weak::GALGAS_pic_31__38_TestRegisterTerminator_2D_weak (const GALGAS_pic_31__38_TestRegisterTerminator & inSource) :
GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator_2D_weak GALGAS_pic_31__38_TestRegisterTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_TestRegisterTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator GALGAS_pic_31__38_TestRegisterTerminator_2D_weak::bang_pic_31__38_TestRegisterTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_TestRegisterTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_TestRegisterTerminator) ;
      result = GALGAS_pic_31__38_TestRegisterTerminator ((cPtr_pic_31__38_TestRegisterTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18TestRegisterTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator_2D_weak ("pic18TestRegisterTerminator-weak",
                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_TestRegisterTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_TestRegisterTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_TestRegisterTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_TestRegisterTerminator_2D_weak GALGAS_pic_31__38_TestRegisterTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_TestRegisterTerminator_2D_weak result ;
  const GALGAS_pic_31__38_TestRegisterTerminator_2D_weak * p = (const GALGAS_pic_31__38_TestRegisterTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_TestRegisterTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18TestRegisterTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_BitTestTerminator reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_BitTestTerminator::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_AbstractConditionTerminator::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_pic_31__38_BitTestTerminator::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_pic_31__38_BitTestTerminator * p = (const cPtr_pic_31__38_BitTestTerminator *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
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
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_pic_31__38_BitTestTerminator::objectCompare (const GALGAS_pic_31__38_BitTestTerminator & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator::GALGAS_pic_31__38_BitTestTerminator (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator::GALGAS_pic_31__38_BitTestTerminator (const cPtr_pic_31__38_BitTestTerminator * inSourcePtr) :
GALGAS_ipic_31__38_AbstractConditionTerminator (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_BitTestTerminator) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator GALGAS_pic_31__38_BitTestTerminator::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionTrue,
                                                                                         const GALGAS_ipic_31__38_SingleInstructionTerminator & inAttribute_mSingleInstructionTerminatorIfConditionFalse,
                                                                                         const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                         const GALGAS_uint & inAttribute_mBitNumber
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestTerminator result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionTrue.isValid () && inAttribute_mSingleInstructionTerminatorIfConditionFalse.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_pic_31__38_BitTestTerminator (inAttribute_mInstructionLocation, inAttribute_mSingleInstructionTerminatorIfConditionTrue, inAttribute_mSingleInstructionTerminatorIfConditionFalse, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BitTestTerminator::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_pic_31__38_BitTestTerminator::setter_setMBitNumber (GALGAS_uint inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_pic_31__38_BitTestTerminator::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_pic_31__38_BitTestTerminator::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_pic_31__38_BitTestTerminator * p = (cPtr_pic_31__38_BitTestTerminator *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_BitTestTerminator) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18BitTestTerminator class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_BitTestTerminator::cPtr_pic_31__38_BitTestTerminator (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionTrue,
                                                                      const GALGAS_ipic_31__38_SingleInstructionTerminator & in_mSingleInstructionTerminatorIfConditionFalse,
                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                      const GALGAS_uint & in_mBitNumber
                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_AbstractConditionTerminator (in_mInstructionLocation, in_mSingleInstructionTerminatorIfConditionTrue, in_mSingleInstructionTerminatorIfConditionFalse COMMA_THERE),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_pic_31__38_BitTestTerminator::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;
}

void cPtr_pic_31__38_BitTestTerminator::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("[@pic18BitTestTerminator:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionTrue.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSingleInstructionTerminatorIfConditionFalse.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_pic_31__38_BitTestTerminator::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_BitTestTerminator (mProperty_mInstructionLocation, mProperty_mSingleInstructionTerminatorIfConditionTrue, mProperty_mSingleInstructionTerminatorIfConditionFalse, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @pic18BitTestTerminator generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ("pic18BitTestTerminator",
                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_BitTestTerminator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_BitTestTerminator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BitTestTerminator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator GALGAS_pic_31__38_BitTestTerminator::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestTerminator result ;
  const GALGAS_pic_31__38_BitTestTerminator * p = (const GALGAS_pic_31__38_BitTestTerminator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_BitTestTerminator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestTerminator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_pic_31__38_BitTestTerminator_2D_weak::objectCompare (const GALGAS_pic_31__38_BitTestTerminator_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator_2D_weak::GALGAS_pic_31__38_BitTestTerminator_2D_weak (void) :
GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator_2D_weak & GALGAS_pic_31__38_BitTestTerminator_2D_weak::operator = (const GALGAS_pic_31__38_BitTestTerminator & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator_2D_weak::GALGAS_pic_31__38_BitTestTerminator_2D_weak (const GALGAS_pic_31__38_BitTestTerminator & inSource) :
GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator_2D_weak GALGAS_pic_31__38_BitTestTerminator_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestTerminator_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator GALGAS_pic_31__38_BitTestTerminator_2D_weak::bang_pic_31__38_BitTestTerminator_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_pic_31__38_BitTestTerminator result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_BitTestTerminator) ;
      result = GALGAS_pic_31__38_BitTestTerminator ((cPtr_pic_31__38_BitTestTerminator *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @pic18BitTestTerminator-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator_2D_weak ("pic18BitTestTerminator-weak",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_pic_31__38_BitTestTerminator_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_pic_31__38_BitTestTerminator_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_pic_31__38_BitTestTerminator_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_BitTestTerminator_2D_weak GALGAS_pic_31__38_BitTestTerminator_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_pic_31__38_BitTestTerminator_2D_weak result ;
  const GALGAS_pic_31__38_BitTestTerminator_2D_weak * p = (const GALGAS_pic_31__38_BitTestTerminator_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_pic_31__38_BitTestTerminator_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BitTestTerminator-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38_InstructionWithNoOperand reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38_InstructionWithNoOperand::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38_InstructionWithNoOperand::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38_InstructionWithNoOperand * p = (const cPtr_ipic_31__38_InstructionWithNoOperand *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38_InstructionWithNoOperand) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38_InstructionWithNoOperand::objectCompare (const GALGAS_ipic_31__38_InstructionWithNoOperand & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand::GALGAS_ipic_31__38_InstructionWithNoOperand (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand::GALGAS_ipic_31__38_InstructionWithNoOperand (const cPtr_ipic_31__38_InstructionWithNoOperand * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38_InstructionWithNoOperand) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand GALGAS_ipic_31__38_InstructionWithNoOperand::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                         const GALGAS_pic_31__38_InstructionWithNoOperandKind & inAttribute_mKind
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_InstructionWithNoOperand result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38_InstructionWithNoOperand (inAttribute_mInstructionLocation, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38_InstructionWithNoOperand::setter_setMKind (GALGAS_pic_31__38_InstructionWithNoOperandKind inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38_InstructionWithNoOperand * p = (cPtr_ipic_31__38_InstructionWithNoOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_InstructionWithNoOperand) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_InstructionWithNoOperandKind GALGAS_ipic_31__38_InstructionWithNoOperand::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_InstructionWithNoOperandKind () ;
  }else{
    cPtr_ipic_31__38_InstructionWithNoOperand * p = (cPtr_ipic_31__38_InstructionWithNoOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38_InstructionWithNoOperand) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18InstructionWithNoOperand class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38_InstructionWithNoOperand::cPtr_ipic_31__38_InstructionWithNoOperand (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_pic_31__38_InstructionWithNoOperandKind & in_mKind
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38_InstructionWithNoOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;
}

void cPtr_ipic_31__38_InstructionWithNoOperand::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.addString ("[@ipic18InstructionWithNoOperand:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38_InstructionWithNoOperand::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38_InstructionWithNoOperand (mProperty_mInstructionLocation, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18InstructionWithNoOperand generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ("ipic18InstructionWithNoOperand",
                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_InstructionWithNoOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_InstructionWithNoOperand::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_InstructionWithNoOperand (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand GALGAS_ipic_31__38_InstructionWithNoOperand::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_InstructionWithNoOperand result ;
  const GALGAS_ipic_31__38_InstructionWithNoOperand * p = (const GALGAS_ipic_31__38_InstructionWithNoOperand *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_InstructionWithNoOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18InstructionWithNoOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak::objectCompare (const GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak::GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak & GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak::operator = (const GALGAS_ipic_31__38_InstructionWithNoOperand & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak::GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak (const GALGAS_ipic_31__38_InstructionWithNoOperand & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak::bang_ipic_31__38_InstructionWithNoOperand_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38_InstructionWithNoOperand result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38_InstructionWithNoOperand) ;
      result = GALGAS_ipic_31__38_InstructionWithNoOperand ((cPtr_ipic_31__38_InstructionWithNoOperand *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18InstructionWithNoOperand-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak ("ipic18InstructionWithNoOperand-weak",
                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak result ;
  const GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak * p = (const GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38_InstructionWithNoOperand_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18InstructionWithNoOperand-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@ipic18_intermediate_registerExpression isEqualToRegister'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isEqualToRegister (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inObject,
                                               const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & constinArgument_inRegister,
                                               Compiler *
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression temp_0 = inObject ;
  result_outResult = GALGAS_bool (kIsEqual, temp_0.readProperty_mAssemblyString ().objectCompare (constinArgument_inRegister.readProperty_mAssemblyString ())) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression temp_2 = inObject ;
      result_outResult = GALGAS_bool (kIsEqual, temp_2.readProperty_mRegisterAddress ().objectCompare (constinArgument_inRegister.readProperty_mRegisterAddress ())) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression temp_4 = inObject ;
      result_outResult = GALGAS_bool (kIsEqual, temp_4.readProperty_mNeedsBSR ().objectCompare (constinArgument_inRegister.readProperty_mNeedsBSR ())) ;
    }
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_FDA reference class
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

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction_5F_FDA_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FDA_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                     const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inAttribute_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                                                     const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                     const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (inAttribute_mInstructionLocation, inAttribute_mInstruction_5F_FDA_5F_base_5F_code, inAttribute_mRegisterDescription, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::setter_setMInstruction_5F_FDA_5F_base_5F_code (GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST inValue
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    p->mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    return p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FDA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                                                                  const GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (in_mInstruction_5F_FDA_5F_base_5F_code),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_FDA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_FDA generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ("ipic18_intermediate_instruction_FDA",
                                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_FDA-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak ("ipic18_intermediate_instruction_FDA-weak",
                                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FDA-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MULWF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_MULWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_NEGF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_NEGF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (UNUSED_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_SETF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::optional_CLRF () const {
  const bool ok = mEnum == kEnum_CLRF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::optional_MOVWF () const {
  const bool ok = mEnum == kEnum_MOVWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::optional_MULWF () const {
  const bool ok = mEnum == kEnum_MULWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::optional_NEGF () const {
  const bool ok = mEnum == kEnum_NEGF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::optional_SETF () const {
  const bool ok = mEnum == kEnum_SETF ;
  return ok ;
}

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

GALGAS_bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isMULWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MULWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isNEGF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_NEGF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::getter_isSETF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SETF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                          const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @FA_sequential_instruction_base_code: ") ;
  ioString.addString (gEnumNameArrayFor_FA_5F_sequential_5F_instruction_5F_base_5F_code [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::objectCompare (const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @FA_sequential_instruction_base_code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ("FA_sequential_instruction_base_code",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code result ;
  const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code * p = (const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFAinstruction.printNonNullClassInstanceProperties ("mFAinstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFAinstruction.objectCompare (p->mProperty_mFAinstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                   const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & inAttribute_mFAinstruction,
                                                                                                                                   const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFAinstruction.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (inAttribute_mInstructionLocation, inAttribute_mFAinstruction, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::setter_setMFAinstruction (GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    p->mProperty_mFAinstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::readProperty_mFAinstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    return p->mProperty_mFAinstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (const GALGAS_location & in_mInstructionLocation,
                                                                                                                const GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code & in_mFAinstruction,
                                                                                                                const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFAinstruction (in_mFAinstruction),
mProperty_mRegisterDescription (in_mRegisterDescription) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_FA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFAinstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (mProperty_mInstructionLocation, mProperty_mFAinstruction, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_FA generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ("ipic18_intermediate_instruction_FA",
                                                                                                         & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_FA-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak ("ipic18_intermediate_instruction_FA-weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FA-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::~ GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (const GALGAS_string & inOperand0,
                                                                                                                                                              const GALGAS_uint & inOperand1) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::class_func_new (const GALGAS_string & in_mAssemblyString,
                                                                                                                                                                             const GALGAS_uint & in_mRegisterAddress,
                                                                                                                                                                             Compiler * /* inCompiler */
                                                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  if (in_mAssemblyString.isValid () && in_mRegisterAddress.isValid ()) {
    result = GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (in_mAssemblyString, in_mRegisterAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAssemblyString.objectCompare (inOperand.mProperty_mAssemblyString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegisterAddress.objectCompare (inOperand.mProperty_mRegisterAddress) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::description (String & ioString,
                                                                                                 const int32_t inIndentation) const {
  ioString.addString ("<struct @ipic18_intermediate_registerExpressionWithoutBSRIndication:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mAssemblyString.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mRegisterAddress.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_registerExpressionWithoutBSRIndication generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ("ipic18_intermediate_registerExpressionWithoutBSRIndication",
                                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSourceRegisterDescription.printNonNullClassInstanceProperties ("mSourceRegisterDescription") ;
    mProperty_mDestinationRegisterDescription.printNonNullClassInstanceProperties ("mDestinationRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSourceRegisterDescription.objectCompare (p->mProperty_mSourceRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationRegisterDescription.objectCompare (p->mProperty_mDestinationRegisterDescription) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                         const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inAttribute_mSourceRegisterDescription,
                                                                                                                                         const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & inAttribute_mDestinationRegisterDescription
                                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSourceRegisterDescription.isValid () && inAttribute_mDestinationRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (inAttribute_mInstructionLocation, inAttribute_mSourceRegisterDescription, inAttribute_mDestinationRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::setter_setMSourceRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication inValue
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    p->mProperty_mSourceRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::setter_setMDestinationRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication inValue
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    p->mProperty_mDestinationRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::readProperty_mSourceRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    return p->mProperty_mSourceRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::readProperty_mDestinationRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
    return p->mProperty_mDestinationRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MOVFF class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (const GALGAS_location & in_mInstructionLocation,
                                                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mSourceRegisterDescription,
                                                                                                                      const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication & in_mDestinationRegisterDescription
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSourceRegisterDescription (in_mSourceRegisterDescription),
mProperty_mDestinationRegisterDescription (in_mDestinationRegisterDescription) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_MOVFF:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSourceRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDestinationRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (mProperty_mInstructionLocation, mProperty_mSourceRegisterDescription, mProperty_mDestinationRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_MOVFF generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ("ipic18_intermediate_instruction_MOVFF",
                                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVFF", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_MOVFF-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak ("ipic18_intermediate_instruction_MOVFF-weak",
                                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVFF-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralInstruction.objectCompare (p->mProperty_mLiteralInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLiteralValue.objectCompare (p->mProperty_mLiteralValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                               const GALGAS_literal_5F_instruction_5F_opcode & inAttribute_mLiteralInstruction,
                                                                                                                                                               const GALGAS_uint & inAttribute_mLiteralValue
                                                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLiteralInstruction.isValid () && inAttribute_mLiteralValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (inAttribute_mInstructionLocation, inAttribute_mLiteralInstruction, inAttribute_mLiteralValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::setter_setMLiteralInstruction (GALGAS_literal_5F_instruction_5F_opcode inValue
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::setter_setMLiteralValue (GALGAS_uint inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_literal_5F_instruction_5F_opcode GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                            const GALGAS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                                            const GALGAS_uint & in_mLiteralValue
                                                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralInstruction (in_mLiteralInstruction),
mProperty_mLiteralValue (in_mLiteralValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_literalOperation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ("ipic18_intermediate_instruction_literalOperation",
                                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_literalOperation-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak ("ipic18_intermediate_instruction_literalOperation-weak",
                                                                                                                               & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_literalOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mFSRindex.printNonNullClassInstanceProperties ("mFSRindex") ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFSRindex.objectCompare (p->mProperty_mFSRindex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                       const GALGAS_luint & inAttribute_mFSRindex,
                                                                                                                                       const GALGAS_uint & inAttribute_mValue
                                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mFSRindex.isValid () && inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (inAttribute_mInstructionLocation, inAttribute_mFSRindex, inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::setter_setMFSRindex (GALGAS_luint inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    p->mProperty_mFSRindex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::setter_setMValue (GALGAS_uint inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::readProperty_mFSRindex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    return p->mProperty_mFSRindex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_LFSR class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_luint & in_mFSRindex,
                                                                                                                    const GALGAS_uint & in_mValue
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mFSRindex (in_mFSRindex),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_LFSR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFSRindex.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (mProperty_mInstructionLocation, mProperty_mFSRindex, mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_LFSR generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ("ipic18_intermediate_instruction_LFSR",
                                                                                                           & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_LFSR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_LFSR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak ("ipic18_intermediate_instruction_LFSR-weak",
                                                                                                                   & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_LFSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_FBA reference class
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

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitOrientedOp.objectCompare (p->mProperty_mBitOrientedOp) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                     const GALGAS_bit_5F_oriented_5F_op & inAttribute_mBitOrientedOp,
                                                                                                                                     const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                     const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBitOrientedOp.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (inAttribute_mInstructionLocation, inAttribute_mBitOrientedOp, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::setter_setMBitOrientedOp (GALGAS_bit_5F_oriented_5F_op inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    p->mProperty_mBitOrientedOp = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::setter_setMBitNumber (GALGAS_uint inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bit_5F_oriented_5F_op GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::readProperty_mBitOrientedOp (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    return p->mProperty_mBitOrientedOp ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FBA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (const GALGAS_location & in_mInstructionLocation,
                                                                                                                  const GALGAS_bit_5F_oriented_5F_op & in_mBitOrientedOp,
                                                                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GALGAS_uint & in_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBitOrientedOp (in_mBitOrientedOp),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_FBA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitOrientedOp.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (mProperty_mInstructionLocation, mProperty_mBitOrientedOp, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_FBA generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ("ipic18_intermediate_instruction_FBA",
                                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FBA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_FBA-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak ("ipic18_intermediate_instruction_FBA-weak",
                                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FBA-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak::bang_ipic_31__38__5F_intermediate_5F_JSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_JSR ((cPtr_ipic_31__38__5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_JSR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak ("ipic18_intermediate_JSR-weak",
                                                                                                   & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBankIndex.objectCompare (p->mProperty_mBankIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                         const GALGAS_luint & inAttribute_mBankIndex
                                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBankIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (inAttribute_mInstructionLocation, inAttribute_mBankIndex COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::setter_setMBankIndex (GALGAS_luint inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
    p->mProperty_mBankIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MOVLB class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (const GALGAS_location & in_mInstructionLocation,
                                                                                                                      const GALGAS_luint & in_mBankIndex
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBankIndex (in_mBankIndex) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_MOVLB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (mProperty_mInstructionLocation, mProperty_mBankIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_MOVLB generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ("ipic18_intermediate_instruction_MOVLB",
                                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVLB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_MOVLB-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak ("ipic18_intermediate_instruction_MOVLB-weak",
                                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MOVLB-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBlankValue.printNonNullClassInstanceProperties ("mBlankValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBlankValue.objectCompare (p->mProperty_mBlankValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                       const GALGAS_uint & inAttribute_mBlankValue
                                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBlankValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (inAttribute_mInstructionLocation, inAttribute_mBlankValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::setter_setMBlankValue (GALGAS_uint inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
    p->mProperty_mBlankValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::readProperty_mBlankValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
    return p->mProperty_mBlankValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_FNOP class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_uint & in_mBlankValue
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBlankValue (in_mBlankValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_FNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBlankValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (mProperty_mInstructionLocation, mProperty_mBlankValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_FNOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ("ipic18_intermediate_instruction_FNOP",
                                                                                                           & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_FNOP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak ("ipic18_intermediate_instruction_FNOP-weak",
                                                                                                                   & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_FNOP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBlankValue.printNonNullClassInstanceProperties ("mBlankValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBlankValue.objectCompare (p->mProperty_mBlankValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                         const GALGAS_uint & inAttribute_mBlankValue
                                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mBlankValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (inAttribute_mInstructionLocation, inAttribute_mBlankValue COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::setter_setMBlankValue (GALGAS_uint inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
    p->mProperty_mBlankValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::readProperty_mBlankValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
    return p->mProperty_mBlankValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_BLANK class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (const GALGAS_location & in_mInstructionLocation,
                                                                                                                      const GALGAS_uint & in_mBlankValue
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBlankValue (in_mBlankValue) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_BLANK:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBlankValue.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (mProperty_mInstructionLocation, mProperty_mBlankValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_BLANK generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ("ipic18_intermediate_instruction_BLANK",
                                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_BLANK", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_BLANK-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak ("ipic18_intermediate_instruction_BLANK-weak",
                                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_BLANK-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                         const GALGAS_tableAccessOption & inAttribute_mOption
                                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOption.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (inAttribute_mInstructionLocation, inAttribute_mOption COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::setter_setMOption (GALGAS_tableAccessOption inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
    p->mProperty_mOption = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_tableAccessOption () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_TBLRD class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (const GALGAS_location & in_mInstructionLocation,
                                                                                                                      const GALGAS_tableAccessOption & in_mOption
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOption (in_mOption) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_TBLRD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (mProperty_mInstructionLocation, mProperty_mOption COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_TBLRD generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ("ipic18_intermediate_instruction_TBLRD",
                                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLRD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_TBLRD-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak ("ipic18_intermediate_instruction_TBLRD-weak",
                                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLRD-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                         const GALGAS_tableAccessOption & inAttribute_mOption
                                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOption.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (inAttribute_mInstructionLocation, inAttribute_mOption COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::setter_setMOption (GALGAS_tableAccessOption inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
    p->mProperty_mOption = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableAccessOption GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_tableAccessOption () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_TBLWT class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (const GALGAS_location & in_mInstructionLocation,
                                                                                                                      const GALGAS_tableAccessOption & in_mOption
                                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOption (in_mOption) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_TBLWT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (mProperty_mInstructionLocation, mProperty_mOption COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_TBLWT generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ("ipic18_intermediate_instruction_TBLWT",
                                                                                                            & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLWT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_TBLWT-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak ("ipic18_intermediate_instruction_TBLWT-weak",
                                                                                                                    & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_TBLWT-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOccurrenceFactor.objectCompare (p->mProperty_mOccurrenceFactor) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                       const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::setter_setMOccurrenceFactor (GALGAS_luint inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                                                                    const GALGAS_luint & in_mOccurrenceFactor
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_MNOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ("ipic18_intermediate_instruction_MNOP",
                                                                                                           & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_MNOP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak ("ipic18_intermediate_instruction_MNOP-weak",
                                                                                                                   & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_MNOP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOccurrenceFactor.objectCompare (p->mProperty_mOccurrenceFactor) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                           const GALGAS_luint & inAttribute_mOccurrenceFactor
                                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mOccurrenceFactor.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (inAttribute_mInstructionLocation, inAttribute_mOccurrenceFactor COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::setter_setMOccurrenceFactor (GALGAS_luint inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_NOPBRA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (const GALGAS_location & in_mInstructionLocation,
                                                                                                                        const GALGAS_luint & in_mOccurrenceFactor
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor (in_mOccurrenceFactor) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_NOPBRA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_NOPBRA generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ("ipic18_intermediate_instruction_NOPBRA",
                                                                                                             & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_NOPBRA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_NOPBRA-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak ("ipic18_intermediate_instruction_NOPBRA-weak",
                                                                                                                     & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_NOPBRA-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak::bang_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W ((cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_MOV_LABEL_W-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak ("ipic18_intermediate_MOV_LABEL_W-weak",
                                                                                                                 & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_MOV_LABEL_W-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mTargetInstructions.printNonNullClassInstanceProperties ("mTargetInstructions") ;
    mProperty_mUsesRCALL.printNonNullClassInstanceProperties ("mUsesRCALL") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetInstructions.objectCompare (p->mProperty_mTargetInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsesRCALL.objectCompare (p->mProperty_mUsesRCALL) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                                 const GALGAS_ipic_31__38_SequentialInstructionList & inAttribute_mTargetInstructions,
                                                                                                                                                                 const GALGAS_bool & inAttribute_mUsesRCALL
                                                                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mTargetInstructions.isValid () && inAttribute_mUsesRCALL.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (inAttribute_mInstructionLocation, inAttribute_mTargetInstructions, inAttribute_mUsesRCALL COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::setter_setMTargetInstructions (GALGAS_ipic_31__38_SequentialInstructionList inValue
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    p->mProperty_mTargetInstructions = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::setter_setMUsesRCALL (GALGAS_bool inValue
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    p->mProperty_mUsesRCALL = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstructionList GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::readProperty_mTargetInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38_SequentialInstructionList () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mTargetInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::readProperty_mUsesRCALL (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
    return p->mProperty_mUsesRCALL ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_intermediate_instruction_computed_rcall class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                              const GALGAS_ipic_31__38_SequentialInstructionList & in_mTargetInstructions,
                                                                                                                                              const GALGAS_bool & in_mUsesRCALL
                                                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mTargetInstructions (in_mTargetInstructions),
mProperty_mUsesRCALL (in_mUsesRCALL) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;
}

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::description (String & ioString,
                                                                                         const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_intermediate_instruction_computed_rcall:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetInstructions.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUsesRCALL.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (mProperty_mInstructionLocation, mProperty_mTargetInstructions, mProperty_mUsesRCALL COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_computed_rcall generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ("ipic18_intermediate_instruction_computed_rcall",
                                                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_computed_rcall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak & GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak::operator = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak::GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak::bang_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
      result = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall ((cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_intermediate_instruction_computed_rcall-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak ("ipic18_intermediate_instruction_computed_rcall-weak",
                                                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak result ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak * p = (const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_intermediate_instruction_computed_rcall-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_condition_5F_skip_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38_SequentialInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mEmbeddedInstruction.printNonNullClassInstanceProperties ("mEmbeddedInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::objectCompare (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (void) :
GALGAS_ipic_31__38_SequentialInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * inSourcePtr) :
GALGAS_ipic_31__38_SequentialInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::setter_setMEmbeddedInstruction (GALGAS_ipic_31__38_SequentialInstruction inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
    p->mProperty_mEmbeddedInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38_SequentialInstruction GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::readProperty_mEmbeddedInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38_SequentialInstruction () ;
  }else{
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
    return p->mProperty_mEmbeddedInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_condition_skip_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (const GALGAS_location & in_mInstructionLocation,
                                                                                                              const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38_SequentialInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mEmbeddedInstruction (in_mEmbeddedInstruction) {
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_condition_skip_instruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ("ipic18_condition_skip_instruction",
                                                                                                        & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction result ;
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction * p = (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_condition_skip_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak::GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (void) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak & GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak::operator = (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak::GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction & inSource) :
GALGAS_ipic_31__38_SequentialInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak::bang_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
      result = GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction ((cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_condition_skip_instruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak ("ipic18_condition_skip_instruction-weak",
                                                                                                                & kTypeDescriptor_GALGAS_ipic_31__38_SequentialInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak result ;
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak * p = (const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_condition_skip_instruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip reference class
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

typeComparisonResult cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSkipIfSet.objectCompare (p->mProperty_mSkipIfSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitNumber.objectCompare (p->mProperty_mBitNumber) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                     const GALGAS_ipic_31__38_SequentialInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                                     const GALGAS_bool & inAttribute_mSkipIfSet,
                                                                                                                                     const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                                     const GALGAS_uint & inAttribute_mBitNumber
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mSkipIfSet.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_mBitNumber.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mSkipIfSet, inAttribute_mRegisterDescription, inAttribute_mBitNumber COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMSkipIfSet (GALGAS_bool inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::setter_setMBitNumber (GALGAS_uint inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                                                                  const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                                  const GALGAS_bool & in_mSkipIfSet,
                                                                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GALGAS_uint & in_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mSkipIfSet (in_mSkipIfSet),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_mBitNumber (in_mBitNumber) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_skip_instruction_BitTestSkip:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_skip_instruction_BitTestSkip generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ("ipic18_skip_instruction_BitTestSkip",
                                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak & GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::operator = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip & inSource) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip) ;
      result = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_skip_instruction_BitTestSkip-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak ("ipic18_skip_instruction_BitTestSkip-weak",
                                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_BitTestSkip-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSEQ (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CPFSEQ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSGT (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CPFSGT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSLT (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CPFSLT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_TSTFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_TSTFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::optional_CPFSEQ () const {
  const bool ok = mEnum == kEnum_CPFSEQ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::optional_CPFSGT () const {
  const bool ok = mEnum == kEnum_CPFSGT ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::optional_CPFSLT () const {
  const bool ok = mEnum == kEnum_CPFSLT ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::optional_TSTFSZ () const {
  const bool ok = mEnum == kEnum_TSTFSZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code [5] = {
  "(not built)",
  "CPFSEQ",
  "CPFSGT",
  "CPFSLT",
  "TSTFSZ"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSEQ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSEQ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSGT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSGT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isCPFSLT (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CPFSLT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::getter_isTSTFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_TSTFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                                             const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @ipic18_compare_register_instruction_base_code: ") ;
  ioString.addString (gEnumNameArrayFor_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::objectCompare (const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_compare_register_instruction_base_code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ("ipic18_compare_register_instruction_base_code",
                                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code result ;
  const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code * p = (const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_compare_register_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mCompareInstruction.printNonNullClassInstanceProperties ("mCompareInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCompareInstruction.objectCompare (p->mProperty_mCompareInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * inSourcePtr) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                                                     const GALGAS_ipic_31__38_SequentialInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                                                     const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & inAttribute_mCompareInstruction,
                                                                                                                                                     const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription
                                                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mCompareInstruction.isValid () && inAttribute_mRegisterDescription.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mCompareInstruction, inAttribute_mRegisterDescription COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::setter_setMCompareInstruction (GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    p->mProperty_mCompareInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::readProperty_mCompareInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    return p->mProperty_mCompareInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_compare_register class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                  const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                                                  const GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code & in_mCompareInstruction,
                                                                                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mCompareInstruction (in_mCompareInstruction),
mProperty_mRegisterDescription (in_mRegisterDescription) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_skip_instruction_compare_register:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCompareInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mCompareInstruction, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_skip_instruction_compare_register generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ("ipic18_skip_instruction_compare_register",
                                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_compare_register", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak & GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::operator = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
      result = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_skip_instruction_compare_register-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak ("ipic18_skip_instruction_compare_register-weak",
                                                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_compare_register-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DECFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = kEnum_DECFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DCFSNZ (UNUSED_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = kEnum_DCFSNZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INCFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = kEnum_INCFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INFSNZ (UNUSED_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = kEnum_INFSNZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::optional_DECFSZ () const {
  const bool ok = mEnum == kEnum_DECFSZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::optional_DCFSNZ () const {
  const bool ok = mEnum == kEnum_DCFSNZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::optional_INCFSZ () const {
  const bool ok = mEnum == kEnum_INCFSZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::optional_INFSNZ () const {
  const bool ok = mEnum == kEnum_INFSNZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_skip_5F_instruction_5F_FDA_5F_base_5F_code [5] = {
  "(not built)",
  "DECFSZ",
  "DCFSNZ",
  "INCFSZ",
  "INFSNZ"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isDCFSNZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DCFSNZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isINFSNZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INFSNZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::description (String & ioString,
                                                                     const int32_t /* inIndentation */) const {
  ioString.addString ("<enum @skip_instruction_FDA_base_code: ") ;
  ioString.addString (gEnumNameArrayFor_skip_5F_instruction_5F_FDA_5F_base_5F_code [mEnum]) ;
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::objectCompare (const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @skip_instruction_FDA_base_code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ("skip_instruction_FDA_base_code",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code * p = (const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("skip_instruction_FDA_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ipic_31__38__5F_skip_5F_instruction_5F_FDA reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::printNonNullClassInstanceProperties (void) const {
    cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction_5F_FDA_5F_base_5F_code.printNonNullClassInstanceProperties ("mInstruction_FDA_base_code") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEmbeddedInstruction.objectCompare (p->mProperty_mEmbeddedInstruction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstruction_5F_FDA_5F_base_5F_code.objectCompare (p->mProperty_mInstruction_5F_FDA_5F_base_5F_code) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegisterDescription.objectCompare (p->mProperty_mRegisterDescription) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_W_5F_isDestination.objectCompare (p->mProperty_m_5F_W_5F_isDestination) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * inSourcePtr) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::class_func_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                                     const GALGAS_ipic_31__38_SequentialInstruction & inAttribute_mEmbeddedInstruction,
                                                                                                                     const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & inAttribute_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                                     const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & inAttribute_mRegisterDescription,
                                                                                                                     const GALGAS_bool & inAttribute_m_5F_W_5F_isDestination
                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mEmbeddedInstruction.isValid () && inAttribute_mInstruction_5F_FDA_5F_base_5F_code.isValid () && inAttribute_mRegisterDescription.isValid () && inAttribute_m_5F_W_5F_isDestination.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (inAttribute_mInstructionLocation, inAttribute_mEmbeddedInstruction, inAttribute_mInstruction_5F_FDA_5F_base_5F_code, inAttribute_mRegisterDescription, inAttribute_m_5F_W_5F_isDestination COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setMInstruction_5F_FDA_5F_base_5F_code (GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code inValue
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_mInstruction_5F_FDA_5F_base_5F_code = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setMRegisterDescription (GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::setter_setM_5F_W_5F_isDestination (GALGAS_bool inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::readProperty_mInstruction_5F_FDA_5F_base_5F_code (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    return p->mProperty_mInstruction_5F_FDA_5F_base_5F_code ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ipic18_skip_instruction_FDA class
//--------------------------------------------------------------------------------------------------

cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (const GALGAS_location & in_mInstructionLocation,
                                                                                                  const GALGAS_ipic_31__38_SequentialInstruction & in_mEmbeddedInstruction,
                                                                                                  const GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code & in_mInstruction_5F_FDA_5F_base_5F_code,
                                                                                                  const GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                  const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction (in_mInstructionLocation, in_mEmbeddedInstruction COMMA_THERE),
mProperty_mInstruction_5F_FDA_5F_base_5F_code (in_mInstruction_5F_FDA_5F_base_5F_code),
mProperty_mRegisterDescription (in_mRegisterDescription),
mProperty_m_5F_W_5F_isDestination (in_m_5F_W_5F_isDestination) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;
}

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.addString ("[@ipic18_skip_instruction_FDA:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEmbeddedInstruction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstruction_5F_FDA_5F_base_5F_code.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA (mProperty_mInstructionLocation, mProperty_mEmbeddedInstruction, mProperty_mInstruction_5F_FDA_5F_base_5F_code, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ipic18_skip_instruction_FDA generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ("ipic18_skip_instruction_FDA",
                                                                                                  & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_FDA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::objectCompare (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (void) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak & GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::operator = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) :
GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
      result = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ipic18_skip_instruction_FDA-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak ("ipic18_skip_instruction_FDA-weak",
                                                                                                          & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak result ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak * p = (const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_FDA-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForBlockOptimization::cMapElement_symbolTableForBlockOptimization (const GALGAS_lstring & inKey,
                                                                                          const GALGAS_uint & in_mDefinitionBlockIndex
                                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mDefinitionBlockIndex (in_mDefinitionBlockIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_symbolTableForBlockOptimization::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_symbolTableForBlockOptimization::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_symbolTableForBlockOptimization (mProperty_lkey, mProperty_mDefinitionBlockIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_symbolTableForBlockOptimization::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDefinitionBlockIndex" ":") ;
  mProperty_mDefinitionBlockIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_symbolTableForBlockOptimization::compare (const cCollectionElement * inOperand) const {
  cMapElement_symbolTableForBlockOptimization * operand = (cMapElement_symbolTableForBlockOptimization *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mDefinitionBlockIndex.objectCompare (operand->mProperty_mDefinitionBlockIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization::GALGAS_symbolTableForBlockOptimization (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization::GALGAS_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization & GALGAS_symbolTableForBlockOptimization::operator = (const GALGAS_symbolTableForBlockOptimization & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization GALGAS_symbolTableForBlockOptimization::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization GALGAS_symbolTableForBlockOptimization::class_func_mapWithMapToOverride (const GALGAS_symbolTableForBlockOptimization & inMapToOverride
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization GALGAS_symbolTableForBlockOptimization::getter_overriddenMap (Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForBlockOptimization result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization::addAssign_operation (const GALGAS_lstring & inKey,
                                                                  const GALGAS_uint & inArgument0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForBlockOptimization * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForBlockOptimization (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@symbolTableForBlockOptimization insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization GALGAS_symbolTableForBlockOptimization::add_operation (const GALGAS_symbolTableForBlockOptimization & inOperand,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_symbolTableForBlockOptimization result = *this ;
  cEnumerator_symbolTableForBlockOptimization enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mDefinitionBlockIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization::setter_insertKey (GALGAS_lstring inKey,
                                                               GALGAS_uint inArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForBlockOptimization * p = nullptr ;
  macroMyNew (p, cMapElement_symbolTableForBlockOptimization (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_symbolTableForBlockOptimization_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization::method_searchKey (GALGAS_lstring inKey,
                                                               GALGAS_uint & outArgument0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) performSearch (inKey,
                                                                                                                               inCompiler,
                                                                                                                               kSearchErrorMessage_symbolTableForBlockOptimization_searchKey
                                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
    outArgument0 = p->mProperty_mDefinitionBlockIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_symbolTableForBlockOptimization::getter_mDefinitionBlockIndexForKey (const GALGAS_string & inKey,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
    result = p->mProperty_mDefinitionBlockIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_symbolTableForBlockOptimization::setter_setMDefinitionBlockIndexForKey (GALGAS_uint inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_symbolTableForBlockOptimization * p = (cMapElement_symbolTableForBlockOptimization *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
    p->mProperty_mDefinitionBlockIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_symbolTableForBlockOptimization * GALGAS_symbolTableForBlockOptimization::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                         const GALGAS_string & inKey
                                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_symbolTableForBlockOptimization * result = (cMapElement_symbolTableForBlockOptimization *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_symbolTableForBlockOptimization) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_symbolTableForBlockOptimization::cEnumerator_symbolTableForBlockOptimization (const GALGAS_symbolTableForBlockOptimization & inEnumeratedObject,
                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization_2D_element cEnumerator_symbolTableForBlockOptimization::current (LOCATION_ARGS) const {
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
  return GALGAS_symbolTableForBlockOptimization_2D_element (p->mProperty_lkey, p->mProperty_mDefinitionBlockIndex) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_symbolTableForBlockOptimization::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_symbolTableForBlockOptimization::current_mDefinitionBlockIndex (LOCATION_ARGS) const {
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
  return p->mProperty_mDefinitionBlockIndex ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_symbolTableForBlockOptimization::optional_searchKey (const GALGAS_string & inKey,
                                                                 GALGAS_uint & outArgument0) const {
  const cMapElement_symbolTableForBlockOptimization * p = (const cMapElement_symbolTableForBlockOptimization *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_symbolTableForBlockOptimization) ;
    outArgument0 = p->mProperty_mDefinitionBlockIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @symbolTableForBlockOptimization generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ("symbolTableForBlockOptimization",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_symbolTableForBlockOptimization::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_symbolTableForBlockOptimization::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_symbolTableForBlockOptimization (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_symbolTableForBlockOptimization GALGAS_symbolTableForBlockOptimization::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_symbolTableForBlockOptimization result ;
  const GALGAS_symbolTableForBlockOptimization * p = (const GALGAS_symbolTableForBlockOptimization *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_symbolTableForBlockOptimization *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

