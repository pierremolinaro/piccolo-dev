#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_pseudo_5F_ORG reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOrigin () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOrigin.printNonNullClassInstanceProperties ("mOrigin") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::
init_21_ (const GALGAS_uint & in_mOrigin,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_pseudo_5F_ORG_init_21_ (in_mOrigin, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::
baseline_5F_assembly_5F_pseudo_5F_ORG_init_21_ (const GALGAS_uint & in_mOrigin,
                                                Compiler * /* inCompiler */) {
  mProperty_mOrigin = in_mOrigin ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (const cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::class_func_new (const GALGAS_uint & in_mOrigin
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (in_mOrigin COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::readProperty_mOrigin (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
    return p->mProperty_mOrigin ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::setProperty_mOrigin (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
    p->mProperty_mOrigin = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_pseudo_ORG class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (const GALGAS_uint & in_mOrigin
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mOrigin () {
  mProperty_mOrigin = in_mOrigin ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
}

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_pseudo_ORG:") ;
  mProperty_mOrigin.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG (mProperty_mOrigin COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_ORG generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ("baseline_assembly_pseudo_ORG",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ORG", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak & GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG & inSource) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak::bang_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG) ;
      result = GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG ((cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_ORG-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak ("baseline_assembly_pseudo_ORG-weak",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ORG-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak & GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE & inSource) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::bang_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE) ;
      result = GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE ((cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_BEGINOFROUTINE-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak ("baseline_assembly_pseudo_BEGINOFROUTINE-weak",
                                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_BEGINOFROUTINE-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak & GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE & inSource) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::bang_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE) ;
      result = GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE ((cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_ENDOFROUTINE-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak ("baseline_assembly_pseudo_ENDOFROUTINE-weak",
                                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_ENDOFROUTINE-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak & GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL & inSource) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::bang_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL) ;
      result = GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL ((cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_pseudo_LABEL-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak ("baseline_assembly_pseudo_LABEL-weak",
                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_pseudo_LABEL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_actualInstruction::cPtr_baseline_5F_assembly_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_actualInstruction::objectCompare (const GALGAS_baseline_5F_assembly_5F_actualInstruction & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_actualInstruction::GALGAS_baseline_5F_assembly_5F_actualInstruction (void) :
GALGAS_baseline_5F_assembly_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_actualInstruction::GALGAS_baseline_5F_assembly_5F_actualInstruction (const cPtr_baseline_5F_assembly_5F_actualInstruction * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_baseline_5F_assembly_5F_actualInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_baseline_5F_assembly_5F_actualInstruction * p = (cPtr_baseline_5F_assembly_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_actualInstruction::setProperty_mInstructionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_actualInstruction * p = (cPtr_baseline_5F_assembly_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_actualInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_actualInstruction::cPtr_baseline_5F_assembly_5F_actualInstruction (const GALGAS_location & in_mInstructionLocation
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_instruction (THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_actualInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ("baseline_assembly_actualInstruction",
                                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_actualInstruction GALGAS_baseline_5F_assembly_5F_actualInstruction::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_actualInstruction result ;
  const GALGAS_baseline_5F_assembly_5F_actualInstruction * p = (const GALGAS_baseline_5F_assembly_5F_actualInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak::GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak & GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_actualInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak::GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (const GALGAS_baseline_5F_assembly_5F_actualInstruction & inSource) :
GALGAS_baseline_5F_assembly_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_actualInstruction GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak::bang_baseline_5F_assembly_5F_actualInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_actualInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_actualInstruction) ;
      result = GALGAS_baseline_5F_assembly_5F_actualInstruction ((cPtr_baseline_5F_assembly_5F_actualInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_actualInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak ("baseline_assembly_actualInstruction-weak",
                                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_actualInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_FD::cPtr_baseline_5F_assembly_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::
baseline_5F_assembly_5F_instruction_5F_FD_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (const cPtr_baseline_5F_assembly_5F_instruction_5F_FD * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                   const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                   const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FD result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::setProperty_mInstruction (const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::setProperty_mRegisterDescription (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_FD * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_FD::cPtr_baseline_5F_assembly_5F_instruction_5F_FD (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_FD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_FD::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction_FD generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ("baseline_assembly_instruction_FD",
                                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FD result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak::GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak & GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak::GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak::bang_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FD) ;
      result = GALGAS_baseline_5F_assembly_5F_instruction_5F_FD ((cPtr_baseline_5F_assembly_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction_FD-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak ("baseline_assembly_instruction_FD-weak",
                                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FD-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_F::cPtr_baseline_5F_assembly_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_F::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_F::GALGAS_baseline_5F_assembly_5F_instruction_5F_F (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_F GALGAS_baseline_5F_assembly_5F_instruction_5F_F::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                  const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::
baseline_5F_assembly_5F_instruction_5F_F_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                           const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                           const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_F::GALGAS_baseline_5F_assembly_5F_instruction_5F_F (const cPtr_baseline_5F_assembly_5F_instruction_5F_F * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_F GALGAS_baseline_5F_assembly_5F_instruction_5F_F::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                 const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                                                 const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_F result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_F (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code GALGAS_baseline_5F_assembly_5F_instruction_5F_F::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_F::setProperty_mInstruction (const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_F::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_F::setProperty_mRegisterDescription (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_F * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_F::cPtr_baseline_5F_assembly_5F_instruction_5F_F (const GALGAS_location & in_mInstructionLocation,
                                                                                              const GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                              const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_F::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction_F generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ("baseline_assembly_instruction_F",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_F GALGAS_baseline_5F_assembly_5F_instruction_5F_F::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_F result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak::GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak & GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak::GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_F GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak::bang_baseline_5F_assembly_5F_instruction_5F_F_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_F) ;
      result = GALGAS_baseline_5F_assembly_5F_instruction_5F_F ((cPtr_baseline_5F_assembly_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction_F-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak ("baseline_assembly_instruction_F-weak",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_F_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_F-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_FB::cPtr_baseline_5F_assembly_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GALGAS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::
baseline_5F_assembly_5F_instruction_5F_FB_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                const GALGAS_uint & in_mBitNumber,
                                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (const cPtr_baseline_5F_assembly_5F_instruction_5F_FB * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                   const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                   const GALGAS_uint & in_mBitNumber
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FB result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_bit_5F_oriented_5F_op GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::setProperty_mInstruction (const GALGAS_baseline_5F_bit_5F_oriented_5F_op & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::setProperty_mRegisterDescription (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::setProperty_mBitNumber (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_FB * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_FB::cPtr_baseline_5F_assembly_5F_instruction_5F_FB (const GALGAS_location & in_mInstructionLocation,
                                                                                                const GALGAS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                const GALGAS_uint & in_mBitNumber
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_FB:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_FB::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction_FB generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ("baseline_assembly_instruction_FB",
                                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FB result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak::GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak & GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak::GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak::bang_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_FB) ;
      result = GALGAS_baseline_5F_assembly_5F_instruction_5F_FB ((cPtr_baseline_5F_assembly_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction_FB-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak ("baseline_assembly_instruction_FB-weak",
                                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_FB-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_bool & in_mSkipIfSet,
                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GALGAS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::
baseline_5F_assembly_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                         const GALGAS_bool & in_mSkipIfSet,
                                                                         const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                         const GALGAS_uint & in_mBitNumber,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                     const GALGAS_bool & in_mSkipIfSet,
                                                                                                                                     const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                     const GALGAS_uint & in_mBitNumber
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::setProperty_mSkipIfSet (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mSkipIfSet = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::setProperty_mRegisterDescription (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::setProperty_mBitNumber (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
    p->mProperty_mBitNumber = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (const GALGAS_location & in_mInstructionLocation,
                                                                                                                  const GALGAS_bool & in_mSkipIfSet,
                                                                                                                  const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                  const GALGAS_uint & in_mBitNumber
                                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_BitTestSkip:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSkipIfSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBitNumber.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction_BitTestSkip generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ("baseline_assembly_instruction_BitTestSkip",
                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak::GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak & GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak::GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak::bang_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip) ;
      result = GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip ((cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction_BitTestSkip-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak ("baseline_assembly_instruction_BitTestSkip-weak",
                                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_BitTestSkip-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak & GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak (const GALGAS_baseline_5F_assembly_5F_GOTO & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::bang_baseline_5F_assembly_5F_GOTO_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_GOTO) ;
      result = GALGAS_baseline_5F_assembly_5F_GOTO ((cPtr_baseline_5F_assembly_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_GOTO-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak ("baseline_assembly_GOTO-weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_GOTO_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_GOTO-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_SKIP reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_SKIP::cPtr_baseline_5F_assembly_5F_SKIP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_SKIP::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_SKIP::objectCompare (const GALGAS_baseline_5F_assembly_5F_SKIP & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_SKIP::GALGAS_baseline_5F_assembly_5F_SKIP (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_SKIP GALGAS_baseline_5F_assembly_5F_SKIP::
init_21_ (const GALGAS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_SKIP * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_SKIP (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_SKIP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_SKIP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::
baseline_5F_assembly_5F_SKIP_init_21_ (const GALGAS_location & in_mInstructionLocation,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_SKIP::GALGAS_baseline_5F_assembly_5F_SKIP (const cPtr_baseline_5F_assembly_5F_SKIP * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_SKIP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_SKIP GALGAS_baseline_5F_assembly_5F_SKIP::class_func_new (const GALGAS_location & in_mInstructionLocation
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_SKIP result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_SKIP (in_mInstructionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_SKIP class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_SKIP::cPtr_baseline_5F_assembly_5F_SKIP (const GALGAS_location & in_mInstructionLocation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_SKIP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;
}

void cPtr_baseline_5F_assembly_5F_SKIP::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_SKIP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_SKIP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_SKIP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_SKIP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ("baseline_assembly_SKIP",
                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_SKIP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_SKIP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_SKIP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_SKIP GALGAS_baseline_5F_assembly_5F_SKIP::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_SKIP result ;
  const GALGAS_baseline_5F_assembly_5F_SKIP * p = (const GALGAS_baseline_5F_assembly_5F_SKIP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_SKIP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_SKIP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak::GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak & GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_SKIP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak::GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak (const GALGAS_baseline_5F_assembly_5F_SKIP & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_SKIP GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak::bang_baseline_5F_assembly_5F_SKIP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_SKIP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_SKIP) ;
      result = GALGAS_baseline_5F_assembly_5F_SKIP ((cPtr_baseline_5F_assembly_5F_SKIP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_SKIP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak ("baseline_assembly_SKIP-weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_SKIP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_SKIP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_CALL_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::GALGAS_baseline_5F_assembly_5F_CALL_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL_2D_weak & GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::GALGAS_baseline_5F_assembly_5F_CALL_2D_weak (const GALGAS_baseline_5F_assembly_5F_CALL & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL_2D_weak GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_CALL_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::bang_baseline_5F_assembly_5F_CALL_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_CALL) ;
      result = GALGAS_baseline_5F_assembly_5F_CALL ((cPtr_baseline_5F_assembly_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_CALL-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL_2D_weak ("baseline_assembly_CALL-weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_CALL_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_CALL_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_CALL_2D_weak GALGAS_baseline_5F_assembly_5F_CALL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_CALL_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_CALL_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_CALL_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_CALL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_CALL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::objectCompare (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_WO_5F_OPERAND_init_21__21_ (in_mInstructionLocation, in_mInstruction, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::
baseline_5F_assembly_5F_WO_5F_OPERAND_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (const cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                           const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (in_mInstructionLocation, in_mInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_WO_5F_OPERAND_5F_group GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_WO_5F_OPERAND_5F_group () ;
  }else{
    cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::setProperty_mInstruction (const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_WO_OPERAND:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_WO_OPERAND generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ("baseline_assembly_WO_OPERAND",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND * p = (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak::GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak & GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak::GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak::bang_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND) ;
      result = GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND ((cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_WO_OPERAND-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak ("baseline_assembly_WO_OPERAND-weak",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_WO_OPERAND-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak & GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_TRIS & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak (const GALGAS_baseline_5F_assembly_5F_TRIS & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::bang_baseline_5F_assembly_5F_TRIS_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_TRIS result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_TRIS) ;
      result = GALGAS_baseline_5F_assembly_5F_TRIS ((cPtr_baseline_5F_assembly_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_TRIS-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak ("baseline_assembly_TRIS-weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_TRIS_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_TRIS-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                  const GALGAS_uint & in_mLiteralValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mLiteralValue, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::
baseline_5F_assembly_5F_instruction_5F_literalOperation_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                          const GALGAS_uint & in_mLiteralValue,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                               const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                                               const GALGAS_uint & in_mLiteralValue
                                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (in_mInstructionLocation, in_mInstruction, in_mLiteralValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_literal_5F_instruction_5F_opcode GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::setProperty_mInstruction (const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::setProperty_mLiteralValue (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                                            const GALGAS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                            const GALGAS_uint & in_mLiteralValue
                                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mLiteralValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction_literalOperation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ("baseline_assembly_instruction_literalOperation",
                                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak::GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak & GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak::GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak::bang_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation) ;
      result = GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation ((cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_instruction_literalOperation-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak ("baseline_assembly_instruction_literalOperation-weak",
                                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instruction_literalOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_assembly_5F_incDecRegisterInCondition reference class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_assembly_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mIncrement.printNonNullClassInstanceProperties ("mIncrement") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::objectCompare (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GALGAS_bool & in_mIncrement,
                      const GALGAS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_assembly_5F_incDecRegisterInCondition_init_21__21__21__21_ (in_mInstructionLocation, in_mRegisterDescription, in_mIncrement, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::
baseline_5F_assembly_5F_incDecRegisterInCondition_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                        const GALGAS_bool & in_mIncrement,
                                                                        const GALGAS_bool & in_m_5F_W_5F_isDestination,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (const cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * inSourcePtr) :
GALGAS_baseline_5F_assembly_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                                   const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                                   const GALGAS_bool & in_mIncrement,
                                                                                                                                   const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (in_mInstructionLocation, in_mRegisterDescription, in_mIncrement, in_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_intermediate_5F_registerExpression GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::setProperty_mRegisterDescription (const GALGAS_baseline_5F_intermediate_5F_registerExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    p->mProperty_mRegisterDescription = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::readProperty_mIncrement (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    return p->mProperty_mIncrement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::setProperty_mIncrement (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    p->mProperty_mIncrement = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::setProperty_m_5F_W_5F_isDestination (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
    p->mProperty_m_5F_W_5F_isDestination = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_assembly_incDecRegisterInCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (const GALGAS_location & in_mInstructionLocation,
                                                                                                                const GALGAS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                const GALGAS_bool & in_mIncrement,
                                                                                                                const GALGAS_bool & in_m_5F_W_5F_isDestination
                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_assembly_5F_actualInstruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRegisterDescription (),
mProperty_mIncrement (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mIncrement = in_mIncrement ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
}

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_assembly_incDecRegisterInCondition:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIncrement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_W_5F_isDestination.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition (mProperty_mInstructionLocation, mProperty_mRegisterDescription, mProperty_mIncrement, mProperty_m_5F_W_5F_isDestination COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_incDecRegisterInCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ("baseline_assembly_incDecRegisterInCondition",
                                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition * p = (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_incDecRegisterInCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak::objectCompare (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak & inOperand) const {
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

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak::GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak (void) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak & GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak::operator = (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak::GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition & inSource) :
GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak::bang_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition) ;
      result = GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition ((cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_assembly_incDecRegisterInCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak ("baseline_assembly_incDecRegisterInCondition-weak",
                                                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_actualInstruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak result ;
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak * p = (const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_incDecRegisterInCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_assembly_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                GALGAS_string & io_ioListFileContents,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    inObject->method_print (io_ioListFileContents, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@baseline_assembly_instruction length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint callExtensionGetter_length (const cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_length (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_intermediate_instruction generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateAssemblyCode (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               const GALGAS_baseline_5F_intermediate_5F_registerExpression constin_inSTATUSregister,
                                               const GALGAS_bitSliceTable constin_inStatusRegisterBitSliceTable,
                                               GALGAS_baseline_5F_assembly_5F_instructionList & io_ioAssemblyInstructionList,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_intermediate_5F_instruction) ;
    inObject->method_generateAssemblyCode (constin_inSTATUSregister, constin_inStatusRegisterBitSliceTable, io_ioAssemblyInstructionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_baseline_5F_symbolTable::cMapElement_baseline_5F_symbolTable (const GALGAS_baseline_5F_symbolTable_2D_element & inValue
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mRoutineAddress (inValue.mProperty_mRoutineAddress) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_baseline_5F_symbolTable::cMapElement_baseline_5F_symbolTable (const GALGAS_lstring & inKey,
                                                                          const GALGAS_uint & in_mRoutineAddress
                                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mRoutineAddress (in_mRoutineAddress) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_baseline_5F_symbolTable::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_baseline_5F_symbolTable::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_baseline_5F_symbolTable (mProperty_lkey, mProperty_mRoutineAddress COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_baseline_5F_symbolTable::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineAddress" ":") ;
  mProperty_mRoutineAddress.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable::GALGAS_baseline_5F_symbolTable (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable::GALGAS_baseline_5F_symbolTable (const GALGAS_baseline_5F_symbolTable & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable & GALGAS_baseline_5F_symbolTable::operator = (const GALGAS_baseline_5F_symbolTable & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable GALGAS_baseline_5F_symbolTable::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable GALGAS_baseline_5F_symbolTable::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable GALGAS_baseline_5F_symbolTable::class_func_mapWithMapToOverride (const GALGAS_baseline_5F_symbolTable & inMapToOverride
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable GALGAS_baseline_5F_symbolTable::getter_overriddenMap (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_symbolTable result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_symbolTable::enterElement (const GALGAS_baseline_5F_symbolTable_2D_element & inValue,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_symbolTable * p = nullptr ;
  macroMyNew (p, cMapElement_baseline_5F_symbolTable (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baseline_5F_symbolTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_symbolTable::addAssign_operation (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_symbolTable * p = nullptr ;
  macroMyNew (p, cMapElement_baseline_5F_symbolTable (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@baseline_5F_symbolTable insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable GALGAS_baseline_5F_symbolTable::add_operation (const GALGAS_baseline_5F_symbolTable & inOperand,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_baseline_5F_symbolTable result = *this ;
  cEnumerator_baseline_5F_symbolTable enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mRoutineAddress (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_symbolTable::setter_insertKey (GALGAS_lstring inKey,
                                                       GALGAS_uint inArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_symbolTable * p = nullptr ;
  macroMyNew (p, cMapElement_baseline_5F_symbolTable (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_baseline_5F_symbolTable_searchKey = "the '%K' label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_symbolTable::method_searchKey (GALGAS_lstring inKey,
                                                       GALGAS_uint & outArgument0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  const cMapElement_baseline_5F_symbolTable * p = (const cMapElement_baseline_5F_symbolTable *) performSearch (inKey,
                                                                                                               inCompiler,
                                                                                                               kSearchErrorMessage_baseline_5F_symbolTable_searchKey
                                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
    outArgument0 = p->mProperty_mRoutineAddress ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_baseline_5F_symbolTable::getter_mRoutineAddressForKey (const GALGAS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_baseline_5F_symbolTable * p = (const cMapElement_baseline_5F_symbolTable *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
    result = p->mProperty_mRoutineAddress ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_baseline_5F_symbolTable::setter_setMRoutineAddressForKey (GALGAS_uint inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_baseline_5F_symbolTable * p = (cMapElement_baseline_5F_symbolTable *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
    p->mProperty_mRoutineAddress = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_baseline_5F_symbolTable * GALGAS_baseline_5F_symbolTable::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                         const GALGAS_string & inKey
                                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_baseline_5F_symbolTable * result = (cMapElement_baseline_5F_symbolTable *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_baseline_5F_symbolTable) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_baseline_5F_symbolTable::cEnumerator_baseline_5F_symbolTable (const GALGAS_baseline_5F_symbolTable & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable_2D_element cEnumerator_baseline_5F_symbolTable::current (LOCATION_ARGS) const {
  const cMapElement_baseline_5F_symbolTable * p = (const cMapElement_baseline_5F_symbolTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
  return GALGAS_baseline_5F_symbolTable_2D_element (p->mProperty_lkey, p->mProperty_mRoutineAddress) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_baseline_5F_symbolTable::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_baseline_5F_symbolTable::current_mRoutineAddress (LOCATION_ARGS) const {
  const cMapElement_baseline_5F_symbolTable * p = (const cMapElement_baseline_5F_symbolTable *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
  return p->mProperty_mRoutineAddress ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_baseline_5F_symbolTable::optional_searchKey (const GALGAS_string & inKey,
                                                         GALGAS_uint & outArgument0) const {
  const cMapElement_baseline_5F_symbolTable * p = (const cMapElement_baseline_5F_symbolTable *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_baseline_5F_symbolTable) ;
    outArgument0 = p->mProperty_mRoutineAddress ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @baseline_symbolTable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_baseline_5F_symbolTable ("baseline_symbolTable",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_baseline_5F_symbolTable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_symbolTable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_baseline_5F_symbolTable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_baseline_5F_symbolTable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_baseline_5F_symbolTable GALGAS_baseline_5F_symbolTable::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_baseline_5F_symbolTable result ;
  const GALGAS_baseline_5F_symbolTable * p = (const GALGAS_baseline_5F_symbolTable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_baseline_5F_symbolTable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_symbolTable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@baseline_assembly_instruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction::method_enterLabelAtAddress (GALGAS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                           GALGAS_uint & /* ioArgument_ioWordAddress */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterLabelAtAddress (cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                              GALGAS_baseline_5F_symbolTable & io_ioRoutineSymbolTable,
                                              GALGAS_uint & io_ioWordAddress,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_assembly_5F_instruction) ;
    inObject->method_enterLabelAtAddress  (io_ioRoutineSymbolTable, io_ioWordAddress, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_assembly_instruction generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateBinaryCodeAtAddress (cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                      const GALGAS_baseline_5F_symbolTable constin_inRoutineSymbolTable,
                                                      GALGAS_string & io_ioListFileContents,
                                                      GALGAS_uint & io_ioWordAddress,
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
// @midrange_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction::cPtr_midrange_5F_instruction (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction::objectCompare (const GALGAS_midrange_5F_instruction & inOperand) const {
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

GALGAS_midrange_5F_instruction::GALGAS_midrange_5F_instruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction::GALGAS_midrange_5F_instruction (const cPtr_midrange_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_instruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_midrange_5F_instruction * p = (cPtr_midrange_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction::setProperty_mInstructionLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction * p = (cPtr_midrange_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction) ;
    p->mProperty_mInstructionLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction::cPtr_midrange_5F_instruction (const GALGAS_location & in_mInstructionLocation
                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction ("midrange_instruction",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction GALGAS_midrange_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction result ;
  const GALGAS_midrange_5F_instruction * p = (const GALGAS_midrange_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_2D_weak::GALGAS_midrange_5F_instruction_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_2D_weak & GALGAS_midrange_5F_instruction_2D_weak::operator = (const GALGAS_midrange_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_2D_weak::GALGAS_midrange_5F_instruction_2D_weak (const GALGAS_midrange_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_2D_weak GALGAS_midrange_5F_instruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction GALGAS_midrange_5F_instruction_2D_weak::bang_midrange_5F_instruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction) ;
      result = GALGAS_midrange_5F_instruction ((cPtr_midrange_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak ("midrange_instruction-weak",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_2D_weak GALGAS_midrange_5F_instruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_2D_weak result ;
  const GALGAS_midrange_5F_instruction_2D_weak * p = (const GALGAS_midrange_5F_instruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@midrange_5F_instructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_midrange_5F_instructionList : public cCollectionElement {
  public: GALGAS_midrange_5F_instructionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_midrange_5F_instructionList (const GALGAS_midrange_5F_instruction & in_mInstruction
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_midrange_5F_instructionList (const GALGAS_midrange_5F_instructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_instructionList::cCollectionElement_midrange_5F_instructionList (const GALGAS_midrange_5F_instruction & in_mInstruction
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_instructionList::cCollectionElement_midrange_5F_instructionList (const GALGAS_midrange_5F_instructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_midrange_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_midrange_5F_instructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_midrange_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_midrange_5F_instructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList::GALGAS_midrange_5F_instructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList::GALGAS_midrange_5F_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList::enterElement (const GALGAS_midrange_5F_instructionList_2D_element & inValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_instructionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::class_func_listWithValue (const GALGAS_midrange_5F_instruction & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_midrange_5F_instructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_midrange_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_midrange_5F_instruction & in_mInstruction
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList::addAssign_operation (const GALGAS_midrange_5F_instruction & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_midrange_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList::setter_append (const GALGAS_midrange_5F_instruction inOperand0,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_midrange_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList::setter_insertAtIndex (const GALGAS_midrange_5F_instruction inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_midrange_5F_instructionList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_midrange_5F_instructionList::setter_removeAtIndex (GALGAS_midrange_5F_instruction & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
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

void GALGAS_midrange_5F_instructionList::setter_popFirst (GALGAS_midrange_5F_instruction & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList::setter_popLast (GALGAS_midrange_5F_instruction & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList::method_first (GALGAS_midrange_5F_instruction & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList::method_last (GALGAS_midrange_5F_instruction & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::add_operation (const GALGAS_midrange_5F_instructionList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result = GALGAS_midrange_5F_instructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result = GALGAS_midrange_5F_instructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instructionList result = GALGAS_midrange_5F_instructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList::plusAssign_operation (const GALGAS_midrange_5F_instructionList inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instructionList::setter_setMInstructionAtIndex (GALGAS_midrange_5F_instruction inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction GALGAS_midrange_5F_instructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_instructionList * p = (cCollectionElement_midrange_5F_instructionList *) attributes.ptr () ;
  GALGAS_midrange_5F_instruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_midrange_5F_instructionList::cEnumerator_midrange_5F_instructionList (const GALGAS_midrange_5F_instructionList & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList_2D_element cEnumerator_midrange_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_instructionList * p = (const cCollectionElement_midrange_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction cEnumerator_midrange_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_instructionList * p = (const cCollectionElement_midrange_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @midrange_instructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instructionList ("midrange_instructionList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instructionList::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instructionList result ;
  const GALGAS_midrange_5F_instructionList * p = (const GALGAS_midrange_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_nobanksel reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_nobanksel::cPtr_midrange_5F_instruction_5F_nobanksel (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_nobanksel::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_nobanksel::objectCompare (const GALGAS_midrange_5F_instruction_5F_nobanksel & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_nobanksel::GALGAS_midrange_5F_instruction_5F_nobanksel (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_nobanksel GALGAS_midrange_5F_instruction_5F_nobanksel::
init_21_ (const GALGAS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_nobanksel * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_nobanksel (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_nobanksel_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_nobanksel result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_nobanksel::
midrange_5F_instruction_5F_nobanksel_init_21_ (const GALGAS_location & in_mInstructionLocation,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_nobanksel::GALGAS_midrange_5F_instruction_5F_nobanksel (const cPtr_midrange_5F_instruction_5F_nobanksel * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_nobanksel) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_nobanksel GALGAS_midrange_5F_instruction_5F_nobanksel::class_func_new (const GALGAS_location & in_mInstructionLocation
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_nobanksel result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_nobanksel (in_mInstructionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_nobanksel class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_nobanksel::cPtr_midrange_5F_instruction_5F_nobanksel (const GALGAS_location & in_mInstructionLocation
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_nobanksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;
}

void cPtr_midrange_5F_instruction_5F_nobanksel::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_nobanksel:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_nobanksel::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_nobanksel (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_nobanksel generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ("midrange_instruction_nobanksel",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_nobanksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_nobanksel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_nobanksel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_nobanksel GALGAS_midrange_5F_instruction_5F_nobanksel::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_nobanksel result ;
  const GALGAS_midrange_5F_instruction_5F_nobanksel * p = (const GALGAS_midrange_5F_instruction_5F_nobanksel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_nobanksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_nobanksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak::GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak & GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_nobanksel & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak::GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak (const GALGAS_midrange_5F_instruction_5F_nobanksel & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_nobanksel GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak::bang_midrange_5F_instruction_5F_nobanksel_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_nobanksel result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_nobanksel) ;
      result = GALGAS_midrange_5F_instruction_5F_nobanksel ((cPtr_midrange_5F_instruction_5F_nobanksel *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_nobanksel-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak ("midrange_instruction_nobanksel-weak",
                                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_nobanksel_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_nobanksel-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_banksel reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel::cPtr_midrange_5F_instruction_5F_banksel (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBankIndex (),
mProperty_mWarningOnUselessBanksel () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_banksel::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
    mProperty_mWarningOnUselessBanksel.printNonNullClassInstanceProperties ("mWarningOnUselessBanksel") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_banksel::objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_banksel::GALGAS_midrange_5F_instruction_5F_banksel (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel GALGAS_midrange_5F_instruction_5F_banksel::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_luint & in_mBankIndex,
                  const GALGAS_bool & in_mWarningOnUselessBanksel,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_banksel * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_banksel (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_banksel_init_21__21__21_ (in_mInstructionLocation, in_mBankIndex, in_mWarningOnUselessBanksel, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_banksel result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel::
midrange_5F_instruction_5F_banksel_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_luint & in_mBankIndex,
                                                     const GALGAS_bool & in_mWarningOnUselessBanksel,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel::GALGAS_midrange_5F_instruction_5F_banksel (const cPtr_midrange_5F_instruction_5F_banksel * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_banksel) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel GALGAS_midrange_5F_instruction_5F_banksel::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                     const GALGAS_luint & in_mBankIndex,
                                                                                                     const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_banksel (in_mInstructionLocation, in_mBankIndex, in_mWarningOnUselessBanksel COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_midrange_5F_instruction_5F_banksel::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel * p = (cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_banksel::setProperty_mBankIndex (const GALGAS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_banksel * p = (cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
    p->mProperty_mBankIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_banksel::readProperty_mWarningOnUselessBanksel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_midrange_5F_instruction_5F_banksel * p = (cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
    return p->mProperty_mWarningOnUselessBanksel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_banksel::setProperty_mWarningOnUselessBanksel (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_banksel * p = (cPtr_midrange_5F_instruction_5F_banksel *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_banksel) ;
    p->mProperty_mWarningOnUselessBanksel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_banksel class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_banksel::cPtr_midrange_5F_instruction_5F_banksel (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_luint & in_mBankIndex,
                                                                                  const GALGAS_bool & in_mWarningOnUselessBanksel
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBankIndex (),
mProperty_mWarningOnUselessBanksel () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
  mProperty_mWarningOnUselessBanksel = in_mWarningOnUselessBanksel ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_banksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;
}

void cPtr_midrange_5F_instruction_5F_banksel::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_banksel:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWarningOnUselessBanksel.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_banksel::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_banksel (mProperty_mInstructionLocation, mProperty_mBankIndex, mProperty_mWarningOnUselessBanksel COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_banksel generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ("midrange_instruction_banksel",
                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_banksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_banksel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_banksel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel GALGAS_midrange_5F_instruction_5F_banksel::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel result ;
  const GALGAS_midrange_5F_instruction_5F_banksel * p = (const GALGAS_midrange_5F_instruction_5F_banksel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_banksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_banksel_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_banksel_2D_weak::GALGAS_midrange_5F_instruction_5F_banksel_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_2D_weak & GALGAS_midrange_5F_instruction_5F_banksel_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_banksel & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_2D_weak::GALGAS_midrange_5F_instruction_5F_banksel_2D_weak (const GALGAS_midrange_5F_instruction_5F_banksel & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_2D_weak GALGAS_midrange_5F_instruction_5F_banksel_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel GALGAS_midrange_5F_instruction_5F_banksel_2D_weak::bang_midrange_5F_instruction_5F_banksel_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_banksel result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_banksel) ;
      result = GALGAS_midrange_5F_instruction_5F_banksel ((cPtr_midrange_5F_instruction_5F_banksel *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_banksel-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_2D_weak ("midrange_instruction_banksel-weak",
                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_banksel_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_banksel_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_banksel_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_2D_weak GALGAS_midrange_5F_instruction_5F_banksel_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_banksel_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_banksel_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_banksel_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrangeInstruction_5F_checkbank reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checkbank::cPtr_midrangeInstruction_5F_checkbank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mBankIndex () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrangeInstruction_5F_checkbank::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrangeInstruction_5F_checkbank::objectCompare (const GALGAS_midrangeInstruction_5F_checkbank & inOperand) const {
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

GALGAS_midrangeInstruction_5F_checkbank::GALGAS_midrangeInstruction_5F_checkbank (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checkbank GALGAS_midrangeInstruction_5F_checkbank::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_uint & in_mBankIndex,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrangeInstruction_5F_checkbank * object = nullptr ;
  macroMyNew (object, cPtr_midrangeInstruction_5F_checkbank (inCompiler COMMA_THERE)) ;
  object->midrangeInstruction_5F_checkbank_init_21__21_ (in_mInstructionLocation, in_mBankIndex, inCompiler) ;
  const GALGAS_midrangeInstruction_5F_checkbank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checkbank::
midrangeInstruction_5F_checkbank_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_uint & in_mBankIndex,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checkbank::GALGAS_midrangeInstruction_5F_checkbank (const cPtr_midrangeInstruction_5F_checkbank * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrangeInstruction_5F_checkbank) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checkbank GALGAS_midrangeInstruction_5F_checkbank::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                 const GALGAS_uint & in_mBankIndex
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checkbank result ;
  macroMyNew (result.mObjectPtr, cPtr_midrangeInstruction_5F_checkbank (in_mInstructionLocation, in_mBankIndex COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_midrangeInstruction_5F_checkbank::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_midrangeInstruction_5F_checkbank * p = (cPtr_midrangeInstruction_5F_checkbank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrangeInstruction_5F_checkbank) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrangeInstruction_5F_checkbank::setProperty_mBankIndex (const GALGAS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrangeInstruction_5F_checkbank * p = (cPtr_midrangeInstruction_5F_checkbank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrangeInstruction_5F_checkbank) ;
    p->mProperty_mBankIndex = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrangeInstruction_checkbank class
//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checkbank::cPtr_midrangeInstruction_5F_checkbank (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_uint & in_mBankIndex
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mBankIndex () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrangeInstruction_5F_checkbank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;
}

void cPtr_midrangeInstruction_5F_checkbank::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrangeInstruction_checkbank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrangeInstruction_5F_checkbank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrangeInstruction_5F_checkbank (mProperty_mInstructionLocation, mProperty_mBankIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrangeInstruction_checkbank generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ("midrangeInstruction_checkbank",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrangeInstruction_5F_checkbank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrangeInstruction_5F_checkbank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrangeInstruction_5F_checkbank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checkbank GALGAS_midrangeInstruction_5F_checkbank::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checkbank result ;
  const GALGAS_midrangeInstruction_5F_checkbank * p = (const GALGAS_midrangeInstruction_5F_checkbank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrangeInstruction_5F_checkbank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checkbank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrangeInstruction_5F_checkbank_2D_weak::objectCompare (const GALGAS_midrangeInstruction_5F_checkbank_2D_weak & inOperand) const {
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

GALGAS_midrangeInstruction_5F_checkbank_2D_weak::GALGAS_midrangeInstruction_5F_checkbank_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checkbank_2D_weak & GALGAS_midrangeInstruction_5F_checkbank_2D_weak::operator = (const GALGAS_midrangeInstruction_5F_checkbank & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checkbank_2D_weak::GALGAS_midrangeInstruction_5F_checkbank_2D_weak (const GALGAS_midrangeInstruction_5F_checkbank & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checkbank_2D_weak GALGAS_midrangeInstruction_5F_checkbank_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checkbank_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checkbank GALGAS_midrangeInstruction_5F_checkbank_2D_weak::bang_midrangeInstruction_5F_checkbank_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrangeInstruction_5F_checkbank result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrangeInstruction_5F_checkbank) ;
      result = GALGAS_midrangeInstruction_5F_checkbank ((cPtr_midrangeInstruction_5F_checkbank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrangeInstruction_checkbank-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank_2D_weak ("midrangeInstruction_checkbank-weak",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrangeInstruction_5F_checkbank_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checkbank_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrangeInstruction_5F_checkbank_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrangeInstruction_5F_checkbank_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checkbank_2D_weak GALGAS_midrangeInstruction_5F_checkbank_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checkbank_2D_weak result ;
  const GALGAS_midrangeInstruction_5F_checkbank_2D_weak * p = (const GALGAS_midrangeInstruction_5F_checkbank_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrangeInstruction_5F_checkbank_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checkbank-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrangeInstruction_5F_checknobank reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checknobank::cPtr_midrangeInstruction_5F_checknobank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrangeInstruction_5F_checknobank::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrangeInstruction_5F_checknobank::objectCompare (const GALGAS_midrangeInstruction_5F_checknobank & inOperand) const {
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

GALGAS_midrangeInstruction_5F_checknobank::GALGAS_midrangeInstruction_5F_checknobank (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checknobank GALGAS_midrangeInstruction_5F_checknobank::
init_21_ (const GALGAS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrangeInstruction_5F_checknobank * object = nullptr ;
  macroMyNew (object, cPtr_midrangeInstruction_5F_checknobank (inCompiler COMMA_THERE)) ;
  object->midrangeInstruction_5F_checknobank_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GALGAS_midrangeInstruction_5F_checknobank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checknobank::
midrangeInstruction_5F_checknobank_init_21_ (const GALGAS_location & in_mInstructionLocation,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checknobank::GALGAS_midrangeInstruction_5F_checknobank (const cPtr_midrangeInstruction_5F_checknobank * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrangeInstruction_5F_checknobank) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checknobank GALGAS_midrangeInstruction_5F_checknobank::class_func_new (const GALGAS_location & in_mInstructionLocation
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checknobank result ;
  macroMyNew (result.mObjectPtr, cPtr_midrangeInstruction_5F_checknobank (in_mInstructionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrangeInstruction_checknobank class
//--------------------------------------------------------------------------------------------------

cPtr_midrangeInstruction_5F_checknobank::cPtr_midrangeInstruction_5F_checknobank (const GALGAS_location & in_mInstructionLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrangeInstruction_5F_checknobank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;
}

void cPtr_midrangeInstruction_5F_checknobank::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@midrangeInstruction_checknobank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrangeInstruction_5F_checknobank::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrangeInstruction_5F_checknobank (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrangeInstruction_checknobank generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ("midrangeInstruction_checknobank",
                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrangeInstruction_5F_checknobank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrangeInstruction_5F_checknobank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrangeInstruction_5F_checknobank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checknobank GALGAS_midrangeInstruction_5F_checknobank::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checknobank result ;
  const GALGAS_midrangeInstruction_5F_checknobank * p = (const GALGAS_midrangeInstruction_5F_checknobank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrangeInstruction_5F_checknobank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checknobank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrangeInstruction_5F_checknobank_2D_weak::objectCompare (const GALGAS_midrangeInstruction_5F_checknobank_2D_weak & inOperand) const {
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

GALGAS_midrangeInstruction_5F_checknobank_2D_weak::GALGAS_midrangeInstruction_5F_checknobank_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checknobank_2D_weak & GALGAS_midrangeInstruction_5F_checknobank_2D_weak::operator = (const GALGAS_midrangeInstruction_5F_checknobank & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checknobank_2D_weak::GALGAS_midrangeInstruction_5F_checknobank_2D_weak (const GALGAS_midrangeInstruction_5F_checknobank & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checknobank_2D_weak GALGAS_midrangeInstruction_5F_checknobank_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checknobank_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checknobank GALGAS_midrangeInstruction_5F_checknobank_2D_weak::bang_midrangeInstruction_5F_checknobank_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrangeInstruction_5F_checknobank result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrangeInstruction_5F_checknobank) ;
      result = GALGAS_midrangeInstruction_5F_checknobank ((cPtr_midrangeInstruction_5F_checknobank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrangeInstruction_checknobank-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank_2D_weak ("midrangeInstruction_checknobank-weak",
                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrangeInstruction_5F_checknobank_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrangeInstruction_5F_checknobank_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrangeInstruction_5F_checknobank_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrangeInstruction_5F_checknobank_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrangeInstruction_5F_checknobank_2D_weak GALGAS_midrangeInstruction_5F_checknobank_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrangeInstruction_5F_checknobank_2D_weak result ;
  const GALGAS_midrangeInstruction_5F_checknobank_2D_weak * p = (const GALGAS_midrangeInstruction_5F_checknobank_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrangeInstruction_5F_checknobank_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrangeInstruction_checknobank-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak::GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak & GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak::GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak::bang_midrange_5F_instruction_5F_banksel_5F_register_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_banksel_5F_register result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_banksel_5F_register) ;
      result = GALGAS_midrange_5F_instruction_5F_banksel_5F_register ((cPtr_midrange_5F_instruction_5F_banksel_5F_register *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_banksel_register-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak ("midrange_instruction_banksel_register-weak",
                                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_banksel_5F_register_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_banksel_register-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_savebank_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_savebank_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_savebank_2D_weak::GALGAS_midrange_5F_instruction_5F_savebank_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank_2D_weak & GALGAS_midrange_5F_instruction_5F_savebank_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_savebank & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank_2D_weak::GALGAS_midrange_5F_instruction_5F_savebank_2D_weak (const GALGAS_midrange_5F_instruction_5F_savebank & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank_2D_weak GALGAS_midrange_5F_instruction_5F_savebank_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_savebank_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank GALGAS_midrange_5F_instruction_5F_savebank_2D_weak::bang_midrange_5F_instruction_5F_savebank_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_savebank result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_savebank) ;
      result = GALGAS_midrange_5F_instruction_5F_savebank ((cPtr_midrange_5F_instruction_5F_savebank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_savebank-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank_2D_weak ("midrange_instruction_savebank-weak",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_savebank_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_savebank_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_savebank_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_savebank_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_savebank_2D_weak GALGAS_midrange_5F_instruction_5F_savebank_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_savebank_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_savebank_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_savebank_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_savebank_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_savebank-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak & GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::bang_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT ((cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_STATIC_REPEAT-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ("midrange_instruction_STATIC_REPEAT-weak",
                                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_STATIC_REPEAT-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_ADDWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_ADDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_ANDWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_ANDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_COMF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_COMF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_DECF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_DECFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_INCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_INCFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_IORWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_IORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_RLF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_RLF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_RRF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_RRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SUBWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_SUBWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_SWAPF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_XORWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  result.mEnum = kEnum_XORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_ADDWF () const {
  const bool ok = mEnum == kEnum_ADDWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_ANDWF () const {
  const bool ok = mEnum == kEnum_ANDWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_COMF () const {
  const bool ok = mEnum == kEnum_COMF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_DECF () const {
  const bool ok = mEnum == kEnum_DECF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_DECFSZ () const {
  const bool ok = mEnum == kEnum_DECFSZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_INCF () const {
  const bool ok = mEnum == kEnum_INCF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_INCFSZ () const {
  const bool ok = mEnum == kEnum_INCFSZ ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_IORWF () const {
  const bool ok = mEnum == kEnum_IORWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_MOVF () const {
  const bool ok = mEnum == kEnum_MOVF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_RLF () const {
  const bool ok = mEnum == kEnum_RLF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_RRF () const {
  const bool ok = mEnum == kEnum_RRF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_SUBWF () const {
  const bool ok = mEnum == kEnum_SUBWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_SWAPF () const {
  const bool ok = mEnum == kEnum_SWAPF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::optional_XORWF () const {
  const bool ok = mEnum == kEnum_XORWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_midrange_5F_instruction_5F_FD_5F_base_5F_code [15] = {
  "(not built)",
  "ADDWF",
  "ANDWF",
  "COMF",
  "DECF",
  "DECFSZ",
  "INCF",
  "INCFSZ",
  "IORWF",
  "MOVF",
  "RLF",
  "RRF",
  "SUBWF",
  "SWAPF",
  "XORWF"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isADDWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ADDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isANDWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ANDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isCOMF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_COMF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_DECFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_INCFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isIORWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_IORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isMOVF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isRLF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RLF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isRRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isSUBWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SUBWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isSWAPF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SWAPF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::getter_isXORWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_XORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::description (String & ioString,
                                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @midrange_instruction_FD_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_midrange_5F_instruction_5F_FD_5F_base_5F_code [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::objectCompare (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inOperand) const {
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
//
//     @midrange_instruction_FD_base_code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code ("midrange_instruction_FD_base_code",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code result ;
  const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code * p = (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FD_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@midrange_instruction_FD_base_code mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      result_outResult = GALGAS_string ("ADDWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      result_outResult = GALGAS_string ("ANDWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      result_outResult = GALGAS_string ("COMF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      result_outResult = GALGAS_string ("DECF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      result_outResult = GALGAS_string ("DECFSZ") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      result_outResult = GALGAS_string ("INCF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      result_outResult = GALGAS_string ("INCFSZ") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      result_outResult = GALGAS_string ("IORWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      result_outResult = GALGAS_string ("MOVF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      result_outResult = GALGAS_string ("RLF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      result_outResult = GALGAS_string ("RRF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      result_outResult = GALGAS_string ("SUBWF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      result_outResult = GALGAS_string ("SWAPF") ;
    }
    break ;
  case GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      result_outResult = GALGAS_string ("XORWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_FD_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_FD_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_FD_2D_weak::GALGAS_midrange_5F_instruction_5F_FD_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_2D_weak & GALGAS_midrange_5F_instruction_5F_FD_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_FD & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_2D_weak::GALGAS_midrange_5F_instruction_5F_FD_2D_weak (const GALGAS_midrange_5F_instruction_5F_FD & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_2D_weak GALGAS_midrange_5F_instruction_5F_FD_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD GALGAS_midrange_5F_instruction_5F_FD_2D_weak::bang_midrange_5F_instruction_5F_FD_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_FD) ;
      result = GALGAS_midrange_5F_instruction_5F_FD ((cPtr_midrange_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_FD-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_2D_weak ("midrange_instruction_FD-weak",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FD_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FD_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FD_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FD_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FD_2D_weak GALGAS_midrange_5F_instruction_5F_FD_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_FD_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_FD_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FD_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FD-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_CLRF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  result.mEnum = kEnum_MOVWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::optional_CLRF () const {
  const bool ok = mEnum == kEnum_CLRF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::optional_MOVWF () const {
  const bool ok = mEnum == kEnum_MOVWF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_midrange_5F_F_5F_instruction_5F_base_5F_code [3] = {
  "(not built)",
  "CLRF",
  "MOVWF"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::getter_isCLRF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_CLRF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::getter_isMOVWF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::description (String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @midrange_F_instruction_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_midrange_5F_F_5F_instruction_5F_base_5F_code [mEnum]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_F_instruction_base_code generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code ("midrange_F_instruction_base_code",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code result ;
  const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code * p = (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_F_instruction_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@midrange_F_instruction_base_code mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      result_outResult = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      result_outResult = GALGAS_string ("MOVWF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_F_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_F_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_F_2D_weak::GALGAS_midrange_5F_instruction_5F_F_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F_2D_weak & GALGAS_midrange_5F_instruction_5F_F_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_F & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F_2D_weak::GALGAS_midrange_5F_instruction_5F_F_2D_weak (const GALGAS_midrange_5F_instruction_5F_F & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F_2D_weak GALGAS_midrange_5F_instruction_5F_F_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_F_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F GALGAS_midrange_5F_instruction_5F_F_2D_weak::bang_midrange_5F_instruction_5F_F_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_F) ;
      result = GALGAS_midrange_5F_instruction_5F_F ((cPtr_midrange_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_F-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F_2D_weak ("midrange_instruction_F-weak",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_F_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_F_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_F_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_F_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_F_2D_weak GALGAS_midrange_5F_instruction_5F_F_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_F_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_F_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_F_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_F_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_F-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bit_5F_oriented_5F_op::GALGAS_midrange_5F_bit_5F_oriented_5F_op (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_bit_5F_oriented_5F_op result ;
  result.mEnum = kEnum_BSF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_bit_5F_oriented_5F_op::optional_BCF () const {
  const bool ok = mEnum == kEnum_BCF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_bit_5F_oriented_5F_op::optional_BSF () const {
  const bool ok = mEnum == kEnum_BSF ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_midrange_5F_bit_5F_oriented_5F_op [3] = {
  "(not built)",
  "BCF",
  "BSF"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_bit_5F_oriented_5F_op::getter_isBCF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_bit_5F_oriented_5F_op::getter_isBSF (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_BSF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_bit_5F_oriented_5F_op::description (String & ioString,
                                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @midrange_bit_oriented_op: ") ;
  ioString.appendCString (gEnumNameArrayFor_midrange_5F_bit_5F_oriented_5F_op [mEnum]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_bit_oriented_op generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bit_5F_oriented_5F_op ("midrange_bit_oriented_op",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_bit_5F_oriented_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bit_5F_oriented_5F_op ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_bit_5F_oriented_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_bit_5F_oriented_5F_op (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bit_5F_oriented_5F_op GALGAS_midrange_5F_bit_5F_oriented_5F_op::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bit_5F_oriented_5F_op result ;
  const GALGAS_midrange_5F_bit_5F_oriented_5F_op * p = (const GALGAS_midrange_5F_bit_5F_oriented_5F_op *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_bit_5F_oriented_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bit_oriented_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@midrange_bit_oriented_op mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_bit_5F_oriented_5F_op & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_bit_5F_oriented_5F_op temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      result_outResult = GALGAS_string ("BCF") ;
    }
    break ;
  case GALGAS_midrange_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      result_outResult = GALGAS_string ("BSF") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_FB_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_FB_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_FB_2D_weak::GALGAS_midrange_5F_instruction_5F_FB_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB_2D_weak & GALGAS_midrange_5F_instruction_5F_FB_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_FB & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB_2D_weak::GALGAS_midrange_5F_instruction_5F_FB_2D_weak (const GALGAS_midrange_5F_instruction_5F_FB & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB_2D_weak GALGAS_midrange_5F_instruction_5F_FB_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FB_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB GALGAS_midrange_5F_instruction_5F_FB_2D_weak::bang_midrange_5F_instruction_5F_FB_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_FB) ;
      result = GALGAS_midrange_5F_instruction_5F_FB ((cPtr_midrange_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_FB-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB_2D_weak ("midrange_instruction_FB-weak",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FB_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FB_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FB_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FB_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FB_2D_weak GALGAS_midrange_5F_instruction_5F_FB_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FB_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_FB_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_FB_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FB_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FB-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_CALL_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::GALGAS_midrange_5F_instruction_5F_CALL_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL_2D_weak & GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_CALL & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::GALGAS_midrange_5F_instruction_5F_CALL_2D_weak (const GALGAS_midrange_5F_instruction_5F_CALL & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL_2D_weak GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CALL_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::bang_midrange_5F_instruction_5F_CALL_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_CALL) ;
      result = GALGAS_midrange_5F_instruction_5F_CALL ((cPtr_midrange_5F_instruction_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_CALL-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL_2D_weak ("midrange_instruction_CALL-weak",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CALL_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_CALL_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CALL_2D_weak GALGAS_midrange_5F_instruction_5F_CALL_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CALL_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_CALL_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_CALL_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_CALL_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CALL-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_JSR_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::GALGAS_midrange_5F_instruction_5F_JSR_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR_2D_weak & GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_JSR & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::GALGAS_midrange_5F_instruction_5F_JSR_2D_weak (const GALGAS_midrange_5F_instruction_5F_JSR & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR_2D_weak GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JSR_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::bang_midrange_5F_instruction_5F_JSR_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_JSR) ;
      result = GALGAS_midrange_5F_instruction_5F_JSR ((cPtr_midrange_5F_instruction_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_JSR-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR_2D_weak ("midrange_instruction_JSR-weak",
                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JSR_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_JSR_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JSR_2D_weak GALGAS_midrange_5F_instruction_5F_JSR_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JSR_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_JSR_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_JSR_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_JSR_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JSR-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak & GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_JUMP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak (const GALGAS_midrange_5F_instruction_5F_JUMP & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::bang_midrange_5F_instruction_5F_JUMP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_JUMP) ;
      result = GALGAS_midrange_5F_instruction_5F_JUMP ((cPtr_midrange_5F_instruction_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_JUMP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak ("midrange_instruction_JUMP-weak",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_JUMP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_JUMP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak & GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_GOTO & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak (const GALGAS_midrange_5F_instruction_5F_GOTO & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::bang_midrange_5F_instruction_5F_GOTO_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_GOTO) ;
      result = GALGAS_midrange_5F_instruction_5F_GOTO ((cPtr_midrange_5F_instruction_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_GOTO-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak ("midrange_instruction_GOTO-weak",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_GOTO_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_GOTO-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_CLRWDT reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_instruction_5F_CLRWDT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_CLRWDT::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_CLRWDT::objectCompare (const GALGAS_midrange_5F_instruction_5F_CLRWDT & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_CLRWDT::GALGAS_midrange_5F_instruction_5F_CLRWDT (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_instruction_5F_CLRWDT::
init_21_ (const GALGAS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_CLRWDT * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_CLRWDT (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_CLRWDT_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_CLRWDT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::
midrange_5F_instruction_5F_CLRWDT_init_21_ (const GALGAS_location & in_mInstructionLocation,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRWDT::GALGAS_midrange_5F_instruction_5F_CLRWDT (const cPtr_midrange_5F_instruction_5F_CLRWDT * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CLRWDT) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_instruction_5F_CLRWDT::class_func_new (const GALGAS_location & in_mInstructionLocation
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRWDT result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CLRWDT (in_mInstructionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_CLRWDT class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRWDT::cPtr_midrange_5F_instruction_5F_CLRWDT (const GALGAS_location & in_mInstructionLocation
                                                                                COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_CLRWDT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;
}

void cPtr_midrange_5F_instruction_5F_CLRWDT::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_CLRWDT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_CLRWDT::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CLRWDT (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_CLRWDT generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ("midrange_instruction_CLRWDT",
                                                                                         & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_CLRWDT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_CLRWDT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_CLRWDT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_instruction_5F_CLRWDT::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRWDT result ;
  const GALGAS_midrange_5F_instruction_5F_CLRWDT * p = (const GALGAS_midrange_5F_instruction_5F_CLRWDT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_CLRWDT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRWDT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak::GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak & GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_CLRWDT & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak::GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak (const GALGAS_midrange_5F_instruction_5F_CLRWDT & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRWDT GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak::bang_midrange_5F_instruction_5F_CLRWDT_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_CLRWDT result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_CLRWDT) ;
      result = GALGAS_midrange_5F_instruction_5F_CLRWDT ((cPtr_midrange_5F_instruction_5F_CLRWDT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_CLRWDT-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak ("midrange_instruction_CLRWDT-weak",
                                                                                                 & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_CLRWDT_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRWDT-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_CLRW reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRW::cPtr_midrange_5F_instruction_5F_CLRW (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_CLRW::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_CLRW::objectCompare (const GALGAS_midrange_5F_instruction_5F_CLRW & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_CLRW::GALGAS_midrange_5F_instruction_5F_CLRW (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRW GALGAS_midrange_5F_instruction_5F_CLRW::
init_21_ (const GALGAS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_CLRW * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_CLRW (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_CLRW_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_CLRW result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::
midrange_5F_instruction_5F_CLRW_init_21_ (const GALGAS_location & in_mInstructionLocation,
                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRW::GALGAS_midrange_5F_instruction_5F_CLRW (const cPtr_midrange_5F_instruction_5F_CLRW * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_CLRW) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRW GALGAS_midrange_5F_instruction_5F_CLRW::class_func_new (const GALGAS_location & in_mInstructionLocation
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRW result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_CLRW (in_mInstructionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_CLRW class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_CLRW::cPtr_midrange_5F_instruction_5F_CLRW (const GALGAS_location & in_mInstructionLocation
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_CLRW::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;
}

void cPtr_midrange_5F_instruction_5F_CLRW::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_CLRW:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_CLRW::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_CLRW (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_CLRW generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ("midrange_instruction_CLRW",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_CLRW::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_CLRW::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_CLRW (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRW GALGAS_midrange_5F_instruction_5F_CLRW::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRW result ;
  const GALGAS_midrange_5F_instruction_5F_CLRW * p = (const GALGAS_midrange_5F_instruction_5F_CLRW *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_CLRW *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRW", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak::GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak & GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_CLRW & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak::GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak (const GALGAS_midrange_5F_instruction_5F_CLRW & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRW GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak::bang_midrange_5F_instruction_5F_CLRW_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_CLRW result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_CLRW) ;
      result = GALGAS_midrange_5F_instruction_5F_CLRW ((cPtr_midrange_5F_instruction_5F_CLRW *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_CLRW-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak ("midrange_instruction_CLRW-weak",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_CLRW_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRW-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_NOP reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_NOP::cPtr_midrange_5F_instruction_5F_NOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_NOP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_NOP::objectCompare (const GALGAS_midrange_5F_instruction_5F_NOP & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_NOP::GALGAS_midrange_5F_instruction_5F_NOP (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_NOP GALGAS_midrange_5F_instruction_5F_NOP::
init_21_ (const GALGAS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_NOP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_NOP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_NOP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_NOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::
midrange_5F_instruction_5F_NOP_init_21_ (const GALGAS_location & in_mInstructionLocation,
                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_NOP::GALGAS_midrange_5F_instruction_5F_NOP (const cPtr_midrange_5F_instruction_5F_NOP * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_NOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_NOP GALGAS_midrange_5F_instruction_5F_NOP::class_func_new (const GALGAS_location & in_mInstructionLocation
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_NOP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_NOP (in_mInstructionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_NOP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_NOP::cPtr_midrange_5F_instruction_5F_NOP (const GALGAS_location & in_mInstructionLocation
                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_NOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;
}

void cPtr_midrange_5F_instruction_5F_NOP::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_NOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_NOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_NOP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_NOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ("midrange_instruction_NOP",
                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_NOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_NOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_NOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_NOP GALGAS_midrange_5F_instruction_5F_NOP::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_NOP result ;
  const GALGAS_midrange_5F_instruction_5F_NOP * p = (const GALGAS_midrange_5F_instruction_5F_NOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_NOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_NOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_NOP_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_NOP_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_NOP_2D_weak::GALGAS_midrange_5F_instruction_5F_NOP_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_NOP_2D_weak & GALGAS_midrange_5F_instruction_5F_NOP_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_NOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_NOP_2D_weak::GALGAS_midrange_5F_instruction_5F_NOP_2D_weak (const GALGAS_midrange_5F_instruction_5F_NOP & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_NOP_2D_weak GALGAS_midrange_5F_instruction_5F_NOP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_NOP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_NOP GALGAS_midrange_5F_instruction_5F_NOP_2D_weak::bang_midrange_5F_instruction_5F_NOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_NOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_NOP) ;
      result = GALGAS_midrange_5F_instruction_5F_NOP ((cPtr_midrange_5F_instruction_5F_NOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_NOP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP_2D_weak ("midrange_instruction_NOP-weak",
                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_NOP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_NOP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_NOP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_NOP_2D_weak GALGAS_midrange_5F_instruction_5F_NOP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_NOP_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_NOP_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_NOP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_NOP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_NOP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_SLEEP reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_SLEEP::cPtr_midrange_5F_instruction_5F_SLEEP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_SLEEP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_SLEEP::objectCompare (const GALGAS_midrange_5F_instruction_5F_SLEEP & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_SLEEP::GALGAS_midrange_5F_instruction_5F_SLEEP (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_SLEEP GALGAS_midrange_5F_instruction_5F_SLEEP::
init_21_ (const GALGAS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_SLEEP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_SLEEP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_SLEEP_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_SLEEP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::
midrange_5F_instruction_5F_SLEEP_init_21_ (const GALGAS_location & in_mInstructionLocation,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_SLEEP::GALGAS_midrange_5F_instruction_5F_SLEEP (const cPtr_midrange_5F_instruction_5F_SLEEP * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_SLEEP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_SLEEP GALGAS_midrange_5F_instruction_5F_SLEEP::class_func_new (const GALGAS_location & in_mInstructionLocation
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_SLEEP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_SLEEP (in_mInstructionLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_SLEEP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_SLEEP::cPtr_midrange_5F_instruction_5F_SLEEP (const GALGAS_location & in_mInstructionLocation
                                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_SLEEP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;
}

void cPtr_midrange_5F_instruction_5F_SLEEP::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_SLEEP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_SLEEP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_SLEEP (mProperty_mInstructionLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_SLEEP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ("midrange_instruction_SLEEP",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_SLEEP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_SLEEP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_SLEEP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_SLEEP GALGAS_midrange_5F_instruction_5F_SLEEP::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_SLEEP result ;
  const GALGAS_midrange_5F_instruction_5F_SLEEP * p = (const GALGAS_midrange_5F_instruction_5F_SLEEP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_SLEEP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_SLEEP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak::GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak & GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_SLEEP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak::GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak (const GALGAS_midrange_5F_instruction_5F_SLEEP & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_SLEEP GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak::bang_midrange_5F_instruction_5F_SLEEP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_SLEEP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_SLEEP) ;
      result = GALGAS_midrange_5F_instruction_5F_SLEEP ((cPtr_midrange_5F_instruction_5F_SLEEP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_SLEEP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak ("midrange_instruction_SLEEP-weak",
                                                                                                & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_SLEEP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_SLEEP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::GALGAS_midrange_5F_literal_5F_instruction_5F_opcode (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_ADDLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_ADDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_ANDLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_ANDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_IORLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_IORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_MOVLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_RETLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_SUBLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_SUBLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_XORLW (UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  result.mEnum = kEnum_XORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::optional_ADDLW () const {
  const bool ok = mEnum == kEnum_ADDLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::optional_ANDLW () const {
  const bool ok = mEnum == kEnum_ANDLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::optional_IORLW () const {
  const bool ok = mEnum == kEnum_IORLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::optional_MOVLW () const {
  const bool ok = mEnum == kEnum_MOVLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::optional_RETLW () const {
  const bool ok = mEnum == kEnum_RETLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::optional_SUBLW () const {
  const bool ok = mEnum == kEnum_SUBLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::optional_XORLW () const {
  const bool ok = mEnum == kEnum_XORLW ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_midrange_5F_literal_5F_instruction_5F_opcode [8] = {
  "(not built)",
  "ADDLW",
  "ANDLW",
  "IORLW",
  "MOVLW",
  "RETLW",
  "SUBLW",
  "XORLW"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isADDLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ADDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isANDLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_ANDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isIORLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_IORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isMOVLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_MOVLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isRETLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_RETLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isSUBLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_SUBLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::getter_isXORLW (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_XORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::description (String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @midrange_literal_instruction_opcode: ") ;
  ioString.appendCString (gEnumNameArrayFor_midrange_5F_literal_5F_instruction_5F_opcode [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::objectCompare (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inOperand) const {
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
//
//     @midrange_literal_instruction_opcode generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_literal_5F_instruction_5F_opcode ("midrange_literal_instruction_opcode",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_literal_5F_instruction_5F_opcode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_literal_5F_instruction_5F_opcode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_literal_5F_instruction_5F_opcode result ;
  const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode * p = (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_literal_instruction_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@midrange_literal_instruction_opcode mnemonic'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_mnemonic (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      result_outResult = GALGAS_string ("ADDLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      result_outResult = GALGAS_string ("ANDLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      result_outResult = GALGAS_string ("IORLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      result_outResult = GALGAS_string ("MOVLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      result_outResult = GALGAS_string ("RETLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      result_outResult = GALGAS_string ("SUBLW") ;
    }
    break ;
  case GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      result_outResult = GALGAS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_literalOperation::cPtr_midrange_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_literalOperation::objectCompare (const GALGAS_midrange_5F_instruction_5F_literalOperation & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_literalOperation::GALGAS_midrange_5F_instruction_5F_literalOperation (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_literalOperation GALGAS_midrange_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                  const GALGAS_immediatExpression & in_mImmediatExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_literalOperation::
midrange_5F_instruction_5F_literalOperation_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                              const GALGAS_immediatExpression & in_mImmediatExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_literalOperation::GALGAS_midrange_5F_instruction_5F_literalOperation (const cPtr_midrange_5F_instruction_5F_literalOperation * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_literalOperation GALGAS_midrange_5F_instruction_5F_literalOperation::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                       const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                                       const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_literalOperation result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_literalOperation (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_literal_5F_instruction_5F_opcode GALGAS_midrange_5F_instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_literalOperation::setProperty_mLiteralInstruction (const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
    p->mProperty_mLiteralInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_immediatExpression GALGAS_midrange_5F_instruction_5F_literalOperation::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_immediatExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_literalOperation::setProperty_mImmediatExpression (const GALGAS_immediatExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_literalOperation) ;
    p->mProperty_mImmediatExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_literalOperation::cPtr_midrange_5F_instruction_5F_literalOperation (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_midrange_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                    const GALGAS_immediatExpression & in_mImmediatExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;
}

void cPtr_midrange_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_literalOperation::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mImmediatExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_literalOperation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ("midrange_instruction_literalOperation",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_literalOperation GALGAS_midrange_5F_instruction_5F_literalOperation::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_literalOperation result ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation * p = (const GALGAS_midrange_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak::GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak & GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_literalOperation & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak::GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak (const GALGAS_midrange_5F_instruction_5F_literalOperation & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_literalOperation GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak::bang_midrange_5F_instruction_5F_literalOperation_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_literalOperation) ;
      result = GALGAS_midrange_5F_instruction_5F_literalOperation ((cPtr_midrange_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_literalOperation-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak ("midrange_instruction_literalOperation-weak",
                                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_literalOperation_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_literalOperation-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_MNOP reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_MNOP::cPtr_midrange_5F_instruction_5F_MNOP (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mOccurrenceFactor () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_MNOP::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mOccurrenceFactor.printNonNullClassInstanceProperties ("mOccurrenceFactor") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_MNOP::objectCompare (const GALGAS_midrange_5F_instruction_5F_MNOP & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_MNOP::GALGAS_midrange_5F_instruction_5F_MNOP (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_MNOP GALGAS_midrange_5F_instruction_5F_MNOP::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_luint & in_mOccurrenceFactor,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_MNOP * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_MNOP (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_MNOP_init_21__21_ (in_mInstructionLocation, in_mOccurrenceFactor, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_MNOP result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::
midrange_5F_instruction_5F_MNOP_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_luint & in_mOccurrenceFactor,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_MNOP::GALGAS_midrange_5F_instruction_5F_MNOP (const cPtr_midrange_5F_instruction_5F_MNOP * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_MNOP) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_MNOP GALGAS_midrange_5F_instruction_5F_MNOP::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                               const GALGAS_luint & in_mOccurrenceFactor
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_MNOP result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_MNOP (in_mInstructionLocation, in_mOccurrenceFactor COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_midrange_5F_instruction_5F_MNOP::readProperty_mOccurrenceFactor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_midrange_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_MNOP) ;
    return p->mProperty_mOccurrenceFactor ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_MNOP::setProperty_mOccurrenceFactor (const GALGAS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_instruction_5F_MNOP *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_MNOP) ;
    p->mProperty_mOccurrenceFactor = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_MNOP class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_MNOP::cPtr_midrange_5F_instruction_5F_MNOP (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_luint & in_mOccurrenceFactor
                                                                            COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mOccurrenceFactor () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOccurrenceFactor = in_mOccurrenceFactor ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_MNOP::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;
}

void cPtr_midrange_5F_instruction_5F_MNOP::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_MNOP:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOccurrenceFactor.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_MNOP::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_MNOP (mProperty_mInstructionLocation, mProperty_mOccurrenceFactor COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_MNOP generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ("midrange_instruction_MNOP",
                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_MNOP::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_MNOP::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_MNOP (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_MNOP GALGAS_midrange_5F_instruction_5F_MNOP::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_MNOP result ;
  const GALGAS_midrange_5F_instruction_5F_MNOP * p = (const GALGAS_midrange_5F_instruction_5F_MNOP *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_MNOP *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_MNOP", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak::GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak & GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_MNOP & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak::GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak (const GALGAS_midrange_5F_instruction_5F_MNOP & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_MNOP GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak::bang_midrange_5F_instruction_5F_MNOP_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_MNOP) ;
      result = GALGAS_midrange_5F_instruction_5F_MNOP ((cPtr_midrange_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_MNOP-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak ("midrange_instruction_MNOP-weak",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_MNOP_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_MNOP-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FOREVER::cPtr_midrange_5F_instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_FOREVER::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstructionList.printNonNullClassInstanceProperties ("mEndOfInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_FOREVER::objectCompare (const GALGAS_midrange_5F_instruction_5F_FOREVER & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_FOREVER::GALGAS_midrange_5F_instruction_5F_FOREVER (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FOREVER GALGAS_midrange_5F_instruction_5F_FOREVER::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                  const GALGAS_location & in_mEndOfInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_FOREVER * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_FOREVER (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_FOREVER_init_21__21__21_ (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::
midrange_5F_instruction_5F_FOREVER_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                     const GALGAS_location & in_mEndOfInstructionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FOREVER::GALGAS_midrange_5F_instruction_5F_FOREVER (const cPtr_midrange_5F_instruction_5F_FOREVER * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_FOREVER) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FOREVER GALGAS_midrange_5F_instruction_5F_FOREVER::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                     const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                     const GALGAS_location & in_mEndOfInstructionList
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FOREVER result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_FOREVER (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_FOREVER::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FOREVER::setProperty_mInstructionList (const GALGAS_midrange_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_instruction_5F_FOREVER::readProperty_mEndOfInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_FOREVER::setProperty_mEndOfInstructionList (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_FOREVER) ;
    p->mProperty_mEndOfInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_FOREVER::cPtr_midrange_5F_instruction_5F_FOREVER (const GALGAS_location & in_mInstructionLocation,
                                                                                  const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_FOREVER::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;
}

void cPtr_midrange_5F_instruction_5F_FOREVER::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_FOREVER:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_instruction_5F_FOREVER::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_FOREVER (mProperty_mInstructionLocation, mProperty_mInstructionList, mProperty_mEndOfInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_FOREVER generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ("midrange_instruction_FOREVER",
                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FOREVER::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FOREVER::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FOREVER (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FOREVER GALGAS_midrange_5F_instruction_5F_FOREVER::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FOREVER result ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER * p = (const GALGAS_midrange_5F_instruction_5F_FOREVER *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FOREVER *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FOREVER", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak::GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak & GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_FOREVER & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak::GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak (const GALGAS_midrange_5F_instruction_5F_FOREVER & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FOREVER GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak::bang_midrange_5F_instruction_5F_FOREVER_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_FOREVER result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_FOREVER) ;
      result = GALGAS_midrange_5F_instruction_5F_FOREVER ((cPtr_midrange_5F_instruction_5F_FOREVER *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_FOREVER-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak ("midrange_instruction_FOREVER-weak",
                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_FOREVER_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FOREVER-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GALGAS_midrange_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_instruction () ;
  }else{
    cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::setProperty_mInstruction (const GALGAS_midrange_5F_instruction & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    p->mProperty_mInstruction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GALGAS_location & in_mInstructionLocation,
                                                                                                          const GALGAS_midrange_5F_instruction & in_mInstruction
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_IF_SEMI_COLON generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ("midrange_instruction_IF_SEMI_COLON",
                                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak & GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::bang_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
      result = GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ((cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_IF_SEMI_COLON-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak ("midrange_instruction_IF_SEMI_COLON-weak",
                                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_SEMI_COLON-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak & GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak::GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest & inSource) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak::bang_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
      result = GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest ((cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_IF_BitTest-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak ("midrange_instruction_IF_BitTest-weak",
                                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_BitTest-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak (void) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak & GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak::GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec & inSource) :
GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak::bang_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
      result = GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec ((cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_IF_IncDec-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak ("midrange_instruction_IF_IncDec-weak",
                                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_IncDec-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_conditionExpression reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_conditionExpression::cPtr_midrange_5F_conditionExpression (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_conditionExpression::objectCompare (const GALGAS_midrange_5F_conditionExpression & inOperand) const {
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

GALGAS_midrange_5F_conditionExpression::GALGAS_midrange_5F_conditionExpression (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression::GALGAS_midrange_5F_conditionExpression (const cPtr_midrange_5F_conditionExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_conditionExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_conditionExpression class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_conditionExpression::cPtr_midrange_5F_conditionExpression (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_conditionExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ("midrange_conditionExpression",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_conditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_conditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_conditionExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_conditionExpression::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_conditionExpression result ;
  const GALGAS_midrange_5F_conditionExpression * p = (const GALGAS_midrange_5F_conditionExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_conditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_conditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_conditionExpression_2D_weak::objectCompare (const GALGAS_midrange_5F_conditionExpression_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_conditionExpression_2D_weak::GALGAS_midrange_5F_conditionExpression_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression_2D_weak & GALGAS_midrange_5F_conditionExpression_2D_weak::operator = (const GALGAS_midrange_5F_conditionExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression_2D_weak::GALGAS_midrange_5F_conditionExpression_2D_weak (const GALGAS_midrange_5F_conditionExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression_2D_weak GALGAS_midrange_5F_conditionExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_conditionExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_conditionExpression_2D_weak::bang_midrange_5F_conditionExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_conditionExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_conditionExpression) ;
      result = GALGAS_midrange_5F_conditionExpression ((cPtr_midrange_5F_conditionExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_conditionExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2D_weak ("midrange_conditionExpression-weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_conditionExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_conditionExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_conditionExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression_2D_weak GALGAS_midrange_5F_conditionExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_conditionExpression_2D_weak result ;
  const GALGAS_midrange_5F_conditionExpression_2D_weak * p = (const GALGAS_midrange_5F_conditionExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_conditionExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_conditionExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak::objectCompare (const GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak::GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak (void) :
GALGAS_midrange_5F_conditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak & GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak::operator = (const GALGAS_midrange_5F_incDecRegisterInCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak::GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak (const GALGAS_midrange_5F_incDecRegisterInCondition & inSource) :
GALGAS_midrange_5F_conditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak::bang_midrange_5F_incDecRegisterInCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_incDecRegisterInCondition) ;
      result = GALGAS_midrange_5F_incDecRegisterInCondition ((cPtr_midrange_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_incDecRegisterInCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak ("midrange_incDecRegisterInCondition-weak",
                                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak result ;
  const GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak * p = (const GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_incDecRegisterInCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_incDecRegisterInCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_negateCondition reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_negateCondition::cPtr_midrange_5F_negateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_negateCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_negateCondition::objectCompare (const GALGAS_midrange_5F_negateCondition & inOperand) const {
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

GALGAS_midrange_5F_negateCondition::GALGAS_midrange_5F_negateCondition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_negateCondition GALGAS_midrange_5F_negateCondition::
init_21_ (const GALGAS_midrange_5F_conditionExpression & in_mCondition,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_negateCondition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_negateCondition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_negateCondition_init_21_ (in_mCondition, inCompiler) ;
  const GALGAS_midrange_5F_negateCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::
midrange_5F_negateCondition_init_21_ (const GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                      Compiler * /* inCompiler */) {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_negateCondition::GALGAS_midrange_5F_negateCondition (const cPtr_midrange_5F_negateCondition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_negateCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_negateCondition GALGAS_midrange_5F_negateCondition::class_func_new (const GALGAS_midrange_5F_conditionExpression & in_mCondition
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_negateCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_negateCondition (in_mCondition COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_negateCondition::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_negateCondition * p = (cPtr_midrange_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_negateCondition) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_negateCondition::setProperty_mCondition (const GALGAS_midrange_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_negateCondition * p = (cPtr_midrange_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_negateCondition) ;
    p->mProperty_mCondition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_negateCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_negateCondition::cPtr_midrange_5F_negateCondition (const GALGAS_midrange_5F_conditionExpression & in_mCondition
                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mCondition () {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_negateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;
}

void cPtr_midrange_5F_negateCondition::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_negateCondition:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_negateCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_negateCondition (mProperty_mCondition COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_negateCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition ("midrange_negateCondition",
                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_negateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_negateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_negateCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_negateCondition GALGAS_midrange_5F_negateCondition::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_negateCondition result ;
  const GALGAS_midrange_5F_negateCondition * p = (const GALGAS_midrange_5F_negateCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_negateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_negateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_negateCondition_2D_weak::objectCompare (const GALGAS_midrange_5F_negateCondition_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_negateCondition_2D_weak::GALGAS_midrange_5F_negateCondition_2D_weak (void) :
GALGAS_midrange_5F_conditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_negateCondition_2D_weak & GALGAS_midrange_5F_negateCondition_2D_weak::operator = (const GALGAS_midrange_5F_negateCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_negateCondition_2D_weak::GALGAS_midrange_5F_negateCondition_2D_weak (const GALGAS_midrange_5F_negateCondition & inSource) :
GALGAS_midrange_5F_conditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_negateCondition_2D_weak GALGAS_midrange_5F_negateCondition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_negateCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_negateCondition GALGAS_midrange_5F_negateCondition_2D_weak::bang_midrange_5F_negateCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_negateCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_negateCondition) ;
      result = GALGAS_midrange_5F_negateCondition ((cPtr_midrange_5F_negateCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_negateCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition_2D_weak ("midrange_negateCondition-weak",
                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_negateCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_negateCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_negateCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_negateCondition_2D_weak GALGAS_midrange_5F_negateCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_negateCondition_2D_weak result ;
  const GALGAS_midrange_5F_negateCondition_2D_weak * p = (const GALGAS_midrange_5F_negateCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_negateCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_negateCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_andCondition reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_andCondition::cPtr_midrange_5F_andCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_andCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_andCondition::objectCompare (const GALGAS_midrange_5F_andCondition & inOperand) const {
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

GALGAS_midrange_5F_andCondition::GALGAS_midrange_5F_andCondition (void) :
GALGAS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_andCondition GALGAS_midrange_5F_andCondition::
init_21__21_ (const GALGAS_midrange_5F_conditionExpression & in_mLeftExpression,
              const GALGAS_midrange_5F_conditionExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_andCondition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_andCondition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_andCondition_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GALGAS_midrange_5F_andCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::
midrange_5F_andCondition_init_21__21_ (const GALGAS_midrange_5F_conditionExpression & in_mLeftExpression,
                                       const GALGAS_midrange_5F_conditionExpression & in_mRightExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_andCondition::GALGAS_midrange_5F_andCondition (const cPtr_midrange_5F_andCondition * inSourcePtr) :
GALGAS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_andCondition) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_andCondition GALGAS_midrange_5F_andCondition::class_func_new (const GALGAS_midrange_5F_conditionExpression & in_mLeftExpression,
                                                                                 const GALGAS_midrange_5F_conditionExpression & in_mRightExpression
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_andCondition result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_andCondition (in_mLeftExpression, in_mRightExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_andCondition::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_andCondition::setProperty_mLeftExpression (const GALGAS_midrange_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_andCondition::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_andCondition::setProperty_mRightExpression (const GALGAS_midrange_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_andCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_andCondition::cPtr_midrange_5F_andCondition (const GALGAS_midrange_5F_conditionExpression & in_mLeftExpression,
                                                              const GALGAS_midrange_5F_conditionExpression & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_andCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_andCondition ;
}

void cPtr_midrange_5F_andCondition::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_andCondition:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_midrange_5F_andCondition::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_andCondition (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_andCondition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition ("midrange_andCondition",
                                                                                & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_andCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_andCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_andCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_andCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_andCondition GALGAS_midrange_5F_andCondition::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_andCondition result ;
  const GALGAS_midrange_5F_andCondition * p = (const GALGAS_midrange_5F_andCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_andCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_andCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_andCondition_2D_weak::objectCompare (const GALGAS_midrange_5F_andCondition_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_andCondition_2D_weak::GALGAS_midrange_5F_andCondition_2D_weak (void) :
GALGAS_midrange_5F_conditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_andCondition_2D_weak & GALGAS_midrange_5F_andCondition_2D_weak::operator = (const GALGAS_midrange_5F_andCondition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_andCondition_2D_weak::GALGAS_midrange_5F_andCondition_2D_weak (const GALGAS_midrange_5F_andCondition & inSource) :
GALGAS_midrange_5F_conditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_andCondition_2D_weak GALGAS_midrange_5F_andCondition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_andCondition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_andCondition GALGAS_midrange_5F_andCondition_2D_weak::bang_midrange_5F_andCondition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_andCondition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_andCondition) ;
      result = GALGAS_midrange_5F_andCondition ((cPtr_midrange_5F_andCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_andCondition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition_2D_weak ("midrange_andCondition-weak",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_andCondition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_andCondition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_andCondition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_andCondition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_andCondition_2D_weak GALGAS_midrange_5F_andCondition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_andCondition_2D_weak result ;
  const GALGAS_midrange_5F_andCondition_2D_weak * p = (const GALGAS_midrange_5F_andCondition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_andCondition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_andCondition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::objectCompare (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (void) :
GALGAS_midrange_5F_conditionExpression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak & GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::operator = (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) :
GALGAS_midrange_5F_conditionExpression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::bang_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
      result = GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ((cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_bitTest_in_structured_if_condition-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak ("midrange_bitTest_in_structured_if_condition-weak",
                                                                                                                          & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak result ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak * p = (const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bitTest_in_structured_if_condition-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_structured_5F_if::cPtr_midrange_5F_instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mIfCondition (),
mProperty_mThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElsePartLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_structured_5F_if::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mIfCondition.printNonNullClassInstanceProperties ("mIfCondition") ;
    mProperty_mThenInstructionList.printNonNullClassInstanceProperties ("mThenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElsePartLocation.printNonNullClassInstanceProperties ("mEndOfElsePartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_structured_5F_if::objectCompare (const GALGAS_midrange_5F_instruction_5F_structured_5F_if & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_structured_5F_if::GALGAS_midrange_5F_instruction_5F_structured_5F_if (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_structured_5F_if GALGAS_midrange_5F_instruction_5F_structured_5F_if::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_midrange_5F_conditionExpression & in_mIfCondition,
                          const GALGAS_midrange_5F_instructionList & in_mThenInstructionList,
                          const GALGAS_midrange_5F_instructionList & in_mElseInstructionList,
                          const GALGAS_location & in_mEndOfElsePartLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_structured_5F_if * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_structured_5F_if (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_structured_5F_if result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::
midrange_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_midrange_5F_conditionExpression & in_mIfCondition,
                                                                      const GALGAS_midrange_5F_instructionList & in_mThenInstructionList,
                                                                      const GALGAS_midrange_5F_instructionList & in_mElseInstructionList,
                                                                      const GALGAS_location & in_mEndOfElsePartLocation,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIfCondition = in_mIfCondition ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElsePartLocation = in_mEndOfElsePartLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_structured_5F_if::GALGAS_midrange_5F_instruction_5F_structured_5F_if (const cPtr_midrange_5F_instruction_5F_structured_5F_if * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_structured_5F_if GALGAS_midrange_5F_instruction_5F_structured_5F_if::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                                       const GALGAS_midrange_5F_conditionExpression & in_mIfCondition,
                                                                                                                       const GALGAS_midrange_5F_instructionList & in_mThenInstructionList,
                                                                                                                       const GALGAS_midrange_5F_instructionList & in_mElseInstructionList,
                                                                                                                       const GALGAS_location & in_mEndOfElsePartLocation
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_structured_5F_if result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_structured_5F_if (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mIfCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mIfCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_structured_5F_if::setProperty_mIfCondition (const GALGAS_midrange_5F_conditionExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mIfCondition = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_structured_5F_if::setProperty_mThenInstructionList (const GALGAS_midrange_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mThenInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_structured_5F_if::setProperty_mElseInstructionList (const GALGAS_midrange_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_instruction_5F_structured_5F_if::readProperty_mEndOfElsePartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mEndOfElsePartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_structured_5F_if::setProperty_mEndOfElsePartLocation (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
    p->mProperty_mEndOfElsePartLocation = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_structured_if class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_structured_5F_if::cPtr_midrange_5F_instruction_5F_structured_5F_if (const GALGAS_location & in_mInstructionLocation,
                                                                                                    const GALGAS_midrange_5F_conditionExpression & in_mIfCondition,
                                                                                                    const GALGAS_midrange_5F_instructionList & in_mThenInstructionList,
                                                                                                    const GALGAS_midrange_5F_instructionList & in_mElseInstructionList,
                                                                                                    const GALGAS_location & in_mEndOfElsePartLocation
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;
}

void cPtr_midrange_5F_instruction_5F_structured_5F_if::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_structured_if:") ;
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

acPtr_class * cPtr_midrange_5F_instruction_5F_structured_5F_if::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_structured_if generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ("midrange_instruction_structured_if",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_structured_5F_if GALGAS_midrange_5F_instruction_5F_structured_5F_if::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_structured_5F_if result ;
  const GALGAS_midrange_5F_instruction_5F_structured_5F_if * p = (const GALGAS_midrange_5F_instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak::GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak & GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_structured_5F_if & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak::GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak (const GALGAS_midrange_5F_instruction_5F_structured_5F_if & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_structured_5F_if GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak::bang_midrange_5F_instruction_5F_structured_5F_if_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_structured_5F_if result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
      result = GALGAS_midrange_5F_instruction_5F_structured_5F_if ((cPtr_midrange_5F_instruction_5F_structured_5F_if *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_structured_if-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak ("midrange_instruction_structured_if-weak",
                                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_structured_5F_if_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_structured_if-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@midrange_5F_partList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_midrange_5F_partList : public cCollectionElement {
  public: GALGAS_midrange_5F_partList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_midrange_5F_partList (const GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                   const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfPartLocation
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_midrange_5F_partList (const GALGAS_midrange_5F_partList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_partList::cCollectionElement_midrange_5F_partList (const GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                                                  const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfPartLocation
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_partList::cCollectionElement_midrange_5F_partList (const GALGAS_midrange_5F_partList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mCondition, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_midrange_5F_partList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_midrange_5F_partList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_midrange_5F_partList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_midrange_5F_partList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCondition" ":") ;
  mObject.mProperty_mCondition.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfPartLocation" ":") ;
  mObject.mProperty_mEndOfPartLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList::GALGAS_midrange_5F_partList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList::GALGAS_midrange_5F_partList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_partList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_partList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::enterElement (const GALGAS_midrange_5F_partList_2D_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_partList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::class_func_listWithValue (const GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                                                   const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                   const GALGAS_location & inOperand2
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_partList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_midrange_5F_partList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_midrange_5F_partList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_midrange_5F_conditionExpression & in_mCondition,
                                                             const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfPartLocation
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_partList * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_partList (in_mCondition,
                                                          in_mInstructionList,
                                                          in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::addAssign_operation (const GALGAS_midrange_5F_conditionExpression & inOperand0,
                                                       const GALGAS_midrange_5F_instructionList & inOperand1,
                                                       const GALGAS_location & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_midrange_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::setter_append (const GALGAS_midrange_5F_conditionExpression inOperand0,
                                                 const GALGAS_midrange_5F_instructionList inOperand1,
                                                 const GALGAS_location inOperand2,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_midrange_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::setter_insertAtIndex (const GALGAS_midrange_5F_conditionExpression inOperand0,
                                                        const GALGAS_midrange_5F_instructionList inOperand1,
                                                        const GALGAS_location inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_midrange_5F_partList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_midrange_5F_partList::setter_removeAtIndex (GALGAS_midrange_5F_conditionExpression & outOperand0,
                                                        GALGAS_midrange_5F_instructionList & outOperand1,
                                                        GALGAS_location & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
        outOperand0 = p->mObject.mProperty_mCondition ;
        outOperand1 = p->mObject.mProperty_mInstructionList ;
        outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
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

void GALGAS_midrange_5F_partList::setter_popFirst (GALGAS_midrange_5F_conditionExpression & outOperand0,
                                                   GALGAS_midrange_5F_instructionList & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::setter_popLast (GALGAS_midrange_5F_conditionExpression & outOperand0,
                                                  GALGAS_midrange_5F_instructionList & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::method_first (GALGAS_midrange_5F_conditionExpression & outOperand0,
                                                GALGAS_midrange_5F_instructionList & outOperand1,
                                                GALGAS_location & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::method_last (GALGAS_midrange_5F_conditionExpression & outOperand0,
                                               GALGAS_midrange_5F_instructionList & outOperand1,
                                               GALGAS_location & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    outOperand0 = p->mObject.mProperty_mCondition ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mEndOfPartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::add_operation (const GALGAS_midrange_5F_partList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_partList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_partList result = GALGAS_midrange_5F_partList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_partList result = GALGAS_midrange_5F_partList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_partList result = GALGAS_midrange_5F_partList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::plusAssign_operation (const GALGAS_midrange_5F_partList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::setter_setMConditionAtIndex (GALGAS_midrange_5F_conditionExpression inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCondition = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression GALGAS_midrange_5F_partList::getter_mConditionAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  GALGAS_midrange_5F_conditionExpression result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    result = p->mObject.mProperty_mCondition ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::setter_setMInstructionListAtIndex (GALGAS_midrange_5F_instructionList inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_partList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  GALGAS_midrange_5F_instructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_partList::setter_setMEndOfPartLocationAtIndex (GALGAS_location inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfPartLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_partList::getter_mEndOfPartLocationAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_partList * p = (cCollectionElement_midrange_5F_partList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
    result = p->mObject.mProperty_mEndOfPartLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_midrange_5F_partList::cEnumerator_midrange_5F_partList (const GALGAS_midrange_5F_partList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList_2D_element cEnumerator_midrange_5F_partList::current (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_partList * p = (const cCollectionElement_midrange_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_conditionExpression cEnumerator_midrange_5F_partList::current_mCondition (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_partList * p = (const cCollectionElement_midrange_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
  return p->mObject.mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList cEnumerator_midrange_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_partList * p = (const cCollectionElement_midrange_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_midrange_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_partList * p = (const cCollectionElement_midrange_5F_partList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_partList) ;
  return p->mObject.mProperty_mEndOfPartLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @midrange_partList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_partList ("midrange_partList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_partList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_partList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_partList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_partList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList GALGAS_midrange_5F_partList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_partList result ;
  const GALGAS_midrange_5F_partList * p = (const GALGAS_midrange_5F_partList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_partList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_partList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_do_5F_while::cPtr_midrange_5F_instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_instruction_5F_do_5F_while::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mEndOfRepeatedInstructionList.printNonNullClassInstanceProperties ("mEndOfRepeatedInstructionList") ;
    mProperty_mWhilePartList.printNonNullClassInstanceProperties ("mWhilePartList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_do_5F_while::objectCompare (const GALGAS_midrange_5F_instruction_5F_do_5F_while & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_do_5F_while::GALGAS_midrange_5F_instruction_5F_do_5F_while (void) :
GALGAS_midrange_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_do_5F_while GALGAS_midrange_5F_instruction_5F_do_5F_while::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                      const GALGAS_location & in_mEndOfRepeatedInstructionList,
                      const GALGAS_midrange_5F_partList & in_mWhilePartList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_instruction_5F_do_5F_while * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_instruction_5F_do_5F_while (inCompiler COMMA_THERE)) ;
  object->midrange_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOfRepeatedInstructionList, in_mWhilePartList, inCompiler) ;
  const GALGAS_midrange_5F_instruction_5F_do_5F_while result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_do_5F_while::
midrange_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                             const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                             const GALGAS_midrange_5F_partList & in_mWhilePartList,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_do_5F_while::GALGAS_midrange_5F_instruction_5F_do_5F_while (const cPtr_midrange_5F_instruction_5F_do_5F_while * inSourcePtr) :
GALGAS_midrange_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_do_5F_while GALGAS_midrange_5F_instruction_5F_do_5F_while::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                             const GALGAS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                                                                             const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                                                                             const GALGAS_midrange_5F_partList & in_mWhilePartList
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_do_5F_while result ;
  macroMyNew (result.mObjectPtr, cPtr_midrange_5F_instruction_5F_do_5F_while (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOfRepeatedInstructionList, in_mWhilePartList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_instruction_5F_do_5F_while::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_instructionList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_do_5F_while::setProperty_mRepeatedInstructionList (const GALGAS_midrange_5F_instructionList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    p->mProperty_mRepeatedInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_instruction_5F_do_5F_while::readProperty_mEndOfRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mEndOfRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_do_5F_while::setProperty_mEndOfRepeatedInstructionList (const GALGAS_location & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    p->mProperty_mEndOfRepeatedInstructionList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_partList GALGAS_midrange_5F_instruction_5F_do_5F_while::readProperty_mWhilePartList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_midrange_5F_partList () ;
  }else{
    cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mWhilePartList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_instruction_5F_do_5F_while::setProperty_mWhilePartList (const GALGAS_midrange_5F_partList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
    p->mProperty_mWhilePartList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_instruction_do_while class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_instruction_5F_do_5F_while::cPtr_midrange_5F_instruction_5F_do_5F_while (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_midrange_5F_instructionList & in_mRepeatedInstructionList,
                                                                                          const GALGAS_location & in_mEndOfRepeatedInstructionList,
                                                                                          const GALGAS_midrange_5F_partList & in_mWhilePartList
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_instruction (in_mInstructionLocation COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_midrange_5F_instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;
}

void cPtr_midrange_5F_instruction_5F_do_5F_while::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_instruction_do_while:") ;
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

acPtr_class * cPtr_midrange_5F_instruction_5F_do_5F_while::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_instruction_5F_do_5F_while (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOfRepeatedInstructionList, mProperty_mWhilePartList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_do_while generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ("midrange_instruction_do_while",
                                                                                              & kTypeDescriptor_GALGAS_midrange_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_do_5F_while GALGAS_midrange_5F_instruction_5F_do_5F_while::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_do_5F_while result ;
  const GALGAS_midrange_5F_instruction_5F_do_5F_while * p = (const GALGAS_midrange_5F_instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak::objectCompare (const GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak::GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak (void) :
GALGAS_midrange_5F_instruction_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak & GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak::operator = (const GALGAS_midrange_5F_instruction_5F_do_5F_while & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak::GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak (const GALGAS_midrange_5F_instruction_5F_do_5F_while & inSource) :
GALGAS_midrange_5F_instruction_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_do_5F_while GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak::bang_midrange_5F_instruction_5F_do_5F_while_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_instruction_5F_do_5F_while result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
      result = GALGAS_midrange_5F_instruction_5F_do_5F_while ((cPtr_midrange_5F_instruction_5F_do_5F_while *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_instruction_do_while-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak ("midrange_instruction_do_while-weak",
                                                                                                      & kTypeDescriptor_GALGAS_midrange_5F_instruction_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak result ;
  const GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak * p = (const GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_instruction_5F_do_5F_while_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_do_while-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@midrange_5F_interruptDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_midrange_5F_interruptDefinitionList : public cCollectionElement {
  public: GALGAS_midrange_5F_interruptDefinitionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_midrange_5F_interruptDefinitionList (const GALGAS_location & in_mInterruptLocation,
                                                                  const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                  const GALGAS_lstring & in_mFirstSaveRegister,
                                                                  const GALGAS_lstring & in_mSecondSaveRegister,
                                                                  const GALGAS_location & in_mEndOfInterruptLocation
                                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_midrange_5F_interruptDefinitionList (const GALGAS_midrange_5F_interruptDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_interruptDefinitionList::cCollectionElement_midrange_5F_interruptDefinitionList (const GALGAS_location & in_mInterruptLocation,
                                                                                                                const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                const GALGAS_lstring & in_mFirstSaveRegister,
                                                                                                                const GALGAS_lstring & in_mSecondSaveRegister,
                                                                                                                const GALGAS_location & in_mEndOfInterruptLocation
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInterruptLocation, in_mInstructionList, in_mFirstSaveRegister, in_mSecondSaveRegister, in_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_interruptDefinitionList::cCollectionElement_midrange_5F_interruptDefinitionList (const GALGAS_midrange_5F_interruptDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInterruptLocation, inElement.mProperty_mInstructionList, inElement.mProperty_mFirstSaveRegister, inElement.mProperty_mSecondSaveRegister, inElement.mProperty_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_midrange_5F_interruptDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_midrange_5F_interruptDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_midrange_5F_interruptDefinitionList (mObject.mProperty_mInterruptLocation, mObject.mProperty_mInstructionList, mObject.mProperty_mFirstSaveRegister, mObject.mProperty_mSecondSaveRegister, mObject.mProperty_mEndOfInterruptLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_midrange_5F_interruptDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInterruptLocation" ":") ;
  mObject.mProperty_mInterruptLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFirstSaveRegister" ":") ;
  mObject.mProperty_mFirstSaveRegister.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSecondSaveRegister" ":") ;
  mObject.mProperty_mSecondSaveRegister.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInterruptLocation" ":") ;
  mObject.mProperty_mEndOfInterruptLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList::GALGAS_midrange_5F_interruptDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList::GALGAS_midrange_5F_interruptDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList GALGAS_midrange_5F_interruptDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_interruptDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList GALGAS_midrange_5F_interruptDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_interruptDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::enterElement (const GALGAS_midrange_5F_interruptDefinitionList_2D_element & inValue,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_interruptDefinitionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList GALGAS_midrange_5F_interruptDefinitionList::class_func_listWithValue (const GALGAS_location & inOperand0,
                                                                                                                 const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                                                                 const GALGAS_lstring & inOperand2,
                                                                                                                 const GALGAS_lstring & inOperand3,
                                                                                                                 const GALGAS_location & inOperand4
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_interruptDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_midrange_5F_interruptDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_midrange_5F_interruptDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_location & in_mInterruptLocation,
                                                                            const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                            const GALGAS_lstring & in_mFirstSaveRegister,
                                                                            const GALGAS_lstring & in_mSecondSaveRegister,
                                                                            const GALGAS_location & in_mEndOfInterruptLocation
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_interruptDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_interruptDefinitionList (in_mInterruptLocation,
                                                                         in_mInstructionList,
                                                                         in_mFirstSaveRegister,
                                                                         in_mSecondSaveRegister,
                                                                         in_mEndOfInterruptLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::addAssign_operation (const GALGAS_location & inOperand0,
                                                                      const GALGAS_midrange_5F_instructionList & inOperand1,
                                                                      const GALGAS_lstring & inOperand2,
                                                                      const GALGAS_lstring & inOperand3,
                                                                      const GALGAS_location & inOperand4
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_midrange_5F_interruptDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::setter_append (const GALGAS_location inOperand0,
                                                                const GALGAS_midrange_5F_instructionList inOperand1,
                                                                const GALGAS_lstring inOperand2,
                                                                const GALGAS_lstring inOperand3,
                                                                const GALGAS_location inOperand4,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_midrange_5F_interruptDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::setter_insertAtIndex (const GALGAS_location inOperand0,
                                                                       const GALGAS_midrange_5F_instructionList inOperand1,
                                                                       const GALGAS_lstring inOperand2,
                                                                       const GALGAS_lstring inOperand3,
                                                                       const GALGAS_location inOperand4,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_midrange_5F_interruptDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_midrange_5F_interruptDefinitionList::setter_removeAtIndex (GALGAS_location & outOperand0,
                                                                       GALGAS_midrange_5F_instructionList & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       GALGAS_lstring & outOperand3,
                                                                       GALGAS_location & outOperand4,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
        outOperand0 = p->mObject.mProperty_mInterruptLocation ;
        outOperand1 = p->mObject.mProperty_mInstructionList ;
        outOperand2 = p->mObject.mProperty_mFirstSaveRegister ;
        outOperand3 = p->mObject.mProperty_mSecondSaveRegister ;
        outOperand4 = p->mObject.mProperty_mEndOfInterruptLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::setter_popFirst (GALGAS_location & outOperand0,
                                                                  GALGAS_midrange_5F_instructionList & outOperand1,
                                                                  GALGAS_lstring & outOperand2,
                                                                  GALGAS_lstring & outOperand3,
                                                                  GALGAS_location & outOperand4,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mInterruptLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mFirstSaveRegister ;
    outOperand3 = p->mObject.mProperty_mSecondSaveRegister ;
    outOperand4 = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::setter_popLast (GALGAS_location & outOperand0,
                                                                 GALGAS_midrange_5F_instructionList & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_lstring & outOperand3,
                                                                 GALGAS_location & outOperand4,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mInterruptLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mFirstSaveRegister ;
    outOperand3 = p->mObject.mProperty_mSecondSaveRegister ;
    outOperand4 = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::method_first (GALGAS_location & outOperand0,
                                                               GALGAS_midrange_5F_instructionList & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               GALGAS_lstring & outOperand3,
                                                               GALGAS_location & outOperand4,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mInterruptLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mFirstSaveRegister ;
    outOperand3 = p->mObject.mProperty_mSecondSaveRegister ;
    outOperand4 = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::method_last (GALGAS_location & outOperand0,
                                                              GALGAS_midrange_5F_instructionList & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_lstring & outOperand3,
                                                              GALGAS_location & outOperand4,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mInterruptLocation ;
    outOperand1 = p->mObject.mProperty_mInstructionList ;
    outOperand2 = p->mObject.mProperty_mFirstSaveRegister ;
    outOperand3 = p->mObject.mProperty_mSecondSaveRegister ;
    outOperand4 = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList GALGAS_midrange_5F_interruptDefinitionList::add_operation (const GALGAS_midrange_5F_interruptDefinitionList & inOperand,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_interruptDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList GALGAS_midrange_5F_interruptDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_interruptDefinitionList result = GALGAS_midrange_5F_interruptDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList GALGAS_midrange_5F_interruptDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_interruptDefinitionList result = GALGAS_midrange_5F_interruptDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList GALGAS_midrange_5F_interruptDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_interruptDefinitionList result = GALGAS_midrange_5F_interruptDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::plusAssign_operation (const GALGAS_midrange_5F_interruptDefinitionList inOperand,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::setter_setMInterruptLocationAtIndex (GALGAS_location inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInterruptLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_interruptDefinitionList::getter_mInterruptLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    result = p->mObject.mProperty_mInterruptLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::setter_setMInstructionListAtIndex (GALGAS_midrange_5F_instructionList inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_interruptDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) attributes.ptr () ;
  GALGAS_midrange_5F_instructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::setter_setMFirstSaveRegisterAtIndex (GALGAS_lstring inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFirstSaveRegister = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_interruptDefinitionList::getter_mFirstSaveRegisterAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    result = p->mObject.mProperty_mFirstSaveRegister ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::setter_setMSecondSaveRegisterAtIndex (GALGAS_lstring inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSecondSaveRegister = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_interruptDefinitionList::getter_mSecondSaveRegisterAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    result = p->mObject.mProperty_mSecondSaveRegister ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_interruptDefinitionList::setter_setMEndOfInterruptLocationAtIndex (GALGAS_location inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInterruptLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_interruptDefinitionList::getter_mEndOfInterruptLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_interruptDefinitionList * p = (cCollectionElement_midrange_5F_interruptDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
    result = p->mObject.mProperty_mEndOfInterruptLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_midrange_5F_interruptDefinitionList::cEnumerator_midrange_5F_interruptDefinitionList (const GALGAS_midrange_5F_interruptDefinitionList & inEnumeratedObject,
                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList_2D_element cEnumerator_midrange_5F_interruptDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_interruptDefinitionList * p = (const cCollectionElement_midrange_5F_interruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_midrange_5F_interruptDefinitionList::current_mInterruptLocation (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_interruptDefinitionList * p = (const cCollectionElement_midrange_5F_interruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
  return p->mObject.mProperty_mInterruptLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList cEnumerator_midrange_5F_interruptDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_interruptDefinitionList * p = (const cCollectionElement_midrange_5F_interruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_midrange_5F_interruptDefinitionList::current_mFirstSaveRegister (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_interruptDefinitionList * p = (const cCollectionElement_midrange_5F_interruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
  return p->mObject.mProperty_mFirstSaveRegister ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_midrange_5F_interruptDefinitionList::current_mSecondSaveRegister (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_interruptDefinitionList * p = (const cCollectionElement_midrange_5F_interruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
  return p->mObject.mProperty_mSecondSaveRegister ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_midrange_5F_interruptDefinitionList::current_mEndOfInterruptLocation (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_interruptDefinitionList * p = (const cCollectionElement_midrange_5F_interruptDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_interruptDefinitionList) ;
  return p->mObject.mProperty_mEndOfInterruptLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @midrange_interruptDefinitionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList ("midrange_interruptDefinitionList",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_interruptDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_interruptDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_interruptDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_interruptDefinitionList GALGAS_midrange_5F_interruptDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_interruptDefinitionList result ;
  const GALGAS_midrange_5F_interruptDefinitionList * p = (const GALGAS_midrange_5F_interruptDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_interruptDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_interruptDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@midrange_5F_routineDefinitionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_midrange_5F_routineDefinitionList : public cCollectionElement {
  public: GALGAS_midrange_5F_routineDefinitionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_midrange_5F_routineDefinitionList (const GALGAS_lstring & in_mRoutineName,
                                                                const GALGAS_luint & in_mPage,
                                                                const GALGAS_luint & in_mRequiredBank,
                                                                const GALGAS_luint & in_mReturnedBank,
                                                                const GALGAS_bool & in_mPreservesBank,
                                                                const GALGAS_bool & in_mIsNoReturn,
                                                                const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                const GALGAS_location & in_mEndOfRoutineLocation
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_midrange_5F_routineDefinitionList (const GALGAS_midrange_5F_routineDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_routineDefinitionList::cCollectionElement_midrange_5F_routineDefinitionList (const GALGAS_lstring & in_mRoutineName,
                                                                                                            const GALGAS_luint & in_mPage,
                                                                                                            const GALGAS_luint & in_mRequiredBank,
                                                                                                            const GALGAS_luint & in_mReturnedBank,
                                                                                                            const GALGAS_bool & in_mPreservesBank,
                                                                                                            const GALGAS_bool & in_mIsNoReturn,
                                                                                                            const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                            const GALGAS_location & in_mEndOfRoutineLocation
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mPage, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_routineDefinitionList::cCollectionElement_midrange_5F_routineDefinitionList (const GALGAS_midrange_5F_routineDefinitionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mPage, inElement.mProperty_mRequiredBank, inElement.mProperty_mReturnedBank, inElement.mProperty_mPreservesBank, inElement.mProperty_mIsNoReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_midrange_5F_routineDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_midrange_5F_routineDefinitionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_midrange_5F_routineDefinitionList (mObject.mProperty_mRoutineName, mObject.mProperty_mPage, mObject.mProperty_mRequiredBank, mObject.mProperty_mReturnedBank, mObject.mProperty_mPreservesBank, mObject.mProperty_mIsNoReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_midrange_5F_routineDefinitionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRoutineName" ":") ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPage" ":") ;
  mObject.mProperty_mPage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRequiredBank" ":") ;
  mObject.mProperty_mRequiredBank.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReturnedBank" ":") ;
  mObject.mProperty_mReturnedBank.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPreservesBank" ":") ;
  mObject.mProperty_mPreservesBank.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsNoReturn" ":") ;
  mObject.mProperty_mIsNoReturn.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfRoutineLocation" ":") ;
  mObject.mProperty_mEndOfRoutineLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList::GALGAS_midrange_5F_routineDefinitionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList::GALGAS_midrange_5F_routineDefinitionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList GALGAS_midrange_5F_routineDefinitionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_routineDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList GALGAS_midrange_5F_routineDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_routineDefinitionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::enterElement (const GALGAS_midrange_5F_routineDefinitionList_2D_element & inValue,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_routineDefinitionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList GALGAS_midrange_5F_routineDefinitionList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                             const GALGAS_luint & inOperand1,
                                                                                                             const GALGAS_luint & inOperand2,
                                                                                                             const GALGAS_luint & inOperand3,
                                                                                                             const GALGAS_bool & inOperand4,
                                                                                                             const GALGAS_bool & inOperand5,
                                                                                                             const GALGAS_midrange_5F_instructionList & inOperand6,
                                                                                                             const GALGAS_location & inOperand7
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_routineDefinitionList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_midrange_5F_routineDefinitionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_midrange_5F_routineDefinitionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mRoutineName,
                                                                          const GALGAS_luint & in_mPage,
                                                                          const GALGAS_luint & in_mRequiredBank,
                                                                          const GALGAS_luint & in_mReturnedBank,
                                                                          const GALGAS_bool & in_mPreservesBank,
                                                                          const GALGAS_bool & in_mIsNoReturn,
                                                                          const GALGAS_midrange_5F_instructionList & in_mInstructionList,
                                                                          const GALGAS_location & in_mEndOfRoutineLocation
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_routineDefinitionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_routineDefinitionList (in_mRoutineName,
                                                                       in_mPage,
                                                                       in_mRequiredBank,
                                                                       in_mReturnedBank,
                                                                       in_mPreservesBank,
                                                                       in_mIsNoReturn,
                                                                       in_mInstructionList,
                                                                       in_mEndOfRoutineLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_luint & inOperand1,
                                                                    const GALGAS_luint & inOperand2,
                                                                    const GALGAS_luint & inOperand3,
                                                                    const GALGAS_bool & inOperand4,
                                                                    const GALGAS_bool & inOperand5,
                                                                    const GALGAS_midrange_5F_instructionList & inOperand6,
                                                                    const GALGAS_location & inOperand7
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_midrange_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_append (const GALGAS_lstring inOperand0,
                                                              const GALGAS_luint inOperand1,
                                                              const GALGAS_luint inOperand2,
                                                              const GALGAS_luint inOperand3,
                                                              const GALGAS_bool inOperand4,
                                                              const GALGAS_bool inOperand5,
                                                              const GALGAS_midrange_5F_instructionList inOperand6,
                                                              const GALGAS_location inOperand7,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_midrange_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_luint inOperand1,
                                                                     const GALGAS_luint inOperand2,
                                                                     const GALGAS_luint inOperand3,
                                                                     const GALGAS_bool inOperand4,
                                                                     const GALGAS_bool inOperand5,
                                                                     const GALGAS_midrange_5F_instructionList inOperand6,
                                                                     const GALGAS_location inOperand7,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_midrange_5F_routineDefinitionList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
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

void GALGAS_midrange_5F_routineDefinitionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_luint & outOperand1,
                                                                     GALGAS_luint & outOperand2,
                                                                     GALGAS_luint & outOperand3,
                                                                     GALGAS_bool & outOperand4,
                                                                     GALGAS_bool & outOperand5,
                                                                     GALGAS_midrange_5F_instructionList & outOperand6,
                                                                     GALGAS_location & outOperand7,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
        outOperand0 = p->mObject.mProperty_mRoutineName ;
        outOperand1 = p->mObject.mProperty_mPage ;
        outOperand2 = p->mObject.mProperty_mRequiredBank ;
        outOperand3 = p->mObject.mProperty_mReturnedBank ;
        outOperand4 = p->mObject.mProperty_mPreservesBank ;
        outOperand5 = p->mObject.mProperty_mIsNoReturn ;
        outOperand6 = p->mObject.mProperty_mInstructionList ;
        outOperand7 = p->mObject.mProperty_mEndOfRoutineLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_luint & outOperand1,
                                                                GALGAS_luint & outOperand2,
                                                                GALGAS_luint & outOperand3,
                                                                GALGAS_bool & outOperand4,
                                                                GALGAS_bool & outOperand5,
                                                                GALGAS_midrange_5F_instructionList & outOperand6,
                                                                GALGAS_location & outOperand7,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mRequiredBank ;
    outOperand3 = p->mObject.mProperty_mReturnedBank ;
    outOperand4 = p->mObject.mProperty_mPreservesBank ;
    outOperand5 = p->mObject.mProperty_mIsNoReturn ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_luint & outOperand1,
                                                               GALGAS_luint & outOperand2,
                                                               GALGAS_luint & outOperand3,
                                                               GALGAS_bool & outOperand4,
                                                               GALGAS_bool & outOperand5,
                                                               GALGAS_midrange_5F_instructionList & outOperand6,
                                                               GALGAS_location & outOperand7,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mRequiredBank ;
    outOperand3 = p->mObject.mProperty_mReturnedBank ;
    outOperand4 = p->mObject.mProperty_mPreservesBank ;
    outOperand5 = p->mObject.mProperty_mIsNoReturn ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_luint & outOperand1,
                                                             GALGAS_luint & outOperand2,
                                                             GALGAS_luint & outOperand3,
                                                             GALGAS_bool & outOperand4,
                                                             GALGAS_bool & outOperand5,
                                                             GALGAS_midrange_5F_instructionList & outOperand6,
                                                             GALGAS_location & outOperand7,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mRequiredBank ;
    outOperand3 = p->mObject.mProperty_mReturnedBank ;
    outOperand4 = p->mObject.mProperty_mPreservesBank ;
    outOperand5 = p->mObject.mProperty_mIsNoReturn ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_luint & outOperand1,
                                                            GALGAS_luint & outOperand2,
                                                            GALGAS_luint & outOperand3,
                                                            GALGAS_bool & outOperand4,
                                                            GALGAS_bool & outOperand5,
                                                            GALGAS_midrange_5F_instructionList & outOperand6,
                                                            GALGAS_location & outOperand7,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mPage ;
    outOperand2 = p->mObject.mProperty_mRequiredBank ;
    outOperand3 = p->mObject.mProperty_mReturnedBank ;
    outOperand4 = p->mObject.mProperty_mPreservesBank ;
    outOperand5 = p->mObject.mProperty_mIsNoReturn ;
    outOperand6 = p->mObject.mProperty_mInstructionList ;
    outOperand7 = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList GALGAS_midrange_5F_routineDefinitionList::add_operation (const GALGAS_midrange_5F_routineDefinitionList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_routineDefinitionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList GALGAS_midrange_5F_routineDefinitionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_routineDefinitionList result = GALGAS_midrange_5F_routineDefinitionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList GALGAS_midrange_5F_routineDefinitionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_routineDefinitionList result = GALGAS_midrange_5F_routineDefinitionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList GALGAS_midrange_5F_routineDefinitionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_routineDefinitionList result = GALGAS_midrange_5F_routineDefinitionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::plusAssign_operation (const GALGAS_midrange_5F_routineDefinitionList inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_setMRoutineNameAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_midrange_5F_routineDefinitionList::getter_mRoutineNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_setMPageAtIndex (GALGAS_luint inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_midrange_5F_routineDefinitionList::getter_mPageAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mPage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_setMRequiredBankAtIndex (GALGAS_luint inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRequiredBank = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_midrange_5F_routineDefinitionList::getter_mRequiredBankAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mRequiredBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_setMReturnedBankAtIndex (GALGAS_luint inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReturnedBank = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_midrange_5F_routineDefinitionList::getter_mReturnedBankAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_luint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mReturnedBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_setMPreservesBankAtIndex (GALGAS_bool inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPreservesBank = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_routineDefinitionList::getter_mPreservesBankAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mPreservesBank ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_setMIsNoReturnAtIndex (GALGAS_bool inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsNoReturn = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_midrange_5F_routineDefinitionList::getter_mIsNoReturnAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mIsNoReturn ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_setMInstructionListAtIndex (GALGAS_midrange_5F_instructionList inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList GALGAS_midrange_5F_routineDefinitionList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_midrange_5F_instructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_routineDefinitionList::setter_setMEndOfRoutineLocationAtIndex (GALGAS_location inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfRoutineLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_midrange_5F_routineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_routineDefinitionList * p = (cCollectionElement_midrange_5F_routineDefinitionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
    result = p->mObject.mProperty_mEndOfRoutineLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_midrange_5F_routineDefinitionList::cEnumerator_midrange_5F_routineDefinitionList (const GALGAS_midrange_5F_routineDefinitionList & inEnumeratedObject,
                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList_2D_element cEnumerator_midrange_5F_routineDefinitionList::current (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_routineDefinitionList * p = (const cCollectionElement_midrange_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_midrange_5F_routineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_routineDefinitionList * p = (const cCollectionElement_midrange_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_midrange_5F_routineDefinitionList::current_mPage (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_routineDefinitionList * p = (const cCollectionElement_midrange_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mPage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_midrange_5F_routineDefinitionList::current_mRequiredBank (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_routineDefinitionList * p = (const cCollectionElement_midrange_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint cEnumerator_midrange_5F_routineDefinitionList::current_mReturnedBank (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_routineDefinitionList * p = (const cCollectionElement_midrange_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_midrange_5F_routineDefinitionList::current_mPreservesBank (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_routineDefinitionList * p = (const cCollectionElement_midrange_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_midrange_5F_routineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_routineDefinitionList * p = (const cCollectionElement_midrange_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_instructionList cEnumerator_midrange_5F_routineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_routineDefinitionList * p = (const cCollectionElement_midrange_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_midrange_5F_routineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_routineDefinitionList * p = (const cCollectionElement_midrange_5F_routineDefinitionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_routineDefinitionList) ;
  return p->mObject.mProperty_mEndOfRoutineLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @midrange_routineDefinitionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList ("midrange_routineDefinitionList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_routineDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_routineDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_routineDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_routineDefinitionList GALGAS_midrange_5F_routineDefinitionList::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_routineDefinitionList result ;
  const GALGAS_midrange_5F_routineDefinitionList * p = (const GALGAS_midrange_5F_routineDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_routineDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_routineDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression::GALGAS_midrange_5F_intermediate_5F_registerExpression (void) :
mProperty_mAssemblyString (),
mProperty_mRegisterAddress () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression::~ GALGAS_midrange_5F_intermediate_5F_registerExpression (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_registerExpression::init_21__21_ (const GALGAS_string & in_mAssemblyString,
                                                                                                                           const GALGAS_uint & in_mRegisterAddress,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_registerExpression::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression::GALGAS_midrange_5F_intermediate_5F_registerExpression (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_uint & inOperand1) :
mProperty_mAssemblyString (inOperand0),
mProperty_mRegisterAddress (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_registerExpression::class_func_new (const GALGAS_string & in_mAssemblyString,
                                                                                                                             const GALGAS_uint & in_mRegisterAddress,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyString = in_mAssemblyString ;
  result.mProperty_mRegisterAddress = in_mRegisterAddress ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_midrange_5F_intermediate_5F_registerExpression::isValid (void) const {
  return mProperty_mAssemblyString.isValid () && mProperty_mRegisterAddress.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_registerExpression::drop (void) {
  mProperty_mAssemblyString.drop () ;
  mProperty_mRegisterAddress.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_registerExpression::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_intermediate_registerExpression:") ;
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
//
//     @midrange_intermediate_registerExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ("midrange_intermediate_registerExpression",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_registerExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_registerExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_registerExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_registerExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_registerExpression GALGAS_midrange_5F_intermediate_5F_registerExpression::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression result ;
  const GALGAS_midrange_5F_intermediate_5F_registerExpression * p = (const GALGAS_midrange_5F_intermediate_5F_registerExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_registerExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_registerExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_intermediate_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction::cPtr_midrange_5F_intermediate_5F_instruction (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction::GALGAS_midrange_5F_intermediate_5F_instruction (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction::GALGAS_midrange_5F_intermediate_5F_instruction (const cPtr_midrange_5F_intermediate_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_intermediate_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_intermediate_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_intermediate_5F_instruction::cPtr_midrange_5F_intermediate_5F_instruction (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ("midrange_intermediate_instruction",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction GALGAS_midrange_5F_intermediate_5F_instruction::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction * p = (const GALGAS_midrange_5F_intermediate_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak::objectCompare (const GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak & inOperand) const {
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

GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak & GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak::operator = (const GALGAS_midrange_5F_intermediate_5F_instruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak::GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak (const GALGAS_midrange_5F_intermediate_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak::bang_midrange_5F_intermediate_5F_instruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_intermediate_5F_instruction) ;
      result = GALGAS_midrange_5F_intermediate_5F_instruction ((cPtr_midrange_5F_intermediate_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak ("midrange_intermediate_instruction-weak",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak result ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak * p = (const GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@midrange_5F_intermediate_5F_instructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_midrange_5F_intermediate_5F_instructionList : public cCollectionElement {
  public: GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_midrange_5F_intermediate_5F_instructionList (const GALGAS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_midrange_5F_intermediate_5F_instructionList (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_intermediate_5F_instructionList::cCollectionElement_midrange_5F_intermediate_5F_instructionList (const GALGAS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_midrange_5F_intermediate_5F_instructionList::cCollectionElement_midrange_5F_intermediate_5F_instructionList (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_midrange_5F_intermediate_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_midrange_5F_intermediate_5F_instructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_midrange_5F_intermediate_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_midrange_5F_intermediate_5F_instructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList::GALGAS_midrange_5F_intermediate_5F_instructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList::GALGAS_midrange_5F_intermediate_5F_instructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList GALGAS_midrange_5F_intermediate_5F_instructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList GALGAS_midrange_5F_intermediate_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_midrange_5F_intermediate_5F_instructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList::enterElement (const GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element & inValue,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList GALGAS_midrange_5F_intermediate_5F_instructionList::class_func_listWithValue (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_midrange_5F_intermediate_5F_instructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_midrange_5F_intermediate_5F_instructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                    const GALGAS_midrange_5F_intermediate_5F_instruction & in_mInstruction
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList::addAssign_operation (const GALGAS_midrange_5F_intermediate_5F_instruction & inOperand0
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList::setter_append (const GALGAS_midrange_5F_intermediate_5F_instruction inOperand0,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList::setter_insertAtIndex (const GALGAS_midrange_5F_intermediate_5F_instruction inOperand0,
                                                                               const GALGAS_uint inInsertionIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_midrange_5F_intermediate_5F_instructionList::setter_removeAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction & outOperand0,
                                                                               const GALGAS_uint inRemoveIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = (cCollectionElement_midrange_5F_intermediate_5F_instructionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
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

void GALGAS_midrange_5F_intermediate_5F_instructionList::setter_popFirst (GALGAS_midrange_5F_intermediate_5F_instruction & outOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = (cCollectionElement_midrange_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList::setter_popLast (GALGAS_midrange_5F_intermediate_5F_instruction & outOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = (cCollectionElement_midrange_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList::method_first (GALGAS_midrange_5F_intermediate_5F_instruction & outOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = (cCollectionElement_midrange_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList::method_last (GALGAS_midrange_5F_intermediate_5F_instruction & outOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = (cCollectionElement_midrange_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList GALGAS_midrange_5F_intermediate_5F_instructionList::add_operation (const GALGAS_midrange_5F_intermediate_5F_instructionList & inOperand,
                                                                                                                      Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList GALGAS_midrange_5F_intermediate_5F_instructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instructionList result = GALGAS_midrange_5F_intermediate_5F_instructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList GALGAS_midrange_5F_intermediate_5F_instructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instructionList result = GALGAS_midrange_5F_intermediate_5F_instructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList GALGAS_midrange_5F_intermediate_5F_instructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_midrange_5F_intermediate_5F_instructionList result = GALGAS_midrange_5F_intermediate_5F_instructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList::plusAssign_operation (const GALGAS_midrange_5F_intermediate_5F_instructionList inOperand,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_midrange_5F_intermediate_5F_instructionList::setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_instruction inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = (cCollectionElement_midrange_5F_intermediate_5F_instructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction GALGAS_midrange_5F_intermediate_5F_instructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = (cCollectionElement_midrange_5F_intermediate_5F_instructionList *) attributes.ptr () ;
  GALGAS_midrange_5F_intermediate_5F_instruction result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_midrange_5F_intermediate_5F_instructionList::cEnumerator_midrange_5F_intermediate_5F_instructionList (const GALGAS_midrange_5F_intermediate_5F_instructionList & inEnumeratedObject,
                                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList_2D_element cEnumerator_midrange_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = (const cCollectionElement_midrange_5F_intermediate_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instruction cEnumerator_midrange_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_midrange_5F_intermediate_5F_instructionList * p = (const cCollectionElement_midrange_5F_intermediate_5F_instructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_midrange_5F_intermediate_5F_instructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @midrange_intermediate_instructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList ("midrange_intermediate_instructionList",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_midrange_5F_intermediate_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_midrange_5F_intermediate_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_midrange_5F_intermediate_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_midrange_5F_intermediate_5F_instructionList GALGAS_midrange_5F_intermediate_5F_instructionList::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_instructionList result ;
  const GALGAS_midrange_5F_intermediate_5F_instructionList * p = (const GALGAS_midrange_5F_intermediate_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_midrange_5F_intermediate_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

