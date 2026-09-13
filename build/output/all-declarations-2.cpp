#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ComputedRETLWTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum conditional_branch
//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch::GGS_conditional_5F_branch (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bz (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bz ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bnz (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bnz ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bn (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bnn (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bnn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bc (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bc ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bnc (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bnc ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bov (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bov ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::class_func_bnov (UNUSED_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  result.mEnum = Enumeration::enum_bnov ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_conditional_5F_branch [9] = {
  "(not built)",
  "bz",
  "bnz",
  "bn",
  "bnn",
  "bc",
  "bnc",
  "bov",
  "bnov"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBz (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bz == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBnz (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bnz == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBn (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bn == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBnn (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bnn == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBc (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBnc (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bnc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBov (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bov == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_conditional_5F_branch::getter_isBnov (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bnov == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_conditional_5F_branch::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @conditional_branch: ") ;
  ioString.appendCString (gEnumNameArrayFor_conditional_5F_branch [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_conditional_5F_branch::objectCompare (const GGS_conditional_5F_branch & inOperand) const {
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
//     @conditional_branch generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_conditional_5F_branch ("conditional_branch",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_conditional_5F_branch::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_conditional_5F_branch ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_conditional_5F_branch::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_conditional_5F_branch (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_conditional_5F_branch GGS_conditional_5F_branch::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_conditional_5F_branch result ;
  const GGS_conditional_5F_branch * p = (const GGS_conditional_5F_branch *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_conditional_5F_branch *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("conditional_branch", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ConditionalJumpTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38_ComputedBraTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_ComputedBraTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38_AbstractConditionTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_AbstractConditionTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak::objectCompare (const GGS_ipic_31__38_IncDecRegisterTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_pic_31__38_TestRegisterTerminator_2E_weak::objectCompare (const GGS_pic_31__38_TestRegisterTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_pic_31__38_BitTestTerminator_2E_weak::objectCompare (const GGS_pic_31__38_BitTestTerminator_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum pic18InstructionWithNoOperandKind
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind::GGS_pic_31__38_InstructionWithNoOperandKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_CLRWDT (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_CLRWDT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_DAW (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_DAW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_NOP (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_NOP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_POP (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_POP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_PUSH (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_PUSH ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_RESET (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_RESET ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::class_func_SLEEP (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  result.mEnum = Enumeration::enum_SLEEP ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_pic_31__38_InstructionWithNoOperandKind [8] = {
  "(not built)",
  "CLRWDT",
  "DAW",
  "NOP",
  "POP",
  "PUSH",
  "RESET",
  "SLEEP"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isCLRWDT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CLRWDT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isDAW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DAW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isNOP (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_NOP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isPOP (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_POP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isPUSH (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_PUSH == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isRESET (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RESET == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_InstructionWithNoOperandKind::getter_isSLEEP (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SLEEP == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InstructionWithNoOperandKind::description (String & ioString,
                                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @pic18InstructionWithNoOperandKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_pic_31__38_InstructionWithNoOperandKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18InstructionWithNoOperandKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ("pic18InstructionWithNoOperandKind",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_InstructionWithNoOperandKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_InstructionWithNoOperandKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_InstructionWithNoOperandKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_InstructionWithNoOperandKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_InstructionWithNoOperandKind::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionWithNoOperandKind result ;
  const GGS_pic_31__38_InstructionWithNoOperandKind * p = (const GGS_pic_31__38_InstructionWithNoOperandKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_InstructionWithNoOperandKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18InstructionWithNoOperandKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38_InstructionWithNoOperand_2E_weak::objectCompare (const GGS_ipic_31__38_InstructionWithNoOperand_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum pic18Instruction_FDA_base_code_AST
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_ADDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_ADDWFC ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ANDWF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_ANDWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_COMF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_COMF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_DECF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_DECF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_INCF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_INCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_IORWF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_IORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_MOVF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_MOVF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLCF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_RLCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RLNCF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_RLNCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRCF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_RRCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_RRNCF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_RRNCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBFWB (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_SUBFWB ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_SUBWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SUBWFB (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_SUBWFB ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_SWAPF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_SWAPF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_XORWF (UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  result.mEnum = Enumeration::enum_XORWF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST [18] = {
  "(not built)",
  "ADDWF",
  "ADDWFC",
  "ANDWF",
  "COMF",
  "DECF",
  "INCF",
  "IORWF",
  "MOVF",
  "RLCF",
  "RLNCF",
  "RRCF",
  "RRNCF",
  "SUBFWB",
  "SUBWF",
  "SUBWFB",
  "SWAPF",
  "XORWF"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isADDWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ADDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isADDWFC (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ADDWFC == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isANDWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ANDWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isCOMF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_COMF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isDECF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DECF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isINCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isIORWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_IORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isMOVF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRLCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RLCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRLNCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RLNCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRRCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RRCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isRRNCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_RRNCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSUBFWB (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBFWB == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSUBWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSUBWFB (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBWFB == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isSWAPF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SWAPF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::getter_isXORWF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_XORWF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::description (String & ioString,
                                                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @pic18Instruction_FDA_base_code_AST: ") ;
  ioString.appendCString (gEnumNameArrayFor_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::objectCompare (const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST & inOperand) const {
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
//     @pic18Instruction_FDA_base_code_AST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ("pic18Instruction_FDA_base_code_AST",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST result ;
  const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST * p = (const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FDA_base_code_AST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum literal_instruction_opcode
//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode::GGS_literal_5F_instruction_5F_opcode (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_ADDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_ANDLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_ANDLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_IORLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_IORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_MOVLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_MULLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_MULLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_SUBLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_SUBLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::class_func_XORLW (UNUSED_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  result.mEnum = Enumeration::enum_XORLW ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_literal_5F_instruction_5F_opcode [8] = {
  "(not built)",
  "ADDLW",
  "ANDLW",
  "IORLW",
  "MOVLW",
  "MULLW",
  "SUBLW",
  "XORLW"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isADDLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ADDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isANDLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_ANDLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isIORLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_IORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isMOVLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MOVLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isMULLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_MULLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isSUBLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_SUBLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_literal_5F_instruction_5F_opcode::getter_isXORLW (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_XORLW == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_literal_5F_instruction_5F_opcode::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @literal_instruction_opcode: ") ;
  ioString.appendCString (gEnumNameArrayFor_literal_5F_instruction_5F_opcode [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literal_5F_instruction_5F_opcode::objectCompare (const GGS_literal_5F_instruction_5F_opcode & inOperand) const {
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
//     @literal_instruction_opcode generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ("literal_instruction_opcode",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literal_5F_instruction_5F_opcode::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literal_5F_instruction_5F_opcode ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literal_5F_instruction_5F_opcode::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literal_5F_instruction_5F_opcode (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_literal_5F_instruction_5F_opcode::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_literal_5F_instruction_5F_opcode result ;
  const GGS_literal_5F_instruction_5F_opcode * p = (const GGS_literal_5F_instruction_5F_opcode *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literal_5F_instruction_5F_opcode *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literal_instruction_opcode", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum bit_oriented_op
//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op::GGS_bit_5F_oriented_5F_op (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op GGS_bit_5F_oriented_5F_op::class_func_BCF (UNUSED_LOCATION_ARGS) {
  GGS_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BCF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op GGS_bit_5F_oriented_5F_op::class_func_BSF (UNUSED_LOCATION_ARGS) {
  GGS_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BSF ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op GGS_bit_5F_oriented_5F_op::class_func_BTG (UNUSED_LOCATION_ARGS) {
  GGS_bit_5F_oriented_5F_op result ;
  result.mEnum = Enumeration::enum_BTG ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_bit_5F_oriented_5F_op [4] = {
  "(not built)",
  "BCF",
  "BSF",
  "BTG"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bit_5F_oriented_5F_op::getter_isBCF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BCF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bit_5F_oriented_5F_op::getter_isBSF (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BSF == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bit_5F_oriented_5F_op::getter_isBTG (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_BTG == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bit_5F_oriented_5F_op::description (String & ioString,
                                             const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @bit_oriented_op: ") ;
  ioString.appendCString (gEnumNameArrayFor_bit_5F_oriented_5F_op [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @bit_oriented_op generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ("bit_oriented_op",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bit_5F_oriented_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bit_5F_oriented_5F_op ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bit_5F_oriented_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bit_5F_oriented_5F_op (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bit_5F_oriented_5F_op GGS_bit_5F_oriented_5F_op::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_bit_5F_oriented_5F_op result ;
  const GGS_bit_5F_oriented_5F_op * p = (const GGS_bit_5F_oriented_5F_op *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bit_5F_oriented_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bit_oriented_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//  Enum tableAccessOption
//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption::GGS_tableAccessOption (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_tableAccessOption::class_func_simpleAccess (UNUSED_LOCATION_ARGS) {
  GGS_tableAccessOption result ;
  result.mEnum = Enumeration::enum_simpleAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_tableAccessOption::class_func_postIncrement (UNUSED_LOCATION_ARGS) {
  GGS_tableAccessOption result ;
  result.mEnum = Enumeration::enum_postIncrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_tableAccessOption::class_func_postDecrement (UNUSED_LOCATION_ARGS) {
  GGS_tableAccessOption result ;
  result.mEnum = Enumeration::enum_postDecrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_tableAccessOption::class_func_preIncrement (UNUSED_LOCATION_ARGS) {
  GGS_tableAccessOption result ;
  result.mEnum = Enumeration::enum_preIncrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_tableAccessOption [5] = {
  "(not built)",
  "simpleAccess",
  "postIncrement",
  "postDecrement",
  "preIncrement"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_tableAccessOption::getter_isSimpleAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_simpleAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_tableAccessOption::getter_isPostIncrement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_postIncrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_tableAccessOption::getter_isPostDecrement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_postDecrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_tableAccessOption::getter_isPreIncrement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_preIncrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableAccessOption::description (String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @tableAccessOption: ") ;
  ioString.appendCString (gEnumNameArrayFor_tableAccessOption [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @tableAccessOption generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableAccessOption ("tableAccessOption",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tableAccessOption::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableAccessOption ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tableAccessOption::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tableAccessOption (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_tableAccessOption::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_tableAccessOption result ;
  const GGS_tableAccessOption * p = (const GGS_tableAccessOption *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tableAccessOption *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableAccessOption", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak::objectCompare (const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak::objectCompare (const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak & GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::operator = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register & inSource) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_compare_register.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak ("ipic18_skip_instruction_compare_register.weak",
                                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_compare_register.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum skip_instruction_FDA_base_code
//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DECFSZ (UNUSED_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_DECFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DCFSNZ (UNUSED_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_DCFSNZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INCFSZ (UNUSED_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_INCFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INFSNZ (UNUSED_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  result.mEnum = Enumeration::enum_INFSNZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_skip_5F_instruction_5F_FDA_5F_base_5F_code [5] = {
  "(not built)",
  "DECFSZ",
  "DCFSNZ",
  "INCFSZ",
  "INFSNZ"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isDECFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DECFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isDCFSNZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_DCFSNZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isINCFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INCFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::getter_isINFSNZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_INFSNZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::description (String & ioString,
                                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @skip_instruction_FDA_base_code: ") ;
  ioString.appendCString (gEnumNameArrayFor_skip_5F_instruction_5F_FDA_5F_base_5F_code [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @skip_instruction_FDA_base_code generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ("skip_instruction_FDA_base_code",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code result ;
  const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code * p = (const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("skip_instruction_FDA_base_code", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::objectCompare (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (void) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak & GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::operator = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA & inSource) :
GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::unwrappedValue (void) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  if (isValid ()) {
    const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * p = (cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) ptr () ;
    if (nullptr != p) {
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::bang_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
      result = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA ((cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ipic18_skip_instruction_FDA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak ("ipic18_skip_instruction_FDA.weak",
                                                                                                       & kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak result ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak * p = (const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ipic18_skip_instruction_FDA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @symbolTableForBlockOptimization
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization::GGS_symbolTableForBlockOptimization (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization::~ GGS_symbolTableForBlockOptimization (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization::GGS_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization & GGS_symbolTableForBlockOptimization::operator = (const GGS_symbolTableForBlockOptimization & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForBlockOptimization::getter_hasKey (const GGS_string & inKey
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForBlockOptimization::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                    const GGS_uint & inLevel
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForBlockOptimization::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForBlockOptimization::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_symbolTableForBlockOptimization::getter_locationForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_symbolTableForBlockOptimization::getter_keyList (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForBlockOptimization::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForBlockOptimization_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::performInsert (const GGS_symbolTableForBlockOptimization_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForBlockOptimization_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>
GGS_symbolTableForBlockOptimization::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_symbolTableForBlockOptimization::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>>
GGS_symbolTableForBlockOptimization::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_symbolTableForBlockOptimization::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element_3F_ GGS_symbolTableForBlockOptimization
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForBlockOptimization_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_symbolTableForBlockOptimization_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForBlockOptimization_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mDefinitionBlockIndex = info->mProperty_mDefinitionBlockIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::class_func_mapWithMapToOverride (const GGS_symbolTableForBlockOptimization & inMapToOverride
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForBlockOptimization_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForBlockOptimization result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::setter_insertKey (GGS_lstring inLKey,
                                                            GGS_uint inArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForBlockOptimization_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::method_searchKey (GGS_lstring inLKey,
                                                            GGS_uint & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> info ;
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
    outArgument0 = info->mProperty_mDefinitionBlockIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForBlockOptimization::getter_mDefinitionBlockIndexForKey (const GGS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDefinitionBlockIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::setter_setMDefinitionBlockIndexForKey (GGS_uint inValue,
                                                                                 GGS_string inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForBlockOptimization_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDefinitionBlockIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_symbolTableForBlockOptimization_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>> & inArray,
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
    ioString.appendString ("mDefinitionBlockIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mDefinitionBlockIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForBlockOptimization::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForBlockOptimization_2E_element>> array = sortedInfoArray () ;
    GGS_symbolTableForBlockOptimization_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_symbolTableForBlockOptimization_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_symbolTableForBlockOptimization_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @symbolTableForBlockOptimization
//--------------------------------------------------------------------------------------------------

DownEnumerator_symbolTableForBlockOptimization::DownEnumerator_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element DownEnumerator_symbolTableForBlockOptimization::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_symbolTableForBlockOptimization::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_symbolTableForBlockOptimization::current_mDefinitionBlockIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefinitionBlockIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @symbolTableForBlockOptimization
//--------------------------------------------------------------------------------------------------

UpEnumerator_symbolTableForBlockOptimization::UpEnumerator_symbolTableForBlockOptimization (const GGS_symbolTableForBlockOptimization & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization_2E_element UpEnumerator_symbolTableForBlockOptimization::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_symbolTableForBlockOptimization::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_symbolTableForBlockOptimization::current_mDefinitionBlockIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefinitionBlockIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @symbolTableForBlockOptimization generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ("symbolTableForBlockOptimization",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForBlockOptimization::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForBlockOptimization ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForBlockOptimization::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForBlockOptimization (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForBlockOptimization GGS_symbolTableForBlockOptimization::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_symbolTableForBlockOptimization result ;
  const GGS_symbolTableForBlockOptimization * p = (const GGS_symbolTableForBlockOptimization *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForBlockOptimization *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForBlockOptimization", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @symbolTableForClusterOrdering
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering::GGS_symbolTableForClusterOrdering (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering::~ GGS_symbolTableForClusterOrdering (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering::GGS_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering & GGS_symbolTableForClusterOrdering::operator = (const GGS_symbolTableForClusterOrdering & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForClusterOrdering::getter_hasKey (const GGS_string & inKey
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForClusterOrdering::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                  const GGS_uint & inLevel
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForClusterOrdering::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForClusterOrdering::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_symbolTableForClusterOrdering::getter_locationForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_symbolTableForClusterOrdering::getter_keyList (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForClusterOrdering::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForClusterOrdering_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::performInsert (const GGS_symbolTableForClusterOrdering_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForClusterOrdering_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>
GGS_symbolTableForClusterOrdering::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_symbolTableForClusterOrdering::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>>
GGS_symbolTableForClusterOrdering::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_symbolTableForClusterOrdering::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element_3F_ GGS_symbolTableForClusterOrdering
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForClusterOrdering_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_symbolTableForClusterOrdering_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForClusterOrdering_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mCluster = info->mProperty_mCluster ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::class_func_mapWithMapToOverride (const GGS_symbolTableForClusterOrdering & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForClusterOrdering_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForClusterOrdering result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::setter_insertKey (GGS_lstring inLKey,
                                                          GGS_uint inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForClusterOrdering_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::method_searchKey (GGS_lstring inLKey,
                                                          GGS_uint & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> info ;
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
    outArgument0 = info->mProperty_mCluster ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForClusterOrdering::getter_mClusterForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mCluster ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::setter_setMClusterForKey (GGS_uint inValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForClusterOrdering_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mCluster = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_symbolTableForClusterOrdering_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> & inArray,
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
    ioString.appendString ("mCluster:") ;
    inArray (i COMMA_HERE)->mProperty_mCluster.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForClusterOrdering::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForClusterOrdering_2E_element>> array = sortedInfoArray () ;
    GGS_symbolTableForClusterOrdering_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_symbolTableForClusterOrdering_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_symbolTableForClusterOrdering_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @symbolTableForClusterOrdering
//--------------------------------------------------------------------------------------------------

DownEnumerator_symbolTableForClusterOrdering::DownEnumerator_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element DownEnumerator_symbolTableForClusterOrdering::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_symbolTableForClusterOrdering::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_symbolTableForClusterOrdering::current_mCluster (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCluster ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @symbolTableForClusterOrdering
//--------------------------------------------------------------------------------------------------

UpEnumerator_symbolTableForClusterOrdering::UpEnumerator_symbolTableForClusterOrdering (const GGS_symbolTableForClusterOrdering & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering_2E_element UpEnumerator_symbolTableForClusterOrdering::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_symbolTableForClusterOrdering::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_symbolTableForClusterOrdering::current_mCluster (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mCluster ;
}


//--------------------------------------------------------------------------------------------------
//     @symbolTableForClusterOrdering generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ("symbolTableForClusterOrdering",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForClusterOrdering::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForClusterOrdering ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForClusterOrdering::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForClusterOrdering (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForClusterOrdering GGS_symbolTableForClusterOrdering::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_symbolTableForClusterOrdering result ;
  const GGS_symbolTableForClusterOrdering * p = (const GGS_symbolTableForClusterOrdering *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForClusterOrdering *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForClusterOrdering", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary GGS_branchOverflowMapDictionary::builtDictionary (LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary GGS_branchOverflowMapDictionary::init (Compiler * COMMA_LOCATION_ARGS) {
  return GGS_branchOverflowMapDictionary::builtDictionary (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  if (isValid ()) {
    ioString.appendSigned (count ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_branchOverflowMapDictionary::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element_3F_ GGS_branchOverflowMapDictionary::
readSubscript__3F_ (const class GGS_string & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNotNil ()) {
      return GGS_branchOverflowMapDictionary_2E_element_3F_ (object.value ()) ;
    }else{
      return GGS_branchOverflowMapDictionary_2E_element_3F_::init_nil () ;
    }
  }else{
    return GGS_branchOverflowMapDictionary_2E_element_3F_ () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::plusPlusAssignOperation (const GGS_branchOverflowMapDictionary_2E_element & inValue
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::addAssignOperation (const GGS_string & inKey,
                                                          const GGS_stringlist & inArgument0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::setter_insert (const GGS_string inKey,
                                                     const GGS_stringlist inArgument0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_branchOverflowMapDictionary::getter_hasKey (const GGS_string & inKey
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (hasKey (inKey)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::method_searchKey (GGS_string inKey,
                                                        GGS_stringlist & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) {
    //--- Build error message
      const String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = object->mProperty_mList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::setter_removeKey (GGS_string inKey,
                                                        GGS_stringlist & outArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element> removedObject
                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;
    if (removedObject.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = removedObject->mProperty_mList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_branchOverflowMapDictionary::getter_mListForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_branchOverflowMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot get mList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = object->mProperty_mList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary::setter_setMListForKey (GGS_stringlist inPropertyValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <GenericDictionaryNode <GGS_string, GGS_branchOverflowMapDictionary_2E_element>> modifiedNode = nodeForKey (inKey) ;
    if (modifiedNode.isNil ()) { // Not found
    //--- Build error message
     const String message = "cannot setMListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      modifiedNode->mSharedInfo->mProperty_mList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @branchOverflowMapDictionary
//--------------------------------------------------------------------------------------------------

UpEnumerator_branchOverflowMapDictionary::UpEnumerator_branchOverflowMapDictionary (const GGS_branchOverflowMapDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_branchOverflowMapDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_branchOverflowMapDictionary::current_mList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_mList ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element UpEnumerator_branchOverflowMapDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @branchOverflowMapDictionary
//--------------------------------------------------------------------------------------------------

DownEnumerator_branchOverflowMapDictionary::DownEnumerator_branchOverflowMapDictionary (const GGS_branchOverflowMapDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex () {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_branchOverflowMapDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_branchOverflowMapDictionary::current_mList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_mList ;
}


//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element DownEnumerator_branchOverflowMapDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}
//--------------------------------------------------------------------------------------------------
//     @branchOverflowMapDictionary generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary ("branchOverflowMapDictionary",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_branchOverflowMapDictionary::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMapDictionary ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_branchOverflowMapDictionary::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_branchOverflowMapDictionary (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary GGS_branchOverflowMapDictionary::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary result ;
  const GGS_branchOverflowMapDictionary * p = (const GGS_branchOverflowMapDictionary *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_branchOverflowMapDictionary *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMapDictionary", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMap::GGS_branchOverflowMap (void) :
mProperty_dictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMap::GGS_branchOverflowMap (const GGS_branchOverflowMap & inSource) :
mProperty_dictionary (inSource.mProperty_dictionary) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMap & GGS_branchOverflowMap::operator = (const GGS_branchOverflowMap & inSource) {
  mProperty_dictionary = inSource.mProperty_dictionary ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_branchOverflowMap GGS_branchOverflowMap::init (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchOverflowMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_dictionary = GGS_branchOverflowMapDictionary::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMap::GGS_branchOverflowMap (const GGS_branchOverflowMapDictionary & inOperand0) :
mProperty_dictionary (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_branchOverflowMap::isValid (void) const {
  return mProperty_dictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMap::drop (void) {
  mProperty_dictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMap::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @branchOverflowMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_dictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @branchOverflowMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMap ("branchOverflowMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_branchOverflowMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_branchOverflowMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_branchOverflowMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMap GGS_branchOverflowMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMap result ;
  const GGS_branchOverflowMap * p = (const GGS_branchOverflowMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_branchOverflowMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@branchOverflowMap listForKey'
//--------------------------------------------------------------------------------------------------

GGS_stringlist extensionGetter_listForKey (const GGS_branchOverflowMap & inObject,
                                           const GGS_string & constinArgument_inKey,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringlist result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_branchOverflowMap temp_1 = inObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_branchOverflowMap temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas3", 411)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Map type @symbolTableForRelativesResolution
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution::GGS_symbolTableForRelativesResolution (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution::~ GGS_symbolTableForRelativesResolution (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution::GGS_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution & GGS_symbolTableForRelativesResolution::operator = (const GGS_symbolTableForRelativesResolution & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForRelativesResolution::getter_hasKey (const GGS_string & inKey
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_symbolTableForRelativesResolution::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                      const GGS_uint & inLevel
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForRelativesResolution::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForRelativesResolution::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_symbolTableForRelativesResolution::getter_locationForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_symbolTableForRelativesResolution::getter_keyList (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_symbolTableForRelativesResolution::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForRelativesResolution_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::performInsert (const GGS_symbolTableForRelativesResolution_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForRelativesResolution_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>
GGS_symbolTableForRelativesResolution::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_symbolTableForRelativesResolution::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>>
GGS_symbolTableForRelativesResolution::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_symbolTableForRelativesResolution::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element_3F_ GGS_symbolTableForRelativesResolution
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_symbolTableForRelativesResolution_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_symbolTableForRelativesResolution_2E_element_3F_::init_nil () ;
    }else{
      GGS_symbolTableForRelativesResolution_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mLabelAddress = info->mProperty_mLabelAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::class_func_mapWithMapToOverride (const GGS_symbolTableForRelativesResolution & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_symbolTableForRelativesResolution_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_symbolTableForRelativesResolution result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::setter_insertKey (GGS_lstring inLKey,
                                                              GGS_uint inArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_symbolTableForRelativesResolution_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' label is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::method_searchKey (GGS_lstring inLKey,
                                                              GGS_uint & outArgument0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> info ;
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
    outArgument0 = info->mProperty_mLabelAddress ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_symbolTableForRelativesResolution::getter_mLabelAddressForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mLabelAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::setter_setMLabelAddressForKey (GGS_uint inValue,
                                                                           GGS_string inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_symbolTableForRelativesResolution_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mLabelAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_symbolTableForRelativesResolution_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> & inArray,
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
    ioString.appendString ("mLabelAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mLabelAddress.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_symbolTableForRelativesResolution::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_symbolTableForRelativesResolution_2E_element>> array = sortedInfoArray () ;
    GGS_symbolTableForRelativesResolution_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_symbolTableForRelativesResolution_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_symbolTableForRelativesResolution_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @symbolTableForRelativesResolution
//--------------------------------------------------------------------------------------------------

DownEnumerator_symbolTableForRelativesResolution::DownEnumerator_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element DownEnumerator_symbolTableForRelativesResolution::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_symbolTableForRelativesResolution::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_symbolTableForRelativesResolution::current_mLabelAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelAddress ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @symbolTableForRelativesResolution
//--------------------------------------------------------------------------------------------------

UpEnumerator_symbolTableForRelativesResolution::UpEnumerator_symbolTableForRelativesResolution (const GGS_symbolTableForRelativesResolution & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution_2E_element UpEnumerator_symbolTableForRelativesResolution::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_symbolTableForRelativesResolution::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_symbolTableForRelativesResolution::current_mLabelAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mLabelAddress ;
}


//--------------------------------------------------------------------------------------------------
//     @symbolTableForRelativesResolution generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ("symbolTableForRelativesResolution",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_symbolTableForRelativesResolution::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_symbolTableForRelativesResolution::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_symbolTableForRelativesResolution (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_symbolTableForRelativesResolution GGS_symbolTableForRelativesResolution::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_symbolTableForRelativesResolution result ;
  const GGS_symbolTableForRelativesResolution * p = (const GGS_symbolTableForRelativesResolution *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_symbolTableForRelativesResolution *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("symbolTableForRelativesResolution", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@codeList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_codeList : public CollectionElementPtr {
  public: GGS_codeList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_codeList (const GGS_string & in_mAssemblyCode,
                                         const GGS_uintlist & in_mBinaryCode
                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_codeList (const GGS_codeList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_codeList::CollectionElementPtr_codeList (const GGS_string & in_mAssemblyCode,
                                                              const GGS_uintlist & in_mBinaryCode
                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mAssemblyCode, in_mBinaryCode) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_codeList::CollectionElementPtr_codeList (const GGS_codeList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mAssemblyCode, inElement.mProperty_mBinaryCode) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_codeList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_codeList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_codeList (mObject.mProperty_mAssemblyCode, mObject.mProperty_mBinaryCode COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @codeList
//--------------------------------------------------------------------------------------------------

GGS_codeList::GGS_codeList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_codeList::GGS_codeList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_codeList * p = (CollectionElementPtr_codeList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_codeList) ;
    const GGS_codeList_2E_element element (p->mObject.mProperty_mAssemblyCode, p->mObject.mProperty_mBinaryCode) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                              const GGS_string & in_mAssemblyCode,
                                              const GGS_uintlist & in_mBinaryCode
                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_codeList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_codeList (in_mAssemblyCode, in_mBinaryCode COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_codeList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_codeList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::description (String & ioString,
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
      ioString.appendString ("mAssemblyCode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAssemblyCode.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBinaryCode:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBinaryCode.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::plusPlusAssignOperation (const GGS_codeList_2E_element & inValue
                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::class_func_listWithValue (const GGS_string & inOperand0,
                                                     const GGS_uintlist & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  const GGS_codeList_2E_element element (inOperand0, inOperand1) ;
  GGS_codeList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::addAssignOperation (const GGS_string & inOperand0,
                                       const GGS_uintlist & inOperand1
                                       COMMA_LOCATION_ARGS) {
  const GGS_codeList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_append (const GGS_string inOperand0,
                                  const GGS_uintlist inOperand1,
                                  Compiler * /* inCompiler */
                                  COMMA_LOCATION_ARGS) {
  const GGS_codeList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::setter_insertAtIndex (const GGS_string inOperand0,
                                         const GGS_uintlist inOperand1,
                                         const GGS_uint inInsertionIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  const GGS_codeList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_codeList::setter_removeAtIndex (GGS_string & outOperand0,
                                         GGS_uintlist & outOperand1,
                                         const GGS_uint inRemoveIndex,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mAssemblyCode ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBinaryCode ;
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

void GGS_codeList::setter_popFirst (GGS_string & outOperand0,
                                    GGS_uintlist & outOperand1,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAssemblyCode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBinaryCode ;
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

void GGS_codeList::setter_popLast (GGS_string & outOperand0,
                                   GGS_uintlist & outOperand1,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAssemblyCode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBinaryCode ;
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

void GGS_codeList::method_first (GGS_string & outOperand0,
                                 GGS_uintlist & outOperand1,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAssemblyCode ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBinaryCode ;
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

void GGS_codeList::method_last (GGS_string & outOperand0,
                                GGS_uintlist & outOperand1,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAssemblyCode ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBinaryCode ;
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

GGS_codeList GGS_codeList::add_operation (const GGS_codeList & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_codeList result ;
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

GGS_codeList GGS_codeList::subList (const int32_t inStart,
                                    const int32_t inLength,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  GGS_codeList result ;
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

GGS_codeList GGS_codeList::getter_subListWithRange (const GGS_range & inRange,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_codeList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_codeList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::getter_subListToIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_codeList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList::plusAssignOperation (const GGS_codeList inList,
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

void GGS_codeList::setter_setMAssemblyCodeAtIndex (GGS_string inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAssemblyCode = inOperand ;
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
  
GGS_string GGS_codeList::getter_mAssemblyCodeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAssemblyCode ;
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

void GGS_codeList::setter_setMBinaryCodeAtIndex (GGS_uintlist inOperand,
                                                 GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBinaryCode = inOperand ;
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
  
GGS_uintlist GGS_codeList::getter_mBinaryCodeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_uintlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBinaryCode ;
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
// Down Enumerator for @codeList
//--------------------------------------------------------------------------------------------------

DownEnumerator_codeList::DownEnumerator_codeList (const GGS_codeList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList_2E_element DownEnumerator_codeList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_codeList::current_mAssemblyCode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAssemblyCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist DownEnumerator_codeList::current_mBinaryCode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBinaryCode ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @codeList
//--------------------------------------------------------------------------------------------------

UpEnumerator_codeList::UpEnumerator_codeList (const GGS_codeList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_codeList_2E_element UpEnumerator_codeList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_codeList::current_mAssemblyCode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAssemblyCode ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintlist UpEnumerator_codeList::current_mBinaryCode (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBinaryCode ;
}




//--------------------------------------------------------------------------------------------------
//     @codeList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_codeList ("codeList",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_codeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_codeList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_codeList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_codeList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList GGS_codeList::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_codeList result ;
  const GGS_codeList * p = (const GGS_codeList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_codeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("codeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @pic_31__38__5F_dataAddressMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::GGS_pic_31__38__5F_dataAddressMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::~ GGS_pic_31__38__5F_dataAddressMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap::GGS_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap & GGS_pic_31__38__5F_dataAddressMap::operator = (const GGS_pic_31__38__5F_dataAddressMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataAddressMap::getter_hasKey (const GGS_string & inKey
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_pic_31__38__5F_dataAddressMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                  const GGS_uint & inLevel
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataAddressMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataAddressMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38__5F_dataAddressMap::getter_locationForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_pic_31__38__5F_dataAddressMap::getter_keyList (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38__5F_dataAddressMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataAddressMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::performInsert (const GGS_pic_31__38__5F_dataAddressMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataAddressMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>
GGS_pic_31__38__5F_dataAddressMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_pic_31__38__5F_dataAddressMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>>
GGS_pic_31__38__5F_dataAddressMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_pic_31__38__5F_dataAddressMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ GGS_pic_31__38__5F_dataAddressMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_pic_31__38__5F_dataAddressMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_pic_31__38__5F_dataAddressMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mDataAddress = info->mProperty_mDataAddress ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::class_func_mapWithMapToOverride (const GGS_pic_31__38__5F_dataAddressMap & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataAddressMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38__5F_dataAddressMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::setter_insertKey (GGS_lstring inLKey,
                                                          GGS_uint inArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38__5F_dataAddressMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' data is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::method_searchKey (GGS_lstring inLKey,
                                                          GGS_uint & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info ;
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
  }else{
    outArgument0 = info->mProperty_mDataAddress ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38__5F_dataAddressMap::getter_mDataAddressForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDataAddress ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::setter_setMDataAddressForKey (GGS_uint inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_pic_31__38__5F_dataAddressMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDataAddress = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_pic_31__38__5F_dataAddressMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> & inArray,
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
    ioString.appendString ("mDataAddress:") ;
    inArray (i COMMA_HERE)->mProperty_mDataAddress.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38__5F_dataAddressMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_pic_31__38__5F_dataAddressMap_2E_element>> array = sortedInfoArray () ;
    GGS_pic_31__38__5F_dataAddressMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_pic_31__38__5F_dataAddressMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_pic_31__38__5F_dataAddressMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @pic_31__38__5F_dataAddressMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38__5F_dataAddressMap::DownEnumerator_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element DownEnumerator_pic_31__38__5F_dataAddressMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38__5F_dataAddressMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_pic_31__38__5F_dataAddressMap::current_mDataAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDataAddress ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @pic_31__38__5F_dataAddressMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38__5F_dataAddressMap::UpEnumerator_pic_31__38__5F_dataAddressMap (const GGS_pic_31__38__5F_dataAddressMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap_2E_element UpEnumerator_pic_31__38__5F_dataAddressMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38__5F_dataAddressMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_pic_31__38__5F_dataAddressMap::current_mDataAddress (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDataAddress ;
}


//--------------------------------------------------------------------------------------------------
//     @pic18_dataAddressMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ("pic18_dataAddressMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38__5F_dataAddressMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38__5F_dataAddressMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38__5F_dataAddressMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38__5F_dataAddressMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38__5F_dataAddressMap GGS_pic_31__38__5F_dataAddressMap::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38__5F_dataAddressMap result ;
  const GGS_pic_31__38__5F_dataAddressMap * p = (const GGS_pic_31__38__5F_dataAddressMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38__5F_dataAddressMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18_dataAddressMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction::objectCompare (const GGS_baseline_5F_instruction & inOperand) const {
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

GGS_baseline_5F_instruction::GGS_baseline_5F_instruction (void) :
AC_GALGAS_reference_class () {
}


void cPtr_baseline_5F_instruction::
baseline_5F_instruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction::GGS_baseline_5F_instruction (const cPtr_baseline_5F_instruction * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_instruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_instruction * p = (cPtr_baseline_5F_instruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction::cPtr_baseline_5F_instruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction::cPtr_baseline_5F_instruction (const GGS_location & in_mInstructionLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction ("baseline_instruction",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction GGS_baseline_5F_instruction::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction result ;
  const GGS_baseline_5F_instruction * p = (const GGS_baseline_5F_instruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_2E_weak::objectCompare (const GGS_baseline_5F_instruction_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_2E_weak::GGS_baseline_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_2E_weak & GGS_baseline_5F_instruction_2E_weak::operator = (const GGS_baseline_5F_instruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_2E_weak::GGS_baseline_5F_instruction_2E_weak (const GGS_baseline_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_2E_weak GGS_baseline_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction GGS_baseline_5F_instruction_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction * p = (cPtr_baseline_5F_instruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction GGS_baseline_5F_instruction_2E_weak::bang_baseline_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction) ;
      result = GGS_baseline_5F_instruction ((cPtr_baseline_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak ("baseline_instruction.weak",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_2E_weak GGS_baseline_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_2E_weak result ;
  const GGS_baseline_5F_instruction_2E_weak * p = (const GGS_baseline_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@baseline_5F_instructionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_baseline_5F_instructionList : public CollectionElementPtr {
  public: GGS_baseline_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_baseline_5F_instructionList (const GGS_baseline_5F_instruction & in_mInstruction
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_baseline_5F_instructionList (const GGS_baseline_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_baseline_5F_instructionList::CollectionElementPtr_baseline_5F_instructionList (const GGS_baseline_5F_instruction & in_mInstruction
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_baseline_5F_instructionList::CollectionElementPtr_baseline_5F_instructionList (const GGS_baseline_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_baseline_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_baseline_5F_instructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_baseline_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @baseline_5F_instructionList
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList::GGS_baseline_5F_instructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList::GGS_baseline_5F_instructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_baseline_5F_instructionList * p = (CollectionElementPtr_baseline_5F_instructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_baseline_5F_instructionList) ;
    const GGS_baseline_5F_instructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_baseline_5F_instruction & in_mInstruction
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_baseline_5F_instructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_baseline_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_instructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_baseline_5F_instructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::description (String & ioString,
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
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::plusPlusAssignOperation (const GGS_baseline_5F_instructionList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::class_func_listWithValue (const GGS_baseline_5F_instruction & inOperand0
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_instructionList_2E_element element (inOperand0) ;
  GGS_baseline_5F_instructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::addAssignOperation (const GGS_baseline_5F_instruction & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_instructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::setter_append (const GGS_baseline_5F_instruction inOperand0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_instructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::setter_insertAtIndex (const GGS_baseline_5F_instruction inOperand0,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_instructionList_2E_element newElement (inOperand0) ;
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

void GGS_baseline_5F_instructionList::setter_removeAtIndex (GGS_baseline_5F_instruction & outOperand0,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
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

void GGS_baseline_5F_instructionList::setter_popFirst (GGS_baseline_5F_instruction & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
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

void GGS_baseline_5F_instructionList::setter_popLast (GGS_baseline_5F_instruction & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
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

void GGS_baseline_5F_instructionList::method_first (GGS_baseline_5F_instruction & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
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

void GGS_baseline_5F_instructionList::method_last (GGS_baseline_5F_instruction & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
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

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::add_operation (const GGS_baseline_5F_instructionList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result ;
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

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result ;
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

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList::plusAssignOperation (const GGS_baseline_5F_instructionList inList,
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

void GGS_baseline_5F_instructionList::setter_setMInstructionAtIndex (GGS_baseline_5F_instruction inOperand,
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
  
GGS_baseline_5F_instruction GGS_baseline_5F_instructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction result ;
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
// Down Enumerator for @baseline_5F_instructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_baseline_5F_instructionList::DownEnumerator_baseline_5F_instructionList (const GGS_baseline_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList_2E_element DownEnumerator_baseline_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction DownEnumerator_baseline_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @baseline_5F_instructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_baseline_5F_instructionList::UpEnumerator_baseline_5F_instructionList (const GGS_baseline_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList_2E_element UpEnumerator_baseline_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction UpEnumerator_baseline_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @baseline_instructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList ("baseline_instructionList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instructionList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instructionList result ;
  const GGS_baseline_5F_instructionList * p = (const GGS_baseline_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FD_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_FD_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_instruction_5F_FD_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_2E_weak & GGS_baseline_5F_instruction_5F_FD_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_FD & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_instruction_5F_FD_2E_weak (const GGS_baseline_5F_instruction_5F_FD & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_instruction_5F_FD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD GGS_baseline_5F_instruction_5F_FD_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_FD result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_FD * p = (cPtr_baseline_5F_instruction_5F_FD *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_FD (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD GGS_baseline_5F_instruction_5F_FD_2E_weak::bang_baseline_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_FD) ;
      result = GGS_baseline_5F_instruction_5F_FD ((cPtr_baseline_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_FD.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_2E_weak ("baseline_instruction_FD.weak",
                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_FD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_instruction_5F_FD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FD_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_FD_2E_weak * p = (const GGS_baseline_5F_instruction_5F_FD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_F_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_F_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_instruction_5F_F_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F_2E_weak & GGS_baseline_5F_instruction_5F_F_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_F & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_instruction_5F_F_2E_weak (const GGS_baseline_5F_instruction_5F_F & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F_2E_weak GGS_baseline_5F_instruction_5F_F_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_F_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F GGS_baseline_5F_instruction_5F_F_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_F result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_F * p = (cPtr_baseline_5F_instruction_5F_F *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_F (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F GGS_baseline_5F_instruction_5F_F_2E_weak::bang_baseline_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_F) ;
      result = GGS_baseline_5F_instruction_5F_F ((cPtr_baseline_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_F.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F_2E_weak ("baseline_instruction_F.weak",
                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_F_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_F_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_F_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_F_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_F_2E_weak GGS_baseline_5F_instruction_5F_F_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_F_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_F_2E_weak * p = (const GGS_baseline_5F_instruction_5F_F_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_F_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_F.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FB_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_FB_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_instruction_5F_FB_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB_2E_weak & GGS_baseline_5F_instruction_5F_FB_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_FB & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_instruction_5F_FB_2E_weak (const GGS_baseline_5F_instruction_5F_FB & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_instruction_5F_FB_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FB_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB GGS_baseline_5F_instruction_5F_FB_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_FB result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_FB * p = (cPtr_baseline_5F_instruction_5F_FB *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_FB (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB GGS_baseline_5F_instruction_5F_FB_2E_weak::bang_baseline_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_FB) ;
      result = GGS_baseline_5F_instruction_5F_FB ((cPtr_baseline_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_FB.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB_2E_weak ("baseline_instruction_FB.weak",
                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_FB_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FB_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FB_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FB_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_instruction_5F_FB_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FB_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_FB_2E_weak * p = (const GGS_baseline_5F_instruction_5F_FB_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FB_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FB.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_CALL_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_CALL_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_CALL_2E_weak::GGS_baseline_5F_instruction_5F_CALL_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL_2E_weak & GGS_baseline_5F_instruction_5F_CALL_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_CALL & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL_2E_weak::GGS_baseline_5F_instruction_5F_CALL_2E_weak (const GGS_baseline_5F_instruction_5F_CALL & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL_2E_weak GGS_baseline_5F_instruction_5F_CALL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_CALL_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL GGS_baseline_5F_instruction_5F_CALL_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_CALL result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_CALL * p = (cPtr_baseline_5F_instruction_5F_CALL *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_CALL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL GGS_baseline_5F_instruction_5F_CALL_2E_weak::bang_baseline_5F_instruction_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_CALL) ;
      result = GGS_baseline_5F_instruction_5F_CALL ((cPtr_baseline_5F_instruction_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_CALL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2E_weak ("baseline_instruction_CALL.weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_CALL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_CALL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_CALL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_CALL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_CALL_2E_weak GGS_baseline_5F_instruction_5F_CALL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_CALL_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_CALL_2E_weak * p = (const GGS_baseline_5F_instruction_5F_CALL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_CALL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_CALL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_JSR_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_JSR_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_JSR_2E_weak::GGS_baseline_5F_instruction_5F_JSR_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR_2E_weak & GGS_baseline_5F_instruction_5F_JSR_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_JSR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR_2E_weak::GGS_baseline_5F_instruction_5F_JSR_2E_weak (const GGS_baseline_5F_instruction_5F_JSR & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR_2E_weak GGS_baseline_5F_instruction_5F_JSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR GGS_baseline_5F_instruction_5F_JSR_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_JSR result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_JSR * p = (cPtr_baseline_5F_instruction_5F_JSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_JSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR GGS_baseline_5F_instruction_5F_JSR_2E_weak::bang_baseline_5F_instruction_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_JSR) ;
      result = GGS_baseline_5F_instruction_5F_JSR ((cPtr_baseline_5F_instruction_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_JSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2E_weak ("baseline_instruction_JSR.weak",
                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_JSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_JSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_JSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JSR_2E_weak GGS_baseline_5F_instruction_5F_JSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JSR_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_JSR_2E_weak * p = (const GGS_baseline_5F_instruction_5F_JSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_JSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_GOTO_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_GOTO_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_GOTO_2E_weak::GGS_baseline_5F_instruction_5F_GOTO_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO_2E_weak & GGS_baseline_5F_instruction_5F_GOTO_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_GOTO & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO_2E_weak::GGS_baseline_5F_instruction_5F_GOTO_2E_weak (const GGS_baseline_5F_instruction_5F_GOTO & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO_2E_weak GGS_baseline_5F_instruction_5F_GOTO_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_GOTO_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO GGS_baseline_5F_instruction_5F_GOTO_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_GOTO result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_GOTO * p = (cPtr_baseline_5F_instruction_5F_GOTO *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_GOTO (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO GGS_baseline_5F_instruction_5F_GOTO_2E_weak::bang_baseline_5F_instruction_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_GOTO) ;
      result = GGS_baseline_5F_instruction_5F_GOTO ((cPtr_baseline_5F_instruction_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_GOTO.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2E_weak ("baseline_instruction_GOTO.weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_GOTO_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_GOTO_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_GOTO_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_GOTO_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_GOTO_2E_weak GGS_baseline_5F_instruction_5F_GOTO_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_GOTO_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_GOTO_2E_weak * p = (const GGS_baseline_5F_instruction_5F_GOTO_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_GOTO_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_GOTO.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_JUMP_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_JUMP_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_JUMP_2E_weak::GGS_baseline_5F_instruction_5F_JUMP_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP_2E_weak & GGS_baseline_5F_instruction_5F_JUMP_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_JUMP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP_2E_weak::GGS_baseline_5F_instruction_5F_JUMP_2E_weak (const GGS_baseline_5F_instruction_5F_JUMP & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP_2E_weak GGS_baseline_5F_instruction_5F_JUMP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JUMP_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP GGS_baseline_5F_instruction_5F_JUMP_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_JUMP result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_JUMP * p = (cPtr_baseline_5F_instruction_5F_JUMP *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_JUMP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP GGS_baseline_5F_instruction_5F_JUMP_2E_weak::bang_baseline_5F_instruction_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_JUMP) ;
      result = GGS_baseline_5F_instruction_5F_JUMP ((cPtr_baseline_5F_instruction_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_JUMP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2E_weak ("baseline_instruction_JUMP.weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_JUMP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_JUMP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_JUMP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_JUMP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_JUMP_2E_weak GGS_baseline_5F_instruction_5F_JUMP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_JUMP_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_JUMP_2E_weak * p = (const GGS_baseline_5F_instruction_5F_JUMP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_JUMP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_JUMP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::objectCompare (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inOperand) const {
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

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_WO_5F_OPERAND_init_21__21_ (in_mInstructionLocation, in_mInstruction, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::
baseline_5F_instruction_5F_WO_5F_OPERAND_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_WO_5F_OPERAND_5F_group () ;
  }else{
    cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                                                              const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_WO_OPERAND:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_WO_OPERAND generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ("baseline_instruction_WO_OPERAND",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND GGS_baseline_5F_instruction_5F_WO_5F_OPERAND::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak & GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_WO_5F_OPERAND (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::bang_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_WO_5F_OPERAND result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND) ;
      result = GGS_baseline_5F_instruction_5F_WO_5F_OPERAND ((cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_WO_OPERAND.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak ("baseline_instruction_WO_OPERAND.weak",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak * p = (const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_WO_5F_OPERAND_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_WO_OPERAND.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_TRIS_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_TRIS_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_TRIS_2E_weak::GGS_baseline_5F_instruction_5F_TRIS_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS_2E_weak & GGS_baseline_5F_instruction_5F_TRIS_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_TRIS & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS_2E_weak::GGS_baseline_5F_instruction_5F_TRIS_2E_weak (const GGS_baseline_5F_instruction_5F_TRIS & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS_2E_weak GGS_baseline_5F_instruction_5F_TRIS_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_TRIS_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS GGS_baseline_5F_instruction_5F_TRIS_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_TRIS result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_TRIS * p = (cPtr_baseline_5F_instruction_5F_TRIS *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_TRIS (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS GGS_baseline_5F_instruction_5F_TRIS_2E_weak::bang_baseline_5F_instruction_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_TRIS result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_TRIS) ;
      result = GGS_baseline_5F_instruction_5F_TRIS ((cPtr_baseline_5F_instruction_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_TRIS.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2E_weak ("baseline_instruction_TRIS.weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_TRIS_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_TRIS_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_TRIS_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_TRIS_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_TRIS_2E_weak GGS_baseline_5F_instruction_5F_TRIS_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_TRIS_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_TRIS_2E_weak * p = (const GGS_baseline_5F_instruction_5F_TRIS_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_TRIS_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_TRIS.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_literalOperation::objectCompare (const GGS_baseline_5F_instruction_5F_literalOperation & inOperand) const {
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

GGS_baseline_5F_instruction_5F_literalOperation::GGS_baseline_5F_instruction_5F_literalOperation (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation GGS_baseline_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                  const GGS_immediatExpression & in_mImmediatExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::
baseline_5F_instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                              const GGS_immediatExpression & in_mImmediatExpression,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation::GGS_baseline_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_instruction_5F_literalOperation * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_baseline_5F_instruction_5F_literalOperation::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_literalOperation::cPtr_baseline_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_literalOperation::cPtr_baseline_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                    const GGS_immediatExpression & in_mImmediatExpression,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_instruction_5F_literalOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mImmediatExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_literalOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ("baseline_instruction_literalOperation",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation GGS_baseline_5F_instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_literalOperation result ;
  const GGS_baseline_5F_instruction_5F_literalOperation * p = (const GGS_baseline_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation_2E_weak & GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_literalOperation & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_instruction_5F_literalOperation_2E_weak (const GGS_baseline_5F_instruction_5F_literalOperation & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_literalOperation result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_instruction_5F_literalOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_literalOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::bang_baseline_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_literalOperation) ;
      result = GGS_baseline_5F_instruction_5F_literalOperation ((cPtr_baseline_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_literalOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation_2E_weak ("baseline_instruction_literalOperation.weak",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_baseline_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_MNOP_2E_weak::GGS_baseline_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP_2E_weak & GGS_baseline_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_MNOP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP_2E_weak::GGS_baseline_5F_instruction_5F_MNOP_2E_weak (const GGS_baseline_5F_instruction_5F_MNOP & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP_2E_weak GGS_baseline_5F_instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP GGS_baseline_5F_instruction_5F_MNOP_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_MNOP result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_instruction_5F_MNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_MNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP GGS_baseline_5F_instruction_5F_MNOP_2E_weak::bang_baseline_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_MNOP) ;
      result = GGS_baseline_5F_instruction_5F_MNOP ((cPtr_baseline_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_MNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP_2E_weak ("baseline_instruction_MNOP.weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_MNOP_2E_weak GGS_baseline_5F_instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_MNOP_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_MNOP_2E_weak * p = (const GGS_baseline_5F_instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FOREVER::objectCompare (const GGS_baseline_5F_instruction_5F_FOREVER & inOperand) const {
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

GGS_baseline_5F_instruction_5F_FOREVER::GGS_baseline_5F_instruction_5F_FOREVER (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER GGS_baseline_5F_instruction_5F_FOREVER::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_instructionList & in_mInstructionList,
                  const GGS_location & in_mEndOfInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_FOREVER * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_FOREVER (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_FOREVER_init_21__21__21_ (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_FOREVER result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::
baseline_5F_instruction_5F_FOREVER_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                     const GGS_location & in_mEndOfInstructionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER::GGS_baseline_5F_instruction_5F_FOREVER (const cPtr_baseline_5F_instruction_5F_FOREVER * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_FOREVER) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instruction_5F_FOREVER::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_instruction_5F_FOREVER::readProperty_mEndOfInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_FOREVER) ;
    return p->mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FOREVER::cPtr_baseline_5F_instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_FOREVER::cPtr_baseline_5F_instruction_5F_FOREVER (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                  const GGS_location & in_mEndOfInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_instruction_5F_FOREVER::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;
}

void cPtr_baseline_5F_instruction_5F_FOREVER::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_FOREVER:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_instruction_5F_FOREVER::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_FOREVER (mProperty_mInstructionLocation, mProperty_mInstructionList, mProperty_mEndOfInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_FOREVER::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstructionList.printNonNullClassInstanceProperties ("mEndOfInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_FOREVER generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ("baseline_instruction_FOREVER",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_FOREVER::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FOREVER::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FOREVER (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER GGS_baseline_5F_instruction_5F_FOREVER::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FOREVER result ;
  const GGS_baseline_5F_instruction_5F_FOREVER * p = (const GGS_baseline_5F_instruction_5F_FOREVER *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FOREVER *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FOREVER", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_FOREVER_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::GGS_baseline_5F_instruction_5F_FOREVER_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER_2E_weak & GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_FOREVER & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::GGS_baseline_5F_instruction_5F_FOREVER_2E_weak (const GGS_baseline_5F_instruction_5F_FOREVER & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER_2E_weak GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FOREVER_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_FOREVER result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_FOREVER * p = (cPtr_baseline_5F_instruction_5F_FOREVER *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_FOREVER (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::bang_baseline_5F_instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_FOREVER result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_FOREVER) ;
      result = GGS_baseline_5F_instruction_5F_FOREVER ((cPtr_baseline_5F_instruction_5F_FOREVER *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_FOREVER.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER_2E_weak ("baseline_instruction_FOREVER.weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_FOREVER_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_FOREVER_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FOREVER_2E_weak GGS_baseline_5F_instruction_5F_FOREVER_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_FOREVER_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_FOREVER_2E_weak * p = (const GGS_baseline_5F_instruction_5F_FOREVER_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_FOREVER_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_FOREVER.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak & GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT * p = (cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::bang_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT) ;
      result = GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT ((cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_STATIC_REPEAT.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak ("baseline_instruction_STATIC_REPEAT.weak",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak * p = (const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_STATIC_REPEAT.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
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

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GGS_baseline_5F_instruction () {
}


void cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::
baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_baseline_5F_instruction & in_mInstruction,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instruction () ;
  }else{
    cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                                                                          const GGS_baseline_5F_instruction & in_mInstruction,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_IF_SEMI_COLON generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ("baseline_instruction_IF_SEMI_COLON",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::bang_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
      result = GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON ((cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_IF_SEMI_COLON.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ("baseline_instruction_IF_SEMI_COLON.weak",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak * p = (const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_SEMI_COLON.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (void) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak & GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest & inSource) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_IF_5F_BitTest (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::bang_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_IF_5F_BitTest result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_IF_5F_BitTest) ;
      result = GGS_baseline_5F_instruction_5F_IF_5F_BitTest ((cPtr_baseline_5F_instruction_5F_IF_5F_BitTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_IF_BitTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak ("baseline_instruction_IF_BitTest.weak",
                                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak * p = (const GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_IF_5F_BitTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_BitTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (void) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak & GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec & inSource) :
GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_IF_5F_IncDec (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::bang_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_IF_5F_IncDec result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_IF_5F_IncDec) ;
      result = GGS_baseline_5F_instruction_5F_IF_5F_IncDec ((cPtr_baseline_5F_instruction_5F_IF_5F_IncDec *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_IF_IncDec.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak ("baseline_instruction_IF_IncDec.weak",
                                                                                                    & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak * p = (const GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_IF_5F_IncDec_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_IF_IncDec.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_conditionExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_conditionExpression::objectCompare (const GGS_baseline_5F_conditionExpression & inOperand) const {
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

GGS_baseline_5F_conditionExpression::GGS_baseline_5F_conditionExpression (void) :
AC_GALGAS_reference_class () {
}


void cPtr_baseline_5F_conditionExpression::
baseline_5F_conditionExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression::GGS_baseline_5F_conditionExpression (const cPtr_baseline_5F_conditionExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_conditionExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_conditionExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_conditionExpression::cPtr_baseline_5F_conditionExpression (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_conditionExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ("baseline_conditionExpression",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_conditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_conditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_conditionExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_conditionExpression::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_conditionExpression result ;
  const GGS_baseline_5F_conditionExpression * p = (const GGS_baseline_5F_conditionExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_conditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_conditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_conditionExpression_2E_weak::objectCompare (const GGS_baseline_5F_conditionExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_conditionExpression_2E_weak::GGS_baseline_5F_conditionExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression_2E_weak & GGS_baseline_5F_conditionExpression_2E_weak::operator = (const GGS_baseline_5F_conditionExpression & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression_2E_weak::GGS_baseline_5F_conditionExpression_2E_weak (const GGS_baseline_5F_conditionExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression_2E_weak GGS_baseline_5F_conditionExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_conditionExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_conditionExpression_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_conditionExpression result ;
  if (isValid ()) {
    const cPtr_baseline_5F_conditionExpression * p = (cPtr_baseline_5F_conditionExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_conditionExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_conditionExpression_2E_weak::bang_baseline_5F_conditionExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_conditionExpression result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_conditionExpression) ;
      result = GGS_baseline_5F_conditionExpression ((cPtr_baseline_5F_conditionExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_conditionExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak ("baseline_conditionExpression.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_conditionExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_conditionExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_conditionExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression_2E_weak GGS_baseline_5F_conditionExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_conditionExpression_2E_weak result ;
  const GGS_baseline_5F_conditionExpression_2E_weak * p = (const GGS_baseline_5F_conditionExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_conditionExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_conditionExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_baseline_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_baseline_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition_2E_weak & GGS_baseline_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_baseline_5F_incDecRegisterInCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_incDecRegisterInCondition_2E_weak (const GGS_baseline_5F_incDecRegisterInCondition & inSource) :
GGS_baseline_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_incDecRegisterInCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_incDecRegisterInCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition GGS_baseline_5F_incDecRegisterInCondition_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_incDecRegisterInCondition result ;
  if (isValid ()) {
    const cPtr_baseline_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_incDecRegisterInCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_incDecRegisterInCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition GGS_baseline_5F_incDecRegisterInCondition_2E_weak::bang_baseline_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_incDecRegisterInCondition) ;
      result = GGS_baseline_5F_incDecRegisterInCondition ((cPtr_baseline_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_incDecRegisterInCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition_2E_weak ("baseline_incDecRegisterInCondition.weak",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_incDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_incDecRegisterInCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_incDecRegisterInCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_incDecRegisterInCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_incDecRegisterInCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_incDecRegisterInCondition_2E_weak result ;
  const GGS_baseline_5F_incDecRegisterInCondition_2E_weak * p = (const GGS_baseline_5F_incDecRegisterInCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_incDecRegisterInCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_incDecRegisterInCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_negateCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_negateCondition::objectCompare (const GGS_baseline_5F_negateCondition & inOperand) const {
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

GGS_baseline_5F_negateCondition::GGS_baseline_5F_negateCondition (void) :
GGS_baseline_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_negateCondition GGS_baseline_5F_negateCondition::
init_21_ (const GGS_baseline_5F_conditionExpression & in_mCondition,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_negateCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_negateCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_negateCondition_init_21_ (in_mCondition, inCompiler) ;
  const GGS_baseline_5F_negateCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_negateCondition::
baseline_5F_negateCondition_init_21_ (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                      Compiler * /* inCompiler */) {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition::GGS_baseline_5F_negateCondition (const cPtr_baseline_5F_negateCondition * inSourcePtr) :
GGS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_negateCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_negateCondition::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_negateCondition * p = (cPtr_baseline_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_negateCondition) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_negateCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_negateCondition::cPtr_baseline_5F_negateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_negateCondition::cPtr_baseline_5F_negateCondition (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_negateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;
}

void cPtr_baseline_5F_negateCondition::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_negateCondition:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_negateCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_negateCondition (mProperty_mCondition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_negateCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_negateCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition ("baseline_negateCondition",
                                                                                & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_negateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_negateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_negateCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition GGS_baseline_5F_negateCondition::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_negateCondition result ;
  const GGS_baseline_5F_negateCondition * p = (const GGS_baseline_5F_negateCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_negateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_negateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_negateCondition_2E_weak::objectCompare (const GGS_baseline_5F_negateCondition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_negateCondition_2E_weak::GGS_baseline_5F_negateCondition_2E_weak (void) :
GGS_baseline_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition_2E_weak & GGS_baseline_5F_negateCondition_2E_weak::operator = (const GGS_baseline_5F_negateCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition_2E_weak::GGS_baseline_5F_negateCondition_2E_weak (const GGS_baseline_5F_negateCondition & inSource) :
GGS_baseline_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition_2E_weak GGS_baseline_5F_negateCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_negateCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition GGS_baseline_5F_negateCondition_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_negateCondition result ;
  if (isValid ()) {
    const cPtr_baseline_5F_negateCondition * p = (cPtr_baseline_5F_negateCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_negateCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition GGS_baseline_5F_negateCondition_2E_weak::bang_baseline_5F_negateCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_negateCondition result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_negateCondition) ;
      result = GGS_baseline_5F_negateCondition ((cPtr_baseline_5F_negateCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_negateCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_negateCondition_2E_weak ("baseline_negateCondition.weak",
                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_negateCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_negateCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_negateCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_negateCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_negateCondition_2E_weak GGS_baseline_5F_negateCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_negateCondition_2E_weak result ;
  const GGS_baseline_5F_negateCondition_2E_weak * p = (const GGS_baseline_5F_negateCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_negateCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_negateCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_andCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_andCondition::objectCompare (const GGS_baseline_5F_andCondition & inOperand) const {
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

GGS_baseline_5F_andCondition::GGS_baseline_5F_andCondition (void) :
GGS_baseline_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_andCondition GGS_baseline_5F_andCondition::
init_21__21_ (const GGS_baseline_5F_conditionExpression & in_mLeftExpression,
              const GGS_baseline_5F_conditionExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_andCondition * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_andCondition (inCompiler COMMA_THERE)) ;
  object->baseline_5F_andCondition_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_baseline_5F_andCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_andCondition::
baseline_5F_andCondition_init_21__21_ (const GGS_baseline_5F_conditionExpression & in_mLeftExpression,
                                       const GGS_baseline_5F_conditionExpression & in_mRightExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition::GGS_baseline_5F_andCondition (const cPtr_baseline_5F_andCondition * inSourcePtr) :
GGS_baseline_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_andCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_andCondition::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_andCondition::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_andCondition) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_andCondition class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_andCondition::cPtr_baseline_5F_andCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_andCondition::cPtr_baseline_5F_andCondition (const GGS_baseline_5F_conditionExpression & in_mLeftExpression,
                                                              const GGS_baseline_5F_conditionExpression & in_mRightExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_andCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition ;
}

void cPtr_baseline_5F_andCondition::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_andCondition:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_andCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_andCondition (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_andCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_andCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition ("baseline_andCondition",
                                                                             & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_andCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_andCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_andCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition GGS_baseline_5F_andCondition::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_andCondition result ;
  const GGS_baseline_5F_andCondition * p = (const GGS_baseline_5F_andCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_andCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_andCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_andCondition_2E_weak::objectCompare (const GGS_baseline_5F_andCondition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_andCondition_2E_weak::GGS_baseline_5F_andCondition_2E_weak (void) :
GGS_baseline_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition_2E_weak & GGS_baseline_5F_andCondition_2E_weak::operator = (const GGS_baseline_5F_andCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition_2E_weak::GGS_baseline_5F_andCondition_2E_weak (const GGS_baseline_5F_andCondition & inSource) :
GGS_baseline_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition_2E_weak GGS_baseline_5F_andCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_andCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition GGS_baseline_5F_andCondition_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_andCondition result ;
  if (isValid ()) {
    const cPtr_baseline_5F_andCondition * p = (cPtr_baseline_5F_andCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_andCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition GGS_baseline_5F_andCondition_2E_weak::bang_baseline_5F_andCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_andCondition result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_andCondition) ;
      result = GGS_baseline_5F_andCondition ((cPtr_baseline_5F_andCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_andCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_andCondition_2E_weak ("baseline_andCondition.weak",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_andCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_andCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_andCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_andCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_andCondition_2E_weak GGS_baseline_5F_andCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_andCondition_2E_weak result ;
  const GGS_baseline_5F_andCondition_2E_weak * p = (const GGS_baseline_5F_andCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_andCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_andCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::objectCompare (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (void) :
GGS_baseline_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::operator = (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) :
GGS_baseline_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (isValid ()) {
    const cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::bang_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
      result = GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ((cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_bitTest_in_structured_if_condition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ("baseline_bitTest_in_structured_if_condition.weak",
                                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
  const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak * p = (const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_bitTest_in_structured_if_condition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_structured_5F_if reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_structured_5F_if::objectCompare (const GGS_baseline_5F_instruction_5F_structured_5F_if & inOperand) const {
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

GGS_baseline_5F_instruction_5F_structured_5F_if::GGS_baseline_5F_instruction_5F_structured_5F_if (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if GGS_baseline_5F_instruction_5F_structured_5F_if::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_baseline_5F_conditionExpression & in_mIfCondition,
                          const GGS_baseline_5F_instructionList & in_mThenInstructionList,
                          const GGS_baseline_5F_instructionList & in_mElseInstructionList,
                          const GGS_location & in_mEndOfElsePartLocation,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_structured_5F_if * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_structured_5F_if (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (in_mInstructionLocation, in_mIfCondition, in_mThenInstructionList, in_mElseInstructionList, in_mEndOfElsePartLocation, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::
baseline_5F_instruction_5F_structured_5F_if_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_baseline_5F_conditionExpression & in_mIfCondition,
                                                                      const GGS_baseline_5F_instructionList & in_mThenInstructionList,
                                                                      const GGS_baseline_5F_instructionList & in_mElseInstructionList,
                                                                      const GGS_location & in_mEndOfElsePartLocation,
                                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIfCondition = in_mIfCondition ;
  mProperty_mThenInstructionList = in_mThenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElsePartLocation = in_mEndOfElsePartLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if::GGS_baseline_5F_instruction_5F_structured_5F_if (const cPtr_baseline_5F_instruction_5F_structured_5F_if * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression GGS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mIfCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_conditionExpression () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mIfCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mThenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mThenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_instruction_5F_structured_5F_if::readProperty_mEndOfElsePartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
    return p->mProperty_mEndOfElsePartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_structured_if class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_structured_5F_if::cPtr_baseline_5F_instruction_5F_structured_5F_if (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mIfCondition (),
mProperty_mThenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElsePartLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_structured_5F_if::cPtr_baseline_5F_instruction_5F_structured_5F_if (const GGS_location & in_mInstructionLocation,
                                                                                                    const GGS_baseline_5F_conditionExpression & in_mIfCondition,
                                                                                                    const GGS_baseline_5F_instructionList & in_mThenInstructionList,
                                                                                                    const GGS_baseline_5F_instructionList & in_mElseInstructionList,
                                                                                                    const GGS_location & in_mEndOfElsePartLocation,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_baseline_5F_instruction_5F_structured_5F_if::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
}

void cPtr_baseline_5F_instruction_5F_structured_5F_if::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_structured_if:") ;
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

AbstractPtrClass * cPtr_baseline_5F_instruction_5F_structured_5F_if::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_structured_5F_if (mProperty_mInstructionLocation, mProperty_mIfCondition, mProperty_mThenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElsePartLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_structured_5F_if::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mIfCondition.printNonNullClassInstanceProperties ("mIfCondition") ;
    mProperty_mThenInstructionList.printNonNullClassInstanceProperties ("mThenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElsePartLocation.printNonNullClassInstanceProperties ("mEndOfElsePartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_structured_if generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ("baseline_instruction_structured_if",
                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_structured_5F_if::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_structured_5F_if::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_structured_5F_if (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if GGS_baseline_5F_instruction_5F_structured_5F_if::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_structured_5F_if result ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if * p = (const GGS_baseline_5F_instruction_5F_structured_5F_if *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_structured_5F_if *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_structured_if", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak & GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_structured_5F_if & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak (const GGS_baseline_5F_instruction_5F_structured_5F_if & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_structured_5F_if result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_structured_5F_if * p = (cPtr_baseline_5F_instruction_5F_structured_5F_if *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_structured_5F_if (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::bang_baseline_5F_instruction_5F_structured_5F_if_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_structured_5F_if result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_structured_5F_if) ;
      result = GGS_baseline_5F_instruction_5F_structured_5F_if ((cPtr_baseline_5F_instruction_5F_structured_5F_if *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_structured_if.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if_2E_weak ("baseline_instruction_structured_if.weak",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_structured_5F_if_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak * p = (const GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_structured_5F_if_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_structured_if.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@baseline_5F_partList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_baseline_5F_partList : public CollectionElementPtr {
  public: GGS_baseline_5F_partList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_baseline_5F_partList (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                                     const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                     const GGS_location & in_mEndOfPartLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_baseline_5F_partList (const GGS_baseline_5F_partList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_baseline_5F_partList::CollectionElementPtr_baseline_5F_partList (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                                                                      const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                      const GGS_location & in_mEndOfPartLocation
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_baseline_5F_partList::CollectionElementPtr_baseline_5F_partList (const GGS_baseline_5F_partList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mCondition, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_baseline_5F_partList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_baseline_5F_partList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_baseline_5F_partList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @baseline_5F_partList
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList::GGS_baseline_5F_partList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList::GGS_baseline_5F_partList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_baseline_5F_partList * p = (CollectionElementPtr_baseline_5F_partList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_baseline_5F_partList) ;
    const GGS_baseline_5F_partList_2E_element element (p->mObject.mProperty_mCondition, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfPartLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_baseline_5F_conditionExpression & in_mCondition,
                                                          const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                          const GGS_location & in_mEndOfPartLocation
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_baseline_5F_partList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_baseline_5F_partList (in_mCondition, in_mInstructionList, in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_partList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_baseline_5F_partList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::description (String & ioString,
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

GGS_baseline_5F_partList GGS_baseline_5F_partList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_partList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::plusPlusAssignOperation (const GGS_baseline_5F_partList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::class_func_listWithValue (const GGS_baseline_5F_conditionExpression & inOperand0,
                                                                             const GGS_baseline_5F_instructionList & inOperand1,
                                                                             const GGS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_partList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_baseline_5F_partList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::addAssignOperation (const GGS_baseline_5F_conditionExpression & inOperand0,
                                                   const GGS_baseline_5F_instructionList & inOperand1,
                                                   const GGS_location & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_partList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::setter_append (const GGS_baseline_5F_conditionExpression inOperand0,
                                              const GGS_baseline_5F_instructionList inOperand1,
                                              const GGS_location inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_partList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::setter_insertAtIndex (const GGS_baseline_5F_conditionExpression inOperand0,
                                                     const GGS_baseline_5F_instructionList inOperand1,
                                                     const GGS_location inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_partList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_baseline_5F_partList::setter_removeAtIndex (GGS_baseline_5F_conditionExpression & outOperand0,
                                                     GGS_baseline_5F_instructionList & outOperand1,
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

void GGS_baseline_5F_partList::setter_popFirst (GGS_baseline_5F_conditionExpression & outOperand0,
                                                GGS_baseline_5F_instructionList & outOperand1,
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

void GGS_baseline_5F_partList::setter_popLast (GGS_baseline_5F_conditionExpression & outOperand0,
                                               GGS_baseline_5F_instructionList & outOperand1,
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

void GGS_baseline_5F_partList::method_first (GGS_baseline_5F_conditionExpression & outOperand0,
                                             GGS_baseline_5F_instructionList & outOperand1,
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

void GGS_baseline_5F_partList::method_last (GGS_baseline_5F_conditionExpression & outOperand0,
                                            GGS_baseline_5F_instructionList & outOperand1,
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

GGS_baseline_5F_partList GGS_baseline_5F_partList::add_operation (const GGS_baseline_5F_partList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_partList result ;
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

GGS_baseline_5F_partList GGS_baseline_5F_partList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_partList result ;
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

GGS_baseline_5F_partList GGS_baseline_5F_partList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_partList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_partList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_partList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList::plusAssignOperation (const GGS_baseline_5F_partList inList,
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

void GGS_baseline_5F_partList::setter_setMConditionAtIndex (GGS_baseline_5F_conditionExpression inOperand,
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
  
GGS_baseline_5F_conditionExpression GGS_baseline_5F_partList::getter_mConditionAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_conditionExpression result ;
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

void GGS_baseline_5F_partList::setter_setMInstructionListAtIndex (GGS_baseline_5F_instructionList inOperand,
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
  
GGS_baseline_5F_instructionList GGS_baseline_5F_partList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result ;
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

void GGS_baseline_5F_partList::setter_setMEndOfPartLocationAtIndex (GGS_location inOperand,
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
  
GGS_location GGS_baseline_5F_partList::getter_mEndOfPartLocationAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @baseline_5F_partList
//--------------------------------------------------------------------------------------------------

DownEnumerator_baseline_5F_partList::DownEnumerator_baseline_5F_partList (const GGS_baseline_5F_partList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList_2E_element DownEnumerator_baseline_5F_partList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression DownEnumerator_baseline_5F_partList::current_mCondition (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList DownEnumerator_baseline_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_baseline_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfPartLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @baseline_5F_partList
//--------------------------------------------------------------------------------------------------

UpEnumerator_baseline_5F_partList::UpEnumerator_baseline_5F_partList (const GGS_baseline_5F_partList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList_2E_element UpEnumerator_baseline_5F_partList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_conditionExpression UpEnumerator_baseline_5F_partList::current_mCondition (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList UpEnumerator_baseline_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_baseline_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfPartLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @baseline_partList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_partList ("baseline_partList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_partList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_partList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_partList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_partList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_partList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_partList result ;
  const GGS_baseline_5F_partList * p = (const GGS_baseline_5F_partList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_partList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_partList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_instruction_5F_do_5F_while reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_do_5F_while::objectCompare (const GGS_baseline_5F_instruction_5F_do_5F_while & inOperand) const {
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

GGS_baseline_5F_instruction_5F_do_5F_while::GGS_baseline_5F_instruction_5F_do_5F_while (void) :
GGS_baseline_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while GGS_baseline_5F_instruction_5F_do_5F_while::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                      const GGS_location & in_mEndOfRepeatedInstructionList,
                      const GGS_baseline_5F_partList & in_mWhilePartList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_instruction_5F_do_5F_while * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_instruction_5F_do_5F_while (inCompiler COMMA_THERE)) ;
  object->baseline_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOfRepeatedInstructionList, in_mWhilePartList, inCompiler) ;
  const GGS_baseline_5F_instruction_5F_do_5F_while result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_do_5F_while::
baseline_5F_instruction_5F_do_5F_while_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                             const GGS_location & in_mEndOfRepeatedInstructionList,
                                                             const GGS_baseline_5F_partList & in_mWhilePartList,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while::GGS_baseline_5F_instruction_5F_do_5F_while (const cPtr_baseline_5F_instruction_5F_do_5F_while * inSourcePtr) :
GGS_baseline_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList GGS_baseline_5F_instruction_5F_do_5F_while::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instructionList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_instruction_5F_do_5F_while::readProperty_mEndOfRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mEndOfRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList GGS_baseline_5F_instruction_5F_do_5F_while::readProperty_mWhilePartList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_partList () ;
  }else{
    cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
    return p->mProperty_mWhilePartList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_instruction_do_while class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_do_5F_while::cPtr_baseline_5F_instruction_5F_do_5F_while (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_instruction_5F_do_5F_while::cPtr_baseline_5F_instruction_5F_do_5F_while (const GGS_location & in_mInstructionLocation,
                                                                                          const GGS_baseline_5F_instructionList & in_mRepeatedInstructionList,
                                                                                          const GGS_location & in_mEndOfRepeatedInstructionList,
                                                                                          const GGS_baseline_5F_partList & in_mWhilePartList,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_instruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOfRepeatedInstructionList (),
mProperty_mWhilePartList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOfRepeatedInstructionList = in_mEndOfRepeatedInstructionList ;
  mProperty_mWhilePartList = in_mWhilePartList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_instruction_5F_do_5F_while::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;
}

void cPtr_baseline_5F_instruction_5F_do_5F_while::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_instruction_do_while:") ;
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

AbstractPtrClass * cPtr_baseline_5F_instruction_5F_do_5F_while::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_instruction_5F_do_5F_while (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOfRepeatedInstructionList, mProperty_mWhilePartList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_instruction_5F_do_5F_while::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mEndOfRepeatedInstructionList.printNonNullClassInstanceProperties ("mEndOfRepeatedInstructionList") ;
    mProperty_mWhilePartList.printNonNullClassInstanceProperties ("mWhilePartList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_do_while generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ("baseline_instruction_do_while",
                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_do_5F_while::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_do_5F_while::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_do_5F_while (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while GGS_baseline_5F_instruction_5F_do_5F_while::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_do_5F_while result ;
  const GGS_baseline_5F_instruction_5F_do_5F_while * p = (const GGS_baseline_5F_instruction_5F_do_5F_while *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_do_5F_while *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_do_while", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::objectCompare (const GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak (void) :
GGS_baseline_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak & GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::operator = (const GGS_baseline_5F_instruction_5F_do_5F_while & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak (const GGS_baseline_5F_instruction_5F_do_5F_while & inSource) :
GGS_baseline_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_instruction_5F_do_5F_while result ;
  if (isValid ()) {
    const cPtr_baseline_5F_instruction_5F_do_5F_while * p = (cPtr_baseline_5F_instruction_5F_do_5F_while *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_instruction_5F_do_5F_while (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::bang_baseline_5F_instruction_5F_do_5F_while_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instruction_5F_do_5F_while result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_instruction_5F_do_5F_while) ;
      result = GGS_baseline_5F_instruction_5F_do_5F_while ((cPtr_baseline_5F_instruction_5F_do_5F_while *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instruction_do_while.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while_2E_weak ("baseline_instruction_do_while.weak",
                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instruction_5F_do_5F_while_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak result ;
  const GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak * p = (const GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instruction_5F_do_5F_while_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instruction_do_while.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@baseline_5F_routineDefinitionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_baseline_5F_routineDefinitionList : public CollectionElementPtr {
  public: GGS_baseline_5F_routineDefinitionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_baseline_5F_routineDefinitionList (const GGS_lstring & in_mRoutineName,
                                                                  const GGS_luint & in_mPage,
                                                                  const GGS_bool & in_mIsNoReturn,
                                                                  const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                  const GGS_location & in_mEndOfRoutineLocation
                                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_baseline_5F_routineDefinitionList (const GGS_baseline_5F_routineDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_baseline_5F_routineDefinitionList::CollectionElementPtr_baseline_5F_routineDefinitionList (const GGS_lstring & in_mRoutineName,
                                                                                                                const GGS_luint & in_mPage,
                                                                                                                const GGS_bool & in_mIsNoReturn,
                                                                                                                const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                                                const GGS_location & in_mEndOfRoutineLocation
                                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mRoutineName, in_mPage, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_baseline_5F_routineDefinitionList::CollectionElementPtr_baseline_5F_routineDefinitionList (const GGS_baseline_5F_routineDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mPage, inElement.mProperty_mIsNoReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_baseline_5F_routineDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_baseline_5F_routineDefinitionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_baseline_5F_routineDefinitionList (mObject.mProperty_mRoutineName, mObject.mProperty_mPage, mObject.mProperty_mIsNoReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @baseline_5F_routineDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList::GGS_baseline_5F_routineDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList::GGS_baseline_5F_routineDefinitionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_baseline_5F_routineDefinitionList * p = (CollectionElementPtr_baseline_5F_routineDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_baseline_5F_routineDefinitionList) ;
    const GGS_baseline_5F_routineDefinitionList_2E_element element (p->mObject.mProperty_mRoutineName, p->mObject.mProperty_mPage, p->mObject.mProperty_mIsNoReturn, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfRoutineLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                       const GGS_lstring & in_mRoutineName,
                                                                       const GGS_luint & in_mPage,
                                                                       const GGS_bool & in_mIsNoReturn,
                                                                       const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                       const GGS_location & in_mEndOfRoutineLocation
                                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_baseline_5F_routineDefinitionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_baseline_5F_routineDefinitionList (in_mRoutineName, in_mPage, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_routineDefinitionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_baseline_5F_routineDefinitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::description (String & ioString,
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
      ioString.appendString ("mPage:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPage.description (ioString, inIndentation + 1) ;
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

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_routineDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::plusPlusAssignOperation (const GGS_baseline_5F_routineDefinitionList_2E_element & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                       const GGS_luint & inOperand1,
                                                                                                       const GGS_bool & inOperand2,
                                                                                                       const GGS_baseline_5F_instructionList & inOperand3,
                                                                                                       const GGS_location & inOperand4
                                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_routineDefinitionList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_baseline_5F_routineDefinitionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                const GGS_luint & inOperand1,
                                                                const GGS_bool & inOperand2,
                                                                const GGS_baseline_5F_instructionList & inOperand3,
                                                                const GGS_location & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_routineDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_append (const GGS_lstring inOperand0,
                                                           const GGS_luint inOperand1,
                                                           const GGS_bool inOperand2,
                                                           const GGS_baseline_5F_instructionList inOperand3,
                                                           const GGS_location inOperand4,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_routineDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                  const GGS_luint inOperand1,
                                                                  const GGS_bool inOperand2,
                                                                  const GGS_baseline_5F_instructionList inOperand3,
                                                                  const GGS_location inOperand4,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_routineDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GGS_baseline_5F_routineDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                  GGS_luint & outOperand1,
                                                                  GGS_bool & outOperand2,
                                                                  GGS_baseline_5F_instructionList & outOperand3,
                                                                  GGS_location & outOperand4,
                                                                  const GGS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mRoutineName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mPage ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mIsNoReturn ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mEndOfRoutineLocation ;
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

void GGS_baseline_5F_routineDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                                             GGS_luint & outOperand1,
                                                             GGS_bool & outOperand2,
                                                             GGS_baseline_5F_instructionList & outOperand3,
                                                             GGS_location & outOperand4,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPage ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mIsNoReturn ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEndOfRoutineLocation ;
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

void GGS_baseline_5F_routineDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                                            GGS_luint & outOperand1,
                                                            GGS_bool & outOperand2,
                                                            GGS_baseline_5F_instructionList & outOperand3,
                                                            GGS_location & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPage ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mIsNoReturn ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEndOfRoutineLocation ;
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

void GGS_baseline_5F_routineDefinitionList::method_first (GGS_lstring & outOperand0,
                                                          GGS_luint & outOperand1,
                                                          GGS_bool & outOperand2,
                                                          GGS_baseline_5F_instructionList & outOperand3,
                                                          GGS_location & outOperand4,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPage ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mIsNoReturn ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEndOfRoutineLocation ;
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

void GGS_baseline_5F_routineDefinitionList::method_last (GGS_lstring & outOperand0,
                                                         GGS_luint & outOperand1,
                                                         GGS_bool & outOperand2,
                                                         GGS_baseline_5F_instructionList & outOperand3,
                                                         GGS_location & outOperand4,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPage ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mIsNoReturn ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEndOfRoutineLocation ;
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

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::add_operation (const GGS_baseline_5F_routineDefinitionList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_routineDefinitionList result ;
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

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::subList (const int32_t inStart,
                                                                                      const int32_t inLength,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_routineDefinitionList result ;
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

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_routineDefinitionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_routineDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_routineDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_routineDefinitionList::plusAssignOperation (const GGS_baseline_5F_routineDefinitionList inList,
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

void GGS_baseline_5F_routineDefinitionList::setter_setMRoutineNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_baseline_5F_routineDefinitionList::getter_mRoutineNameAtIndex (const GGS_uint & inIndex,
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

void GGS_baseline_5F_routineDefinitionList::setter_setMPageAtIndex (GGS_luint inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPage = inOperand ;
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
  
GGS_luint GGS_baseline_5F_routineDefinitionList::getter_mPageAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPage ;
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

void GGS_baseline_5F_routineDefinitionList::setter_setMIsNoReturnAtIndex (GGS_bool inOperand,
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
  
GGS_bool GGS_baseline_5F_routineDefinitionList::getter_mIsNoReturnAtIndex (const GGS_uint & inIndex,
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

void GGS_baseline_5F_routineDefinitionList::setter_setMInstructionListAtIndex (GGS_baseline_5F_instructionList inOperand,
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
  
GGS_baseline_5F_instructionList GGS_baseline_5F_routineDefinitionList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_instructionList result ;
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

void GGS_baseline_5F_routineDefinitionList::setter_setMEndOfRoutineLocationAtIndex (GGS_location inOperand,
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
  
GGS_location GGS_baseline_5F_routineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @baseline_5F_routineDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_baseline_5F_routineDefinitionList::DownEnumerator_baseline_5F_routineDefinitionList (const GGS_baseline_5F_routineDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element DownEnumerator_baseline_5F_routineDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_baseline_5F_routineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_baseline_5F_routineDefinitionList::current_mPage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_baseline_5F_routineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList DownEnumerator_baseline_5F_routineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_baseline_5F_routineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfRoutineLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @baseline_5F_routineDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_baseline_5F_routineDefinitionList::UpEnumerator_baseline_5F_routineDefinitionList (const GGS_baseline_5F_routineDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList_2E_element UpEnumerator_baseline_5F_routineDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_baseline_5F_routineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_baseline_5F_routineDefinitionList::current_mPage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_baseline_5F_routineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList UpEnumerator_baseline_5F_routineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_baseline_5F_routineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfRoutineLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @baseline_routineDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ("baseline_routineDefinitionList",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_routineDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_routineDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_routineDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_routineDefinitionList GGS_baseline_5F_routineDefinitionList::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_routineDefinitionList result ;
  const GGS_baseline_5F_routineDefinitionList * p = (const GGS_baseline_5F_routineDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_routineDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_routineDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@midrange_intermediate_instruction instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint callExtensionGetter_instructionLength (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_uint result ;
  if (nullptr != inObject) {
    result = inObject->getter_instructionLength (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @configFieldMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap::GGS_configFieldMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap::~ GGS_configFieldMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap::GGS_configFieldMap (const GGS_configFieldMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap & GGS_configFieldMap::operator = (const GGS_configFieldMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_configFieldMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configFieldMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_configFieldMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configFieldMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_configFieldMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_configFieldMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_configFieldMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_configFieldMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configFieldMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::performInsert (const GGS_configFieldMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_configFieldMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>
GGS_configFieldMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_configFieldMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>>
GGS_configFieldMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_configFieldMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element_3F_ GGS_configFieldMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_configFieldMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_configFieldMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_configFieldMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRegisterName = info->mProperty_mRegisterName ;
      element.mProperty_mMaskValue = info->mProperty_mMaskValue ;
      element.mProperty_mDescription = info->mProperty_mDescription ;
      element.mProperty_mFieldSettingMap = info->mProperty_mFieldSettingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::class_func_mapWithMapToOverride (const GGS_configFieldMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_configFieldMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_configFieldMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_configFieldMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_lstring inArgument0,
                                           GGS_luint inArgument1,
                                           GGS_lstring inArgument2,
                                           GGS_fieldSettingMap inArgument3,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_configFieldMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' configuration field is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_lstring & outArgument0,
                                           GGS_luint & outArgument1,
                                           GGS_lstring & outArgument2,
                                           GGS_fieldSettingMap & outArgument3,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' configuration field is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mRegisterName ;
    outArgument1 = info->mProperty_mMaskValue ;
    outArgument2 = info->mProperty_mDescription ;
    outArgument3 = info->mProperty_mFieldSettingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configFieldMap::getter_mRegisterNameForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRegisterName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_configFieldMap::getter_mMaskValueForKey (const GGS_string & inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mMaskValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_configFieldMap::getter_mDescriptionForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDescription ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap GGS_configFieldMap::getter_mFieldSettingMapForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_fieldSettingMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFieldSettingMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::setter_setMRegisterNameForKey (GGS_lstring inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configFieldMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRegisterName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::setter_setMMaskValueForKey (GGS_luint inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configFieldMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mMaskValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::setter_setMDescriptionForKey (GGS_lstring inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configFieldMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDescription = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::setter_setMFieldSettingMapForKey (GGS_fieldSettingMap inValue,
                                                           GGS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_configFieldMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFieldSettingMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_configFieldMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>> & inArray,
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
    ioString.appendString ("mRegisterName:") ;
    inArray (i COMMA_HERE)->mProperty_mRegisterName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mMaskValue:") ;
    inArray (i COMMA_HERE)->mProperty_mMaskValue.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDescription:") ;
    inArray (i COMMA_HERE)->mProperty_mDescription.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFieldSettingMap:") ;
    inArray (i COMMA_HERE)->mProperty_mFieldSettingMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_configFieldMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_configFieldMap_2E_element>> array = sortedInfoArray () ;
    GGS_configFieldMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_configFieldMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_configFieldMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @configFieldMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_configFieldMap::DownEnumerator_configFieldMap (const GGS_configFieldMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element DownEnumerator_configFieldMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configFieldMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configFieldMap::current_mRegisterName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_configFieldMap::current_mMaskValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_configFieldMap::current_mDescription (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap DownEnumerator_configFieldMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFieldSettingMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @configFieldMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_configFieldMap::UpEnumerator_configFieldMap (const GGS_configFieldMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap_2E_element UpEnumerator_configFieldMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configFieldMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configFieldMap::current_mRegisterName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRegisterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_configFieldMap::current_mMaskValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mMaskValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_configFieldMap::current_mDescription (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_fieldSettingMap UpEnumerator_configFieldMap::current_mFieldSettingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFieldSettingMap ;
}


//--------------------------------------------------------------------------------------------------
//     @configFieldMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configFieldMap ("configFieldMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configFieldMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configFieldMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configFieldMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configFieldMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configFieldMap GGS_configFieldMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_configFieldMap result ;
  const GGS_configFieldMap * p = (const GGS_configFieldMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configFieldMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configFieldMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_conditionExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_conditionExpression::objectCompare (const GGS_midrange_5F_conditionExpression & inOperand) const {
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

GGS_midrange_5F_conditionExpression::GGS_midrange_5F_conditionExpression (void) :
AC_GALGAS_reference_class () {
}


void cPtr_midrange_5F_conditionExpression::
midrange_5F_conditionExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression::GGS_midrange_5F_conditionExpression (const cPtr_midrange_5F_conditionExpression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_conditionExpression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_conditionExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_conditionExpression::cPtr_midrange_5F_conditionExpression (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_conditionExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ("midrange_conditionExpression",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_conditionExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_conditionExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_conditionExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_conditionExpression::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_conditionExpression result ;
  const GGS_midrange_5F_conditionExpression * p = (const GGS_midrange_5F_conditionExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_conditionExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_conditionExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@midrange_conditionExpression computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_computeInstructionCountForCondition (cPtr_midrange_5F_conditionExpression * inObject,
                                                              const GGS_bool constin_inComplementaryBranch,
                                                              GGS_uint & out_outInstructionCount,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outInstructionCount.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_conditionExpression) ;
    inObject->method_computeInstructionCountForCondition (constin_inComplementaryBranch, out_outInstructionCount, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@pic18PiccoloInstruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (cPtr_pic_31__38_PiccoloInstruction * inObject,
                                          const GGS_pic_31__38_MacroMap constin_inMacroMap,
                                          GGS_stringset & io_ioUsedRoutines,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_pic_31__38_PiccoloInstruction) ;
    inObject->method_addUsedRoutines (constin_inMacroMap, io_ioUsedRoutines, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//'@blockInvocationGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_blockInvocationGraph::GGS_blockInvocationGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_blockInvocationGraph GGS_blockInvocationGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_blockInvocationGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInvocationGraph::setter_addNode (GGS_lstring inKey,
                                               GGS_string inArgument_0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  CollectionElement attributes ;
  GGS_stringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' label is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInvocationGraph::method_topologicalSort (GGS_stringlist & outSortedList,
                                                       GGS_lstringlist & outSortedKeyList,
                                                       GGS_stringlist & outUnsortedList,
                                                       GGS_lstringlist & outUnsortedKeyList,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_stringlist (sortedList) ;
  outUnsortedList = GGS_stringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInvocationGraph::method_depthFirstTopologicalSort (GGS_stringlist & outSortedList,
                                                                 GGS_lstringlist & outSortedKeyList,
                                                                 GGS_stringlist & outUnsortedList,
                                                                 GGS_lstringlist & outUnsortedKeyList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_stringlist (sortedList) ;
  outUnsortedList = GGS_stringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_blockInvocationGraph GGS_blockInvocationGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_blockInvocationGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInvocationGraph::method_circularities (GGS_stringlist & outInfoList,
                                                     GGS_lstringlist & outKeyList
                                                     COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInvocationGraph::method_nodesWithNoSuccessor (GGS_stringlist & outInfoList,
                                                            GGS_lstringlist & outKeyList
                                                            COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_blockInvocationGraph::method_nodesWithNoPredecessor (GGS_stringlist & outInfoList,
                                                              GGS_lstringlist & outKeyList
                                                              COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInvocationGraph GGS_blockInvocationGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                             const GGS_stringset & inKeysToExclude,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_blockInvocationGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_blockInvocationGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_stringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_blockInvocationGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                      const GGS_stringset & inNodesToExclude,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_blockInvocationGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @blockInvocationGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_blockInvocationGraph ("blockInvocationGraph",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_blockInvocationGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_blockInvocationGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_blockInvocationGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_blockInvocationGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_blockInvocationGraph GGS_blockInvocationGraph::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_blockInvocationGraph result ;
  const GGS_blockInvocationGraph * p = (const GGS_blockInvocationGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_blockInvocationGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("blockInvocationGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

