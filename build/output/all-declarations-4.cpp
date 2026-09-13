#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_CLRW_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_CLRW_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_CLRW_2E_weak::GGS_midrange_5F_instruction_5F_CLRW_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW_2E_weak & GGS_midrange_5F_instruction_5F_CLRW_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_CLRW & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW_2E_weak::GGS_midrange_5F_instruction_5F_CLRW_2E_weak (const GGS_midrange_5F_instruction_5F_CLRW & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW_2E_weak GGS_midrange_5F_instruction_5F_CLRW_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRW_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW GGS_midrange_5F_instruction_5F_CLRW_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_CLRW result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_CLRW * p = (cPtr_midrange_5F_instruction_5F_CLRW *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_CLRW (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW GGS_midrange_5F_instruction_5F_CLRW_2E_weak::bang_midrange_5F_instruction_5F_CLRW_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_CLRW result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_CLRW) ;
      result = GGS_midrange_5F_instruction_5F_CLRW ((cPtr_midrange_5F_instruction_5F_CLRW *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_CLRW.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW_2E_weak ("midrange_instruction_CLRW.weak",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_CLRW_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_CLRW_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_CLRW_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_CLRW_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_CLRW_2E_weak GGS_midrange_5F_instruction_5F_CLRW_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_CLRW_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_CLRW_2E_weak * p = (const GGS_midrange_5F_instruction_5F_CLRW_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_CLRW_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_CLRW.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_NOP_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_NOP_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_NOP_2E_weak::GGS_midrange_5F_instruction_5F_NOP_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP_2E_weak & GGS_midrange_5F_instruction_5F_NOP_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_NOP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP_2E_weak::GGS_midrange_5F_instruction_5F_NOP_2E_weak (const GGS_midrange_5F_instruction_5F_NOP & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP_2E_weak GGS_midrange_5F_instruction_5F_NOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_NOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP GGS_midrange_5F_instruction_5F_NOP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_NOP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_NOP * p = (cPtr_midrange_5F_instruction_5F_NOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_NOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP GGS_midrange_5F_instruction_5F_NOP_2E_weak::bang_midrange_5F_instruction_5F_NOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_NOP result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_NOP) ;
      result = GGS_midrange_5F_instruction_5F_NOP ((cPtr_midrange_5F_instruction_5F_NOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_NOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP_2E_weak ("midrange_instruction_NOP.weak",
                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_NOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_NOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_NOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_NOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_NOP_2E_weak GGS_midrange_5F_instruction_5F_NOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_NOP_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_NOP_2E_weak * p = (const GGS_midrange_5F_instruction_5F_NOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_NOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_NOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_SLEEP_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::GGS_midrange_5F_instruction_5F_SLEEP_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP_2E_weak & GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_SLEEP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::GGS_midrange_5F_instruction_5F_SLEEP_2E_weak (const GGS_midrange_5F_instruction_5F_SLEEP & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP_2E_weak GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_SLEEP_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_SLEEP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_SLEEP * p = (cPtr_midrange_5F_instruction_5F_SLEEP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_SLEEP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::bang_midrange_5F_instruction_5F_SLEEP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_SLEEP result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_SLEEP) ;
      result = GGS_midrange_5F_instruction_5F_SLEEP ((cPtr_midrange_5F_instruction_5F_SLEEP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_SLEEP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP_2E_weak ("midrange_instruction_SLEEP.weak",
                                                                                             & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_SLEEP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_SLEEP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_SLEEP_2E_weak GGS_midrange_5F_instruction_5F_SLEEP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_SLEEP_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_SLEEP_2E_weak * p = (const GGS_midrange_5F_instruction_5F_SLEEP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_SLEEP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_SLEEP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@midrange_literal_instruction_opcode mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_midrange_5F_literal_5F_instruction_5F_opcode & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_midrange_5F_literal_5F_instruction_5F_opcode temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ADDLW:
    {
      result_outResult = GGS_string ("ADDLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      result_outResult = GGS_string ("ANDLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      result_outResult = GGS_string ("IORLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      result_outResult = GGS_string ("MOVLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_RETLW:
    {
      result_outResult = GGS_string ("RETLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_SUBLW:
    {
      result_outResult = GGS_string ("SUBLW") ;
    }
    break ;
  case GGS_midrange_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      result_outResult = GGS_string ("XORLW") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::GGS_midrange_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation_2E_weak & GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_literalOperation & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::GGS_midrange_5F_instruction_5F_literalOperation_2E_weak (const GGS_midrange_5F_instruction_5F_literalOperation & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation_2E_weak GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_literalOperation result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_literalOperation * p = (cPtr_midrange_5F_instruction_5F_literalOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_literalOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::bang_midrange_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_literalOperation) ;
      result = GGS_midrange_5F_instruction_5F_literalOperation ((cPtr_midrange_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_literalOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation_2E_weak ("midrange_instruction_literalOperation.weak",
                                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_literalOperation_2E_weak GGS_midrange_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_midrange_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_MNOP_2E_weak::GGS_midrange_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP_2E_weak & GGS_midrange_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_MNOP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP_2E_weak::GGS_midrange_5F_instruction_5F_MNOP_2E_weak (const GGS_midrange_5F_instruction_5F_MNOP & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP_2E_weak GGS_midrange_5F_instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP GGS_midrange_5F_instruction_5F_MNOP_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_MNOP result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_MNOP * p = (cPtr_midrange_5F_instruction_5F_MNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_MNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP GGS_midrange_5F_instruction_5F_MNOP_2E_weak::bang_midrange_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_MNOP) ;
      result = GGS_midrange_5F_instruction_5F_MNOP ((cPtr_midrange_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_MNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP_2E_weak ("midrange_instruction_MNOP.weak",
                                                                                            & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_MNOP_2E_weak GGS_midrange_5F_instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_MNOP_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_MNOP_2E_weak * p = (const GGS_midrange_5F_instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_FOREVER_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::GGS_midrange_5F_instruction_5F_FOREVER_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER_2E_weak & GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_FOREVER & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::GGS_midrange_5F_instruction_5F_FOREVER_2E_weak (const GGS_midrange_5F_instruction_5F_FOREVER & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER_2E_weak GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FOREVER_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_FOREVER result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_FOREVER * p = (cPtr_midrange_5F_instruction_5F_FOREVER *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_FOREVER (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::bang_midrange_5F_instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_FOREVER result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_FOREVER) ;
      result = GGS_midrange_5F_instruction_5F_FOREVER ((cPtr_midrange_5F_instruction_5F_FOREVER *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_FOREVER.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER_2E_weak ("midrange_instruction_FOREVER.weak",
                                                                                               & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_FOREVER_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_FOREVER_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_FOREVER_2E_weak GGS_midrange_5F_instruction_5F_FOREVER_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FOREVER_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_FOREVER_2E_weak * p = (const GGS_midrange_5F_instruction_5F_FOREVER_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_FOREVER_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_FOREVER.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::bang_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON) ;
      result = GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON ((cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_SEMI_COLON.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ("midrange_instruction_IF_SEMI_COLON.weak",
                                                                                                           & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak * p = (const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_SEMI_COLON.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (void) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak & GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest & inSource) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_BitTest * p = (cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_IF_5F_BitTest (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::bang_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_IF_5F_BitTest) ;
      result = GGS_midrange_5F_instruction_5F_IF_5F_BitTest ((cPtr_midrange_5F_instruction_5F_IF_5F_BitTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_BitTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak ("midrange_instruction_IF_BitTest.weak",
                                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak * p = (const GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_BitTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_BitTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (void) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak & GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec & inSource) :
GGS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_IF_5F_IncDec * p = (cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_IF_5F_IncDec (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::bang_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_IF_5F_IncDec) ;
      result = GGS_midrange_5F_instruction_5F_IF_5F_IncDec ((cPtr_midrange_5F_instruction_5F_IF_5F_IncDec *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_IF_IncDec.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak ("midrange_instruction_IF_IncDec.weak",
                                                                                                    & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak * p = (const GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_IF_5F_IncDec_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_IF_IncDec.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_conditionExpression_2E_weak::objectCompare (const GGS_midrange_5F_conditionExpression_2E_weak & inOperand) const {
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

GGS_midrange_5F_conditionExpression_2E_weak::GGS_midrange_5F_conditionExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression_2E_weak & GGS_midrange_5F_conditionExpression_2E_weak::operator = (const GGS_midrange_5F_conditionExpression & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression_2E_weak::GGS_midrange_5F_conditionExpression_2E_weak (const GGS_midrange_5F_conditionExpression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression_2E_weak GGS_midrange_5F_conditionExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_conditionExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_conditionExpression_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_conditionExpression result ;
  if (isValid ()) {
    const cPtr_midrange_5F_conditionExpression * p = (cPtr_midrange_5F_conditionExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_conditionExpression (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_conditionExpression_2E_weak::bang_midrange_5F_conditionExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_conditionExpression result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_conditionExpression) ;
      result = GGS_midrange_5F_conditionExpression ((cPtr_midrange_5F_conditionExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_conditionExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak ("midrange_conditionExpression.weak",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_conditionExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_conditionExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_conditionExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression_2E_weak GGS_midrange_5F_conditionExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_conditionExpression_2E_weak result ;
  const GGS_midrange_5F_conditionExpression_2E_weak * p = (const GGS_midrange_5F_conditionExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_conditionExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_conditionExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_midrange_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
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

GGS_midrange_5F_incDecRegisterInCondition_2E_weak::GGS_midrange_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_midrange_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition_2E_weak & GGS_midrange_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_midrange_5F_incDecRegisterInCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition_2E_weak::GGS_midrange_5F_incDecRegisterInCondition_2E_weak (const GGS_midrange_5F_incDecRegisterInCondition & inSource) :
GGS_midrange_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition_2E_weak GGS_midrange_5F_incDecRegisterInCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_incDecRegisterInCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition GGS_midrange_5F_incDecRegisterInCondition_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_incDecRegisterInCondition result ;
  if (isValid ()) {
    const cPtr_midrange_5F_incDecRegisterInCondition * p = (cPtr_midrange_5F_incDecRegisterInCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_incDecRegisterInCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition GGS_midrange_5F_incDecRegisterInCondition_2E_weak::bang_midrange_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_incDecRegisterInCondition) ;
      result = GGS_midrange_5F_incDecRegisterInCondition ((cPtr_midrange_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_incDecRegisterInCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition_2E_weak ("midrange_incDecRegisterInCondition.weak",
                                                                                                  & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_incDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_incDecRegisterInCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_incDecRegisterInCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_incDecRegisterInCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_incDecRegisterInCondition_2E_weak GGS_midrange_5F_incDecRegisterInCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_incDecRegisterInCondition_2E_weak result ;
  const GGS_midrange_5F_incDecRegisterInCondition_2E_weak * p = (const GGS_midrange_5F_incDecRegisterInCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_incDecRegisterInCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_incDecRegisterInCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_negateCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_negateCondition::objectCompare (const GGS_midrange_5F_negateCondition & inOperand) const {
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

GGS_midrange_5F_negateCondition::GGS_midrange_5F_negateCondition (void) :
GGS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_negateCondition GGS_midrange_5F_negateCondition::
init_21_ (const GGS_midrange_5F_conditionExpression & in_mCondition,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_negateCondition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_negateCondition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_negateCondition_init_21_ (in_mCondition, inCompiler) ;
  const GGS_midrange_5F_negateCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::
midrange_5F_negateCondition_init_21_ (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                      Compiler * /* inCompiler */) {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition::GGS_midrange_5F_negateCondition (const cPtr_midrange_5F_negateCondition * inSourcePtr) :
GGS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_negateCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_negateCondition::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_negateCondition * p = (cPtr_midrange_5F_negateCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_negateCondition) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_negateCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_negateCondition::cPtr_midrange_5F_negateCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_negateCondition::cPtr_midrange_5F_negateCondition (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mCondition () {
  mProperty_mCondition = in_mCondition ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_negateCondition::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;
}

void cPtr_midrange_5F_negateCondition::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@midrange_negateCondition:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_midrange_5F_negateCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_negateCondition (mProperty_mCondition, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_midrange_5F_negateCondition::printNonNullClassInstanceProperties (void) const {
    cPtr_midrange_5F_conditionExpression::printNonNullClassInstanceProperties () ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @midrange_negateCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition ("midrange_negateCondition",
                                                                                & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_negateCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_negateCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_negateCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition GGS_midrange_5F_negateCondition::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_negateCondition result ;
  const GGS_midrange_5F_negateCondition * p = (const GGS_midrange_5F_negateCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_negateCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_negateCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_negateCondition_2E_weak::objectCompare (const GGS_midrange_5F_negateCondition_2E_weak & inOperand) const {
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

GGS_midrange_5F_negateCondition_2E_weak::GGS_midrange_5F_negateCondition_2E_weak (void) :
GGS_midrange_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition_2E_weak & GGS_midrange_5F_negateCondition_2E_weak::operator = (const GGS_midrange_5F_negateCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition_2E_weak::GGS_midrange_5F_negateCondition_2E_weak (const GGS_midrange_5F_negateCondition & inSource) :
GGS_midrange_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition_2E_weak GGS_midrange_5F_negateCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_negateCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition GGS_midrange_5F_negateCondition_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_negateCondition result ;
  if (isValid ()) {
    const cPtr_midrange_5F_negateCondition * p = (cPtr_midrange_5F_negateCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_negateCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition GGS_midrange_5F_negateCondition_2E_weak::bang_midrange_5F_negateCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_negateCondition result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_negateCondition) ;
      result = GGS_midrange_5F_negateCondition ((cPtr_midrange_5F_negateCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_negateCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_negateCondition_2E_weak ("midrange_negateCondition.weak",
                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_negateCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_negateCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_negateCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_negateCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_negateCondition_2E_weak GGS_midrange_5F_negateCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_negateCondition_2E_weak result ;
  const GGS_midrange_5F_negateCondition_2E_weak * p = (const GGS_midrange_5F_negateCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_negateCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_negateCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @midrange_5F_andCondition reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_andCondition::objectCompare (const GGS_midrange_5F_andCondition & inOperand) const {
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

GGS_midrange_5F_andCondition::GGS_midrange_5F_andCondition (void) :
GGS_midrange_5F_conditionExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_midrange_5F_andCondition GGS_midrange_5F_andCondition::
init_21__21_ (const GGS_midrange_5F_conditionExpression & in_mLeftExpression,
              const GGS_midrange_5F_conditionExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_midrange_5F_andCondition * object = nullptr ;
  macroMyNew (object, cPtr_midrange_5F_andCondition (inCompiler COMMA_THERE)) ;
  object->midrange_5F_andCondition_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_midrange_5F_andCondition result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::
midrange_5F_andCondition_init_21__21_ (const GGS_midrange_5F_conditionExpression & in_mLeftExpression,
                                       const GGS_midrange_5F_conditionExpression & in_mRightExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition::GGS_midrange_5F_andCondition (const cPtr_midrange_5F_andCondition * inSourcePtr) :
GGS_midrange_5F_conditionExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_midrange_5F_andCondition) ;
}
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_andCondition::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression GGS_midrange_5F_andCondition::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_midrange_5F_conditionExpression () ;
  }else{
    cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_midrange_5F_andCondition) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @midrange_andCondition class
//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_andCondition::cPtr_midrange_5F_andCondition (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_midrange_5F_andCondition::cPtr_midrange_5F_andCondition (const GGS_midrange_5F_conditionExpression & in_mLeftExpression,
                                                              const GGS_midrange_5F_conditionExpression & in_mRightExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_midrange_5F_conditionExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_midrange_5F_andCondition::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_midrange_5F_andCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_midrange_5F_andCondition (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @midrange_andCondition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition ("midrange_andCondition",
                                                                             & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_andCondition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_andCondition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_andCondition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_andCondition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition GGS_midrange_5F_andCondition::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_andCondition result ;
  const GGS_midrange_5F_andCondition * p = (const GGS_midrange_5F_andCondition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_andCondition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_andCondition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_andCondition_2E_weak::objectCompare (const GGS_midrange_5F_andCondition_2E_weak & inOperand) const {
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

GGS_midrange_5F_andCondition_2E_weak::GGS_midrange_5F_andCondition_2E_weak (void) :
GGS_midrange_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition_2E_weak & GGS_midrange_5F_andCondition_2E_weak::operator = (const GGS_midrange_5F_andCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition_2E_weak::GGS_midrange_5F_andCondition_2E_weak (const GGS_midrange_5F_andCondition & inSource) :
GGS_midrange_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition_2E_weak GGS_midrange_5F_andCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_andCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition GGS_midrange_5F_andCondition_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_andCondition result ;
  if (isValid ()) {
    const cPtr_midrange_5F_andCondition * p = (cPtr_midrange_5F_andCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_andCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition GGS_midrange_5F_andCondition_2E_weak::bang_midrange_5F_andCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_andCondition result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_andCondition) ;
      result = GGS_midrange_5F_andCondition ((cPtr_midrange_5F_andCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_andCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_andCondition_2E_weak ("midrange_andCondition.weak",
                                                                                     & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_andCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_andCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_andCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_andCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_andCondition_2E_weak GGS_midrange_5F_andCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_andCondition_2E_weak result ;
  const GGS_midrange_5F_andCondition_2E_weak * p = (const GGS_midrange_5F_andCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_andCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_andCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::objectCompare (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & inOperand) const {
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

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (void) :
GGS_midrange_5F_conditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak & GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::operator = (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition & inSource) :
GGS_midrange_5F_conditionExpression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (isValid ()) {
    const cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition * p = (cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::bang_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition) ;
      result = GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition ((cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_bitTest_in_structured_if_condition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ("midrange_bitTest_in_structured_if_condition.weak",
                                                                                                                       & kTypeDescriptor_GALGAS_midrange_5F_conditionExpression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak result ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak * p = (const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_bitTest_in_structured_if_condition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak & GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_structured_5F_if & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak (const GGS_midrange_5F_instruction_5F_structured_5F_if & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_structured_5F_if result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_structured_5F_if * p = (cPtr_midrange_5F_instruction_5F_structured_5F_if *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_structured_5F_if (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::bang_midrange_5F_instruction_5F_structured_5F_if_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_structured_5F_if result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_structured_5F_if) ;
      result = GGS_midrange_5F_instruction_5F_structured_5F_if ((cPtr_midrange_5F_instruction_5F_structured_5F_if *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_structured_if.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if_2E_weak ("midrange_instruction_structured_if.weak",
                                                                                                        & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_structured_5F_if_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak * p = (const GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_structured_5F_if_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_structured_if.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@midrange_5F_partList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_midrange_5F_partList : public CollectionElementPtr {
  public: GGS_midrange_5F_partList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_midrange_5F_partList (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                                     const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                     const GGS_location & in_mEndOfPartLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_midrange_5F_partList (const GGS_midrange_5F_partList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_midrange_5F_partList::CollectionElementPtr_midrange_5F_partList (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                                                                      const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                      const GGS_location & in_mEndOfPartLocation
                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_midrange_5F_partList::CollectionElementPtr_midrange_5F_partList (const GGS_midrange_5F_partList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mCondition, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_midrange_5F_partList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_midrange_5F_partList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_midrange_5F_partList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @midrange_5F_partList
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList::GGS_midrange_5F_partList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList::GGS_midrange_5F_partList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_midrange_5F_partList * p = (CollectionElementPtr_midrange_5F_partList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_midrange_5F_partList) ;
    const GGS_midrange_5F_partList_2E_element element (p->mObject.mProperty_mCondition, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfPartLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                          const GGS_midrange_5F_conditionExpression & in_mCondition,
                                                          const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                          const GGS_location & in_mEndOfPartLocation
                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_midrange_5F_partList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_midrange_5F_partList (in_mCondition, in_mInstructionList, in_mEndOfPartLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_partList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_midrange_5F_partList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::description (String & ioString,
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

GGS_midrange_5F_partList GGS_midrange_5F_partList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_partList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::plusPlusAssignOperation (const GGS_midrange_5F_partList_2E_element & inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList GGS_midrange_5F_partList::class_func_listWithValue (const GGS_midrange_5F_conditionExpression & inOperand0,
                                                                             const GGS_midrange_5F_instructionList & inOperand1,
                                                                             const GGS_location & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_partList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_midrange_5F_partList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::addAssignOperation (const GGS_midrange_5F_conditionExpression & inOperand0,
                                                   const GGS_midrange_5F_instructionList & inOperand1,
                                                   const GGS_location & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_partList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::setter_append (const GGS_midrange_5F_conditionExpression inOperand0,
                                              const GGS_midrange_5F_instructionList inOperand1,
                                              const GGS_location inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_partList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::setter_insertAtIndex (const GGS_midrange_5F_conditionExpression inOperand0,
                                                     const GGS_midrange_5F_instructionList inOperand1,
                                                     const GGS_location inOperand2,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_partList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_midrange_5F_partList::setter_removeAtIndex (GGS_midrange_5F_conditionExpression & outOperand0,
                                                     GGS_midrange_5F_instructionList & outOperand1,
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

void GGS_midrange_5F_partList::setter_popFirst (GGS_midrange_5F_conditionExpression & outOperand0,
                                                GGS_midrange_5F_instructionList & outOperand1,
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

void GGS_midrange_5F_partList::setter_popLast (GGS_midrange_5F_conditionExpression & outOperand0,
                                               GGS_midrange_5F_instructionList & outOperand1,
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

void GGS_midrange_5F_partList::method_first (GGS_midrange_5F_conditionExpression & outOperand0,
                                             GGS_midrange_5F_instructionList & outOperand1,
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

void GGS_midrange_5F_partList::method_last (GGS_midrange_5F_conditionExpression & outOperand0,
                                            GGS_midrange_5F_instructionList & outOperand1,
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

GGS_midrange_5F_partList GGS_midrange_5F_partList::add_operation (const GGS_midrange_5F_partList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_midrange_5F_partList result ;
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

GGS_midrange_5F_partList GGS_midrange_5F_partList::subList (const int32_t inStart,
                                                            const int32_t inLength,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_partList result ;
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

GGS_midrange_5F_partList GGS_midrange_5F_partList::getter_subListWithRange (const GGS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_partList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList GGS_midrange_5F_partList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_partList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList GGS_midrange_5F_partList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_partList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList::plusAssignOperation (const GGS_midrange_5F_partList inList,
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

void GGS_midrange_5F_partList::setter_setMConditionAtIndex (GGS_midrange_5F_conditionExpression inOperand,
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
  
GGS_midrange_5F_conditionExpression GGS_midrange_5F_partList::getter_mConditionAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_conditionExpression result ;
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

void GGS_midrange_5F_partList::setter_setMInstructionListAtIndex (GGS_midrange_5F_instructionList inOperand,
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
  
GGS_midrange_5F_instructionList GGS_midrange_5F_partList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instructionList result ;
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

void GGS_midrange_5F_partList::setter_setMEndOfPartLocationAtIndex (GGS_location inOperand,
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
  
GGS_location GGS_midrange_5F_partList::getter_mEndOfPartLocationAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @midrange_5F_partList
//--------------------------------------------------------------------------------------------------

DownEnumerator_midrange_5F_partList::DownEnumerator_midrange_5F_partList (const GGS_midrange_5F_partList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList_2E_element DownEnumerator_midrange_5F_partList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression DownEnumerator_midrange_5F_partList::current_mCondition (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList DownEnumerator_midrange_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_midrange_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfPartLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @midrange_5F_partList
//--------------------------------------------------------------------------------------------------

UpEnumerator_midrange_5F_partList::UpEnumerator_midrange_5F_partList (const GGS_midrange_5F_partList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList_2E_element UpEnumerator_midrange_5F_partList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_conditionExpression UpEnumerator_midrange_5F_partList::current_mCondition (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCondition ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList UpEnumerator_midrange_5F_partList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_midrange_5F_partList::current_mEndOfPartLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfPartLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @midrange_partList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_partList ("midrange_partList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_partList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_partList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_partList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_partList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList GGS_midrange_5F_partList::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_partList result ;
  const GGS_midrange_5F_partList * p = (const GGS_midrange_5F_partList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_partList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_partList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak::objectCompare (const GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak & inOperand) const {
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

GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak::GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak (void) :
GGS_midrange_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak & GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak::operator = (const GGS_midrange_5F_instruction_5F_do_5F_while & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak::GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak (const GGS_midrange_5F_instruction_5F_do_5F_while & inSource) :
GGS_midrange_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_do_5F_while GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak::unwrappedValue (void) const {
  GGS_midrange_5F_instruction_5F_do_5F_while result ;
  if (isValid ()) {
    const cPtr_midrange_5F_instruction_5F_do_5F_while * p = (cPtr_midrange_5F_instruction_5F_do_5F_while *) ptr () ;
    if (nullptr != p) {
      result = GGS_midrange_5F_instruction_5F_do_5F_while (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_do_5F_while GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak::bang_midrange_5F_instruction_5F_do_5F_while_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instruction_5F_do_5F_while result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_midrange_5F_instruction_5F_do_5F_while) ;
      result = GGS_midrange_5F_instruction_5F_do_5F_while ((cPtr_midrange_5F_instruction_5F_do_5F_while *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_instruction_do_while.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while_2E_weak ("midrange_instruction_do_while.weak",
                                                                                                   & kTypeDescriptor_GALGAS_midrange_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_instruction_5F_do_5F_while_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak result ;
  const GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak * p = (const GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_instruction_5F_do_5F_while_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_instruction_do_while.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@midrange_5F_interruptDefinitionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_midrange_5F_interruptDefinitionList : public CollectionElementPtr {
  public: GGS_midrange_5F_interruptDefinitionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_midrange_5F_interruptDefinitionList (const GGS_location & in_mInterruptLocation,
                                                                    const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                    const GGS_lstring & in_mFirstSaveRegister,
                                                                    const GGS_lstring & in_mSecondSaveRegister,
                                                                    const GGS_location & in_mEndOfInterruptLocation
                                                                    COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_midrange_5F_interruptDefinitionList (const GGS_midrange_5F_interruptDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_midrange_5F_interruptDefinitionList::CollectionElementPtr_midrange_5F_interruptDefinitionList (const GGS_location & in_mInterruptLocation,
                                                                                                                    const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                    const GGS_lstring & in_mFirstSaveRegister,
                                                                                                                    const GGS_lstring & in_mSecondSaveRegister,
                                                                                                                    const GGS_location & in_mEndOfInterruptLocation
                                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInterruptLocation, in_mInstructionList, in_mFirstSaveRegister, in_mSecondSaveRegister, in_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_midrange_5F_interruptDefinitionList::CollectionElementPtr_midrange_5F_interruptDefinitionList (const GGS_midrange_5F_interruptDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInterruptLocation, inElement.mProperty_mInstructionList, inElement.mProperty_mFirstSaveRegister, inElement.mProperty_mSecondSaveRegister, inElement.mProperty_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_midrange_5F_interruptDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_midrange_5F_interruptDefinitionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_midrange_5F_interruptDefinitionList (mObject.mProperty_mInterruptLocation, mObject.mProperty_mInstructionList, mObject.mProperty_mFirstSaveRegister, mObject.mProperty_mSecondSaveRegister, mObject.mProperty_mEndOfInterruptLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @midrange_5F_interruptDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList::GGS_midrange_5F_interruptDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList::GGS_midrange_5F_interruptDefinitionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_midrange_5F_interruptDefinitionList * p = (CollectionElementPtr_midrange_5F_interruptDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_midrange_5F_interruptDefinitionList) ;
    const GGS_midrange_5F_interruptDefinitionList_2E_element element (p->mObject.mProperty_mInterruptLocation, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mFirstSaveRegister, p->mObject.mProperty_mSecondSaveRegister, p->mObject.mProperty_mEndOfInterruptLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                         const GGS_location & in_mInterruptLocation,
                                                                         const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                         const GGS_lstring & in_mFirstSaveRegister,
                                                                         const GGS_lstring & in_mSecondSaveRegister,
                                                                         const GGS_location & in_mEndOfInterruptLocation
                                                                         COMMA_LOCATION_ARGS) {
  CollectionElementPtr_midrange_5F_interruptDefinitionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_midrange_5F_interruptDefinitionList (in_mInterruptLocation, in_mInstructionList, in_mFirstSaveRegister, in_mSecondSaveRegister, in_mEndOfInterruptLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_interruptDefinitionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_midrange_5F_interruptDefinitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList::description (String & ioString,
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
      ioString.appendString ("mInterruptLocation:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInterruptLocation.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFirstSaveRegister:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFirstSaveRegister.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSecondSaveRegister:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSecondSaveRegister.description (ioString, inIndentation + 1) ;
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

GGS_midrange_5F_interruptDefinitionList GGS_midrange_5F_interruptDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_interruptDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList::plusPlusAssignOperation (const GGS_midrange_5F_interruptDefinitionList_2E_element & inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList GGS_midrange_5F_interruptDefinitionList::class_func_listWithValue (const GGS_location & inOperand0,
                                                                                                           const GGS_midrange_5F_instructionList & inOperand1,
                                                                                                           const GGS_lstring & inOperand2,
                                                                                                           const GGS_lstring & inOperand3,
                                                                                                           const GGS_location & inOperand4
                                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_interruptDefinitionList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_midrange_5F_interruptDefinitionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList::addAssignOperation (const GGS_location & inOperand0,
                                                                  const GGS_midrange_5F_instructionList & inOperand1,
                                                                  const GGS_lstring & inOperand2,
                                                                  const GGS_lstring & inOperand3,
                                                                  const GGS_location & inOperand4
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_interruptDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList::setter_append (const GGS_location inOperand0,
                                                             const GGS_midrange_5F_instructionList inOperand1,
                                                             const GGS_lstring inOperand2,
                                                             const GGS_lstring inOperand3,
                                                             const GGS_location inOperand4,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_interruptDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList::setter_insertAtIndex (const GGS_location inOperand0,
                                                                    const GGS_midrange_5F_instructionList inOperand1,
                                                                    const GGS_lstring inOperand2,
                                                                    const GGS_lstring inOperand3,
                                                                    const GGS_location inOperand4,
                                                                    const GGS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_interruptDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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

void GGS_midrange_5F_interruptDefinitionList::setter_removeAtIndex (GGS_location & outOperand0,
                                                                    GGS_midrange_5F_instructionList & outOperand1,
                                                                    GGS_lstring & outOperand2,
                                                                    GGS_lstring & outOperand3,
                                                                    GGS_location & outOperand4,
                                                                    const GGS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInterruptLocation ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFirstSaveRegister ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mSecondSaveRegister ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mEndOfInterruptLocation ;
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

void GGS_midrange_5F_interruptDefinitionList::setter_popFirst (GGS_location & outOperand0,
                                                               GGS_midrange_5F_instructionList & outOperand1,
                                                               GGS_lstring & outOperand2,
                                                               GGS_lstring & outOperand3,
                                                               GGS_location & outOperand4,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInterruptLocation ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFirstSaveRegister ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSecondSaveRegister ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEndOfInterruptLocation ;
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

void GGS_midrange_5F_interruptDefinitionList::setter_popLast (GGS_location & outOperand0,
                                                              GGS_midrange_5F_instructionList & outOperand1,
                                                              GGS_lstring & outOperand2,
                                                              GGS_lstring & outOperand3,
                                                              GGS_location & outOperand4,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInterruptLocation ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFirstSaveRegister ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSecondSaveRegister ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEndOfInterruptLocation ;
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

void GGS_midrange_5F_interruptDefinitionList::method_first (GGS_location & outOperand0,
                                                            GGS_midrange_5F_instructionList & outOperand1,
                                                            GGS_lstring & outOperand2,
                                                            GGS_lstring & outOperand3,
                                                            GGS_location & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInterruptLocation ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFirstSaveRegister ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSecondSaveRegister ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEndOfInterruptLocation ;
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

void GGS_midrange_5F_interruptDefinitionList::method_last (GGS_location & outOperand0,
                                                           GGS_midrange_5F_instructionList & outOperand1,
                                                           GGS_lstring & outOperand2,
                                                           GGS_lstring & outOperand3,
                                                           GGS_location & outOperand4,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInterruptLocation ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFirstSaveRegister ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSecondSaveRegister ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEndOfInterruptLocation ;
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

GGS_midrange_5F_interruptDefinitionList GGS_midrange_5F_interruptDefinitionList::add_operation (const GGS_midrange_5F_interruptDefinitionList & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_midrange_5F_interruptDefinitionList result ;
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

GGS_midrange_5F_interruptDefinitionList GGS_midrange_5F_interruptDefinitionList::subList (const int32_t inStart,
                                                                                          const int32_t inLength,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_interruptDefinitionList result ;
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

GGS_midrange_5F_interruptDefinitionList GGS_midrange_5F_interruptDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_interruptDefinitionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList GGS_midrange_5F_interruptDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_interruptDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList GGS_midrange_5F_interruptDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_interruptDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_interruptDefinitionList::plusAssignOperation (const GGS_midrange_5F_interruptDefinitionList inList,
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

void GGS_midrange_5F_interruptDefinitionList::setter_setMInterruptLocationAtIndex (GGS_location inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInterruptLocation = inOperand ;
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
  
GGS_location GGS_midrange_5F_interruptDefinitionList::getter_mInterruptLocationAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInterruptLocation ;
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

void GGS_midrange_5F_interruptDefinitionList::setter_setMInstructionListAtIndex (GGS_midrange_5F_instructionList inOperand,
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
  
GGS_midrange_5F_instructionList GGS_midrange_5F_interruptDefinitionList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instructionList result ;
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

void GGS_midrange_5F_interruptDefinitionList::setter_setMFirstSaveRegisterAtIndex (GGS_lstring inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFirstSaveRegister = inOperand ;
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
  
GGS_lstring GGS_midrange_5F_interruptDefinitionList::getter_mFirstSaveRegisterAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFirstSaveRegister ;
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

void GGS_midrange_5F_interruptDefinitionList::setter_setMSecondSaveRegisterAtIndex (GGS_lstring inOperand,
                                                                                    GGS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSecondSaveRegister = inOperand ;
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
  
GGS_lstring GGS_midrange_5F_interruptDefinitionList::getter_mSecondSaveRegisterAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSecondSaveRegister ;
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

void GGS_midrange_5F_interruptDefinitionList::setter_setMEndOfInterruptLocationAtIndex (GGS_location inOperand,
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
  
GGS_location GGS_midrange_5F_interruptDefinitionList::getter_mEndOfInterruptLocationAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @midrange_5F_interruptDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_midrange_5F_interruptDefinitionList::DownEnumerator_midrange_5F_interruptDefinitionList (const GGS_midrange_5F_interruptDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element DownEnumerator_midrange_5F_interruptDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_midrange_5F_interruptDefinitionList::current_mInterruptLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInterruptLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList DownEnumerator_midrange_5F_interruptDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_midrange_5F_interruptDefinitionList::current_mFirstSaveRegister (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFirstSaveRegister ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_midrange_5F_interruptDefinitionList::current_mSecondSaveRegister (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSecondSaveRegister ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_midrange_5F_interruptDefinitionList::current_mEndOfInterruptLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInterruptLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @midrange_5F_interruptDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_midrange_5F_interruptDefinitionList::UpEnumerator_midrange_5F_interruptDefinitionList (const GGS_midrange_5F_interruptDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList_2E_element UpEnumerator_midrange_5F_interruptDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_midrange_5F_interruptDefinitionList::current_mInterruptLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInterruptLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList UpEnumerator_midrange_5F_interruptDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_midrange_5F_interruptDefinitionList::current_mFirstSaveRegister (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFirstSaveRegister ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_midrange_5F_interruptDefinitionList::current_mSecondSaveRegister (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSecondSaveRegister ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_midrange_5F_interruptDefinitionList::current_mEndOfInterruptLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfInterruptLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @midrange_interruptDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList ("midrange_interruptDefinitionList",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_interruptDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_interruptDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_interruptDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_interruptDefinitionList GGS_midrange_5F_interruptDefinitionList::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_interruptDefinitionList result ;
  const GGS_midrange_5F_interruptDefinitionList * p = (const GGS_midrange_5F_interruptDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_interruptDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_interruptDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@midrange_5F_routineDefinitionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_midrange_5F_routineDefinitionList : public CollectionElementPtr {
  public: GGS_midrange_5F_routineDefinitionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_midrange_5F_routineDefinitionList (const GGS_lstring & in_mRoutineName,
                                                                  const GGS_luint & in_mPage,
                                                                  const GGS_luint & in_mRequiredBank,
                                                                  const GGS_luint & in_mReturnedBank,
                                                                  const GGS_bool & in_mPreservesBank,
                                                                  const GGS_bool & in_mIsNoReturn,
                                                                  const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                  const GGS_location & in_mEndOfRoutineLocation
                                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_midrange_5F_routineDefinitionList (const GGS_midrange_5F_routineDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_midrange_5F_routineDefinitionList::CollectionElementPtr_midrange_5F_routineDefinitionList (const GGS_lstring & in_mRoutineName,
                                                                                                                const GGS_luint & in_mPage,
                                                                                                                const GGS_luint & in_mRequiredBank,
                                                                                                                const GGS_luint & in_mReturnedBank,
                                                                                                                const GGS_bool & in_mPreservesBank,
                                                                                                                const GGS_bool & in_mIsNoReturn,
                                                                                                                const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                                                const GGS_location & in_mEndOfRoutineLocation
                                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mRoutineName, in_mPage, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_midrange_5F_routineDefinitionList::CollectionElementPtr_midrange_5F_routineDefinitionList (const GGS_midrange_5F_routineDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mPage, inElement.mProperty_mRequiredBank, inElement.mProperty_mReturnedBank, inElement.mProperty_mPreservesBank, inElement.mProperty_mIsNoReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_midrange_5F_routineDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_midrange_5F_routineDefinitionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_midrange_5F_routineDefinitionList (mObject.mProperty_mRoutineName, mObject.mProperty_mPage, mObject.mProperty_mRequiredBank, mObject.mProperty_mReturnedBank, mObject.mProperty_mPreservesBank, mObject.mProperty_mIsNoReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @midrange_5F_routineDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList::GGS_midrange_5F_routineDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList::GGS_midrange_5F_routineDefinitionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_midrange_5F_routineDefinitionList * p = (CollectionElementPtr_midrange_5F_routineDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_midrange_5F_routineDefinitionList) ;
    const GGS_midrange_5F_routineDefinitionList_2E_element element (p->mObject.mProperty_mRoutineName, p->mObject.mProperty_mPage, p->mObject.mProperty_mRequiredBank, p->mObject.mProperty_mReturnedBank, p->mObject.mProperty_mPreservesBank, p->mObject.mProperty_mIsNoReturn, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfRoutineLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                       const GGS_lstring & in_mRoutineName,
                                                                       const GGS_luint & in_mPage,
                                                                       const GGS_luint & in_mRequiredBank,
                                                                       const GGS_luint & in_mReturnedBank,
                                                                       const GGS_bool & in_mPreservesBank,
                                                                       const GGS_bool & in_mIsNoReturn,
                                                                       const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                       const GGS_location & in_mEndOfRoutineLocation
                                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_midrange_5F_routineDefinitionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_midrange_5F_routineDefinitionList (in_mRoutineName, in_mPage, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_midrange_5F_routineDefinitionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_midrange_5F_routineDefinitionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::description (String & ioString,
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

GGS_midrange_5F_routineDefinitionList GGS_midrange_5F_routineDefinitionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_routineDefinitionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::plusPlusAssignOperation (const GGS_midrange_5F_routineDefinitionList_2E_element & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList GGS_midrange_5F_routineDefinitionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                       const GGS_luint & inOperand1,
                                                                                                       const GGS_luint & inOperand2,
                                                                                                       const GGS_luint & inOperand3,
                                                                                                       const GGS_bool & inOperand4,
                                                                                                       const GGS_bool & inOperand5,
                                                                                                       const GGS_midrange_5F_instructionList & inOperand6,
                                                                                                       const GGS_location & inOperand7
                                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_routineDefinitionList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  GGS_midrange_5F_routineDefinitionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                const GGS_luint & inOperand1,
                                                                const GGS_luint & inOperand2,
                                                                const GGS_luint & inOperand3,
                                                                const GGS_bool & inOperand4,
                                                                const GGS_bool & inOperand5,
                                                                const GGS_midrange_5F_instructionList & inOperand6,
                                                                const GGS_location & inOperand7
                                                                COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_routineDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::setter_append (const GGS_lstring inOperand0,
                                                           const GGS_luint inOperand1,
                                                           const GGS_luint inOperand2,
                                                           const GGS_luint inOperand3,
                                                           const GGS_bool inOperand4,
                                                           const GGS_bool inOperand5,
                                                           const GGS_midrange_5F_instructionList inOperand6,
                                                           const GGS_location inOperand7,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_routineDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                  const GGS_luint inOperand1,
                                                                  const GGS_luint inOperand2,
                                                                  const GGS_luint inOperand3,
                                                                  const GGS_bool inOperand4,
                                                                  const GGS_bool inOperand5,
                                                                  const GGS_midrange_5F_instructionList inOperand6,
                                                                  const GGS_location inOperand7,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_midrange_5F_routineDefinitionList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
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

void GGS_midrange_5F_routineDefinitionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                  GGS_luint & outOperand1,
                                                                  GGS_luint & outOperand2,
                                                                  GGS_luint & outOperand3,
                                                                  GGS_bool & outOperand4,
                                                                  GGS_bool & outOperand5,
                                                                  GGS_midrange_5F_instructionList & outOperand6,
                                                                  GGS_location & outOperand7,
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
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mRequiredBank ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mReturnedBank ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mPreservesBank ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mIsNoReturn ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_mEndOfRoutineLocation ;
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
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::setter_popFirst (GGS_lstring & outOperand0,
                                                             GGS_luint & outOperand1,
                                                             GGS_luint & outOperand2,
                                                             GGS_luint & outOperand3,
                                                             GGS_bool & outOperand4,
                                                             GGS_bool & outOperand5,
                                                             GGS_midrange_5F_instructionList & outOperand6,
                                                             GGS_location & outOperand7,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPage ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mRequiredBank ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mReturnedBank ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mPreservesBank ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mIsNoReturn ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mEndOfRoutineLocation ;
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
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::setter_popLast (GGS_lstring & outOperand0,
                                                            GGS_luint & outOperand1,
                                                            GGS_luint & outOperand2,
                                                            GGS_luint & outOperand3,
                                                            GGS_bool & outOperand4,
                                                            GGS_bool & outOperand5,
                                                            GGS_midrange_5F_instructionList & outOperand6,
                                                            GGS_location & outOperand7,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPage ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mRequiredBank ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mReturnedBank ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mPreservesBank ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mIsNoReturn ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mEndOfRoutineLocation ;
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
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::method_first (GGS_lstring & outOperand0,
                                                          GGS_luint & outOperand1,
                                                          GGS_luint & outOperand2,
                                                          GGS_luint & outOperand3,
                                                          GGS_bool & outOperand4,
                                                          GGS_bool & outOperand5,
                                                          GGS_midrange_5F_instructionList & outOperand6,
                                                          GGS_location & outOperand7,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mRoutineName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPage ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mRequiredBank ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mReturnedBank ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mPreservesBank ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mIsNoReturn ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mEndOfRoutineLocation ;
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
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::method_last (GGS_lstring & outOperand0,
                                                         GGS_luint & outOperand1,
                                                         GGS_luint & outOperand2,
                                                         GGS_luint & outOperand3,
                                                         GGS_bool & outOperand4,
                                                         GGS_bool & outOperand5,
                                                         GGS_midrange_5F_instructionList & outOperand6,
                                                         GGS_location & outOperand7,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mRoutineName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPage ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mRequiredBank ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mReturnedBank ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mPreservesBank ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mIsNoReturn ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mEndOfRoutineLocation ;
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
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList GGS_midrange_5F_routineDefinitionList::add_operation (const GGS_midrange_5F_routineDefinitionList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_midrange_5F_routineDefinitionList result ;
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

GGS_midrange_5F_routineDefinitionList GGS_midrange_5F_routineDefinitionList::subList (const int32_t inStart,
                                                                                      const int32_t inLength,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_routineDefinitionList result ;
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

GGS_midrange_5F_routineDefinitionList GGS_midrange_5F_routineDefinitionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_routineDefinitionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList GGS_midrange_5F_routineDefinitionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_routineDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList GGS_midrange_5F_routineDefinitionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_routineDefinitionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_routineDefinitionList::plusAssignOperation (const GGS_midrange_5F_routineDefinitionList inList,
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

void GGS_midrange_5F_routineDefinitionList::setter_setMRoutineNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_midrange_5F_routineDefinitionList::getter_mRoutineNameAtIndex (const GGS_uint & inIndex,
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

void GGS_midrange_5F_routineDefinitionList::setter_setMPageAtIndex (GGS_luint inOperand,
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
  
GGS_luint GGS_midrange_5F_routineDefinitionList::getter_mPageAtIndex (const GGS_uint & inIndex,
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

void GGS_midrange_5F_routineDefinitionList::setter_setMRequiredBankAtIndex (GGS_luint inOperand,
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
  
GGS_luint GGS_midrange_5F_routineDefinitionList::getter_mRequiredBankAtIndex (const GGS_uint & inIndex,
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

void GGS_midrange_5F_routineDefinitionList::setter_setMReturnedBankAtIndex (GGS_luint inOperand,
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
  
GGS_luint GGS_midrange_5F_routineDefinitionList::getter_mReturnedBankAtIndex (const GGS_uint & inIndex,
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

void GGS_midrange_5F_routineDefinitionList::setter_setMPreservesBankAtIndex (GGS_bool inOperand,
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
  
GGS_bool GGS_midrange_5F_routineDefinitionList::getter_mPreservesBankAtIndex (const GGS_uint & inIndex,
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

void GGS_midrange_5F_routineDefinitionList::setter_setMIsNoReturnAtIndex (GGS_bool inOperand,
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
  
GGS_bool GGS_midrange_5F_routineDefinitionList::getter_mIsNoReturnAtIndex (const GGS_uint & inIndex,
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

void GGS_midrange_5F_routineDefinitionList::setter_setMInstructionListAtIndex (GGS_midrange_5F_instructionList inOperand,
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
  
GGS_midrange_5F_instructionList GGS_midrange_5F_routineDefinitionList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_midrange_5F_instructionList result ;
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

void GGS_midrange_5F_routineDefinitionList::setter_setMEndOfRoutineLocationAtIndex (GGS_location inOperand,
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
  
GGS_location GGS_midrange_5F_routineDefinitionList::getter_mEndOfRoutineLocationAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @midrange_5F_routineDefinitionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_midrange_5F_routineDefinitionList::DownEnumerator_midrange_5F_routineDefinitionList (const GGS_midrange_5F_routineDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element DownEnumerator_midrange_5F_routineDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_midrange_5F_routineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_midrange_5F_routineDefinitionList::current_mPage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_midrange_5F_routineDefinitionList::current_mRequiredBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_midrange_5F_routineDefinitionList::current_mReturnedBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_midrange_5F_routineDefinitionList::current_mPreservesBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_midrange_5F_routineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList DownEnumerator_midrange_5F_routineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_midrange_5F_routineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfRoutineLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @midrange_5F_routineDefinitionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_midrange_5F_routineDefinitionList::UpEnumerator_midrange_5F_routineDefinitionList (const GGS_midrange_5F_routineDefinitionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList_2E_element UpEnumerator_midrange_5F_routineDefinitionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_midrange_5F_routineDefinitionList::current_mRoutineName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRoutineName ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_midrange_5F_routineDefinitionList::current_mPage (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_midrange_5F_routineDefinitionList::current_mRequiredBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_midrange_5F_routineDefinitionList::current_mReturnedBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_midrange_5F_routineDefinitionList::current_mPreservesBank (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_midrange_5F_routineDefinitionList::current_mIsNoReturn (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_instructionList UpEnumerator_midrange_5F_routineDefinitionList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_midrange_5F_routineDefinitionList::current_mEndOfRoutineLocation (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfRoutineLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @midrange_routineDefinitionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList ("midrange_routineDefinitionList",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_routineDefinitionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_routineDefinitionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_routineDefinitionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_routineDefinitionList GGS_midrange_5F_routineDefinitionList::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_routineDefinitionList result ;
  const GGS_midrange_5F_routineDefinitionList * p = (const GGS_midrange_5F_routineDefinitionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_routineDefinitionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_routineDefinitionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction::getter_isLABELorORG (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GGS_bool (false) ;
//---
  return result_outIsLABELorORG ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isLABELorORG (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isLABELorORG (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isNULL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction::getter_isNULL (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GGS_bool (false) ;
//---
  return result_outIsNULL ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isNULL (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isNULL (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_intermediate_instruction enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction::method_enterReferencedLabel (GGS_stringset & /* ioArgument_ioReferencedLabelSet */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterReferencedLabel (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                               GGS_stringset & io_ioReferencedLabelSet,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_enterReferencedLabel (io_ioReferencedLabelSet, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GGS_bool (false) ;
//---
  return result_outIsSkipping ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_isSkippingInstruction (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isSkippingInstruction (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@midrange_intermediate_instruction nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (true) ;
//---
  return result_outIsReachable ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_nextInstructionIsReachable (const cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_nextInstructionIsReachable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_intermediate_instruction defineLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction::method_defineLabel (GGS_symbolTableForOptimizations & /* ioArgument_ioRoutineSymbolTable */,
                                                                       const GGS_uint /* constinArgument_inLineIndex */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_defineLabel (cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                      GGS_symbolTableForOptimizations & io_ioRoutineSymbolTable,
                                      const GGS_uint constin_inLineIndex,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction) ;
    inObject->method_defineLabel (io_ioRoutineSymbolTable, constin_inLineIndex, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_intermediate_instruction_literalOperation optimizeMOVLW'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_optimizeMOVLW (const GGS_uint constinArgument_inLineIndex,
                                                                                             GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                                             GGS_bool & ioArgument_ioOptimizationsDone,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLiteralInstruction ().objectCompare (GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("midrange_optimizations.galgas3", 349)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_midrange_5F_intermediate_5F_instruction var_firstInstruction_16122 ;
      {
      routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 351)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_16122, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 351)) ;
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN var__16202 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN *> (var_firstInstruction_16122.ptr ())) ;
        if (nullptr == var__16202.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          {
          const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_3 = this ;
          const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_4 = this ;
          ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas3", 357)), temp_4.readProperty_mLiteralValue (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 356)) ;
          }
          ioArgument_ioOptimizationsDone = GGS_bool (true) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 361)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 361)).add_operation (GGS_string (": MOVLW followed by RETURN replaced by RETLW\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 361)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 361)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeMOVLW (cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                        const GGS_uint constin_inLineIndex,
                                        GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                        GGS_string & io_ioListFileContents,
                                        GGS_bool & io_ioOptimizationsDone,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation) ;
    inObject->method_optimizeMOVLW (constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_intermediate_incDecRegisterInCondition optimizeTestDecInc'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_optimizeTestDecInc (const GGS_symbolTableForOptimizations constinArgument_inSymbolTable,
                                                                                            const GGS_uint constinArgument_inLineIndex,
                                                                                            GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                                            GGS_bool & ioArgument_ioOptimizationsDone,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_line_17333 ;
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  GGS_bool joker_17338 ; // Joker input parameter
  constinArgument_inSymbolTable.method_searchKey (GGS_lstring::init_21__21_ (temp_0.readProperty_mTargetLabel (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 377)), inCompiler COMMA_HERE), var_line_17333, joker_17338, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 377)) ;
  GGS_midrange_5F_intermediate_5F_instruction var_firstInstruction_17469 ;
  {
  routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (var_line_17333.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 379)), ioArgument_ioGeneratedInstructionList, var_firstInstruction_17469, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 379)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    GGS_midrange_5F_intermediate_5F_JUMP var_jump_17572 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_firstInstruction_17469.ptr ())) ;
    if (nullptr == var_jump_17572.ptr ()) {
      test_1 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_1) {
      {
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mRegisterDescription (), var_jump_17572.readProperty_mTargetLabel ().readProperty_string (), temp_4.readProperty_mIncrement (), temp_5.readProperty_m_5F_W_5F_isDestination (), temp_6.readProperty_mBranchIfZero (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 385)) ;
      }
      ioArgument_ioOptimizationsDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 396)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 396)).add_operation (GGS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 396)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 396)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 397)) ;
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
        test_7 = temp_8.readProperty_mIncrement ().boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 399)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 401)) ;
      }
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
      ioArgument_ioListFileContents.plusAssignOperation(temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 403)) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_11 = this ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 405)) ;
        }
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_13 = this ;
        test_12 = temp_13.readProperty_mBranchIfZero ().boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 408)) ;
        }
      }
      if (GalgasBool::boolFalse == test_12) {
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 410)) ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (": branching to JUMP replaced by second JUMP label\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 412)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      GGS_midrange_5F_intermediate_5F_GOTO var_goto_18641 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_firstInstruction_17469.ptr ())) ;
      if (nullptr == var_goto_18641.ptr ()) {
        test_14 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_14) {
        {
        const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_15 = this ;
        const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_16 = this ;
        const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_17 = this ;
        const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_18 = this ;
        const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_19 = this ;
        ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (temp_15.readProperty_mInstructionLocation (), temp_16.readProperty_mRegisterDescription (), var_goto_18641.readProperty_mTargetLabel ().readProperty_string (), temp_17.readProperty_mIncrement (), temp_18.readProperty_m_5F_W_5F_isDestination (), temp_19.readProperty_mBranchIfZero (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 415)) ;
        }
        ioArgument_ioOptimizationsDone = GGS_bool (true) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 426)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 426)).add_operation (GGS_string (": label of "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 426)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 426)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 427)) ;
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_21 = this ;
          test_20 = temp_21.readProperty_mIncrement ().boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 429)) ;
          }
        }
        if (GalgasBool::boolFalse == test_20) {
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 431)) ;
        }
        const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_22 = this ;
        ioArgument_ioListFileContents.plusAssignOperation(temp_22.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 433)) ;
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_24 = this ;
          test_23 = temp_24.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 435)) ;
          }
        }
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_26 = this ;
          test_25 = temp_26.readProperty_mBranchIfZero ().boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 438)) ;
          }
        }
        if (GalgasBool::boolFalse == test_25) {
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 440)) ;
        }
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string (": branching to GOTO replaced by second JUMP label\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 442)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeTestDecInc (cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition * inObject,
                                             const GGS_symbolTableForOptimizations constin_inSymbolTable,
                                             const GGS_uint constin_inLineIndex,
                                             GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                             GGS_string & io_ioListFileContents,
                                             GGS_bool & io_ioOptimizationsDone,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition) ;
    inObject->method_optimizeTestDecInc (constin_inSymbolTable, constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@midrange_intermediate_instruction_BitTestSkip optimizeBitTestSkip'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_optimizeBitTestSkip (const GGS_uint constinArgument_inLineIndex,
                                                                                              GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                              GGS_string & ioArgument_ioListFileContents,
                                                                                              GGS_bool & ioArgument_ioOptimizationsDone,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_jumpLabel_20056 = GGS_string::makeEmptyString () ;
  GGS_bool var_ok_20094 = GGS_bool (false) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_midrange_5F_intermediate_5F_JUMP var_jump_20114 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 458)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 458)).ptr ())) ;
    if (nullptr == var_jump_20114.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      var_jumpLabel_20056 = var_jump_20114.readProperty_mTargetLabel ().readProperty_string () ;
      var_ok_20094 = GGS_bool (true) ;
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_ok_20094.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_midrange_5F_intermediate_5F_actualInstruction var_instruction_20478 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 467)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 467)).ptr ())) ;
        if (nullptr == var_instruction_20478.ptr ()) {
          test_2 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_2) {
          var_ok_20094 = GGS_bool (ComparisonKind::equal, callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) var_instruction_20478.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 470)).objectCompare (GGS_uint (uint32_t (1U)))) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        var_ok_20094 = GGS_bool (false) ;
      }
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_ok_20094.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GGS_stringset var_reachedLabelSet_21092 ;
      {
      GGS_midrange_5F_intermediate_5F_instruction joker_21084 ; // Joker input parameter
      routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 478)), ioArgument_ioGeneratedInstructionList, joker_21084, var_reachedLabelSet_21092, inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 478)) ;
      }
      var_ok_20094 = var_reachedLabelSet_21092.getter_hasKey (var_jumpLabel_20056 COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 479)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_ok_20094.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_5 = this ;
      const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_6 = this ;
      const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_7 = this ;
      const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_8 = this ;
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), temp_6.readProperty_mSkipIfSet ().operator_not (SOURCE_FILE ("midrange_optimizations.galgas3", 487)), temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mBitNumber (), inCompiler COMMA_HERE), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 484)) ;
      }
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 495)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 493)) ;
      }
      ioArgument_ioOptimizationsDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  lines ").add_operation (constinArgument_inLineIndex.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 500)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 500)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 500)).add_operation (constinArgument_inLineIndex.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 500)).getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 500)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 500)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 500)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" bit test skip, following by a JUMP skipping next instruction, is complemented\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 501)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_optimizeBitTestSkip (cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip * inObject,
                                              const GGS_uint constin_inLineIndex,
                                              GGS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                              GGS_string & io_ioListFileContents,
                                              GGS_bool & io_ioOptimizationsDone,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    inObject->method_optimizeBitTestSkip (constin_inLineIndex, io_ioGeneratedInstructionList, io_ioListFileContents, io_ioOptimizationsDone, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@clusterList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_clusterList : public CollectionElementPtr {
  public: GGS_clusterList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_clusterList (const GGS_ipic_31__38_BlockList & in_mBlockList
                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_clusterList (const GGS_clusterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_clusterList::CollectionElementPtr_clusterList (const GGS_ipic_31__38_BlockList & in_mBlockList
                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mBlockList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_clusterList::CollectionElementPtr_clusterList (const GGS_clusterList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mBlockList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_clusterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_clusterList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_clusterList (mObject.mProperty_mBlockList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @clusterList
//--------------------------------------------------------------------------------------------------

GGS_clusterList::GGS_clusterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList::GGS_clusterList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_clusterList * p = (CollectionElementPtr_clusterList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_clusterList) ;
    const GGS_clusterList_2E_element element (p->mObject.mProperty_mBlockList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                 const GGS_ipic_31__38_BlockList & in_mBlockList
                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_clusterList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_clusterList (in_mBlockList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_clusterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_clusterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::description (String & ioString,
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
      ioString.appendString ("mBlockList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBlockList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_clusterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::plusPlusAssignOperation (const GGS_clusterList_2E_element & inValue
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::class_func_listWithValue (const GGS_ipic_31__38_BlockList & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  const GGS_clusterList_2E_element element (inOperand0) ;
  GGS_clusterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::addAssignOperation (const GGS_ipic_31__38_BlockList & inOperand0
                                          COMMA_LOCATION_ARGS) {
  const GGS_clusterList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::setter_append (const GGS_ipic_31__38_BlockList inOperand0,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  const GGS_clusterList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::setter_insertAtIndex (const GGS_ipic_31__38_BlockList inOperand0,
                                            const GGS_uint inInsertionIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_clusterList_2E_element newElement (inOperand0) ;
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

void GGS_clusterList::setter_removeAtIndex (GGS_ipic_31__38_BlockList & outOperand0,
                                            const GGS_uint inRemoveIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBlockList ;
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

void GGS_clusterList::setter_popFirst (GGS_ipic_31__38_BlockList & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBlockList ;
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

void GGS_clusterList::setter_popLast (GGS_ipic_31__38_BlockList & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBlockList ;
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

void GGS_clusterList::method_first (GGS_ipic_31__38_BlockList & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBlockList ;
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

void GGS_clusterList::method_last (GGS_ipic_31__38_BlockList & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBlockList ;
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

GGS_clusterList GGS_clusterList::add_operation (const GGS_clusterList & inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_clusterList result ;
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

GGS_clusterList GGS_clusterList::subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_clusterList result ;
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

GGS_clusterList GGS_clusterList::getter_subListWithRange (const GGS_range & inRange,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_clusterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_clusterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_clusterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList::plusAssignOperation (const GGS_clusterList inList,
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

void GGS_clusterList::setter_setMBlockListAtIndex (GGS_ipic_31__38_BlockList inOperand,
                                                   GGS_uint inIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBlockList = inOperand ;
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
  
GGS_ipic_31__38_BlockList GGS_clusterList::getter_mBlockListAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_ipic_31__38_BlockList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBlockList ;
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
// Down Enumerator for @clusterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_clusterList::DownEnumerator_clusterList (const GGS_clusterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList_2E_element DownEnumerator_clusterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList DownEnumerator_clusterList::current_mBlockList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlockList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @clusterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_clusterList::UpEnumerator_clusterList (const GGS_clusterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList_2E_element UpEnumerator_clusterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ipic_31__38_BlockList UpEnumerator_clusterList::current_mBlockList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlockList ;
}




//--------------------------------------------------------------------------------------------------
//     @clusterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_clusterList ("clusterList",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_clusterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_clusterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_clusterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_clusterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList GGS_clusterList::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_clusterList result ;
  const GGS_clusterList * p = (const GGS_clusterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_clusterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("clusterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @neededConversionForClusterOrder
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder::GGS_neededConversionForClusterOrder (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder::~ GGS_neededConversionForClusterOrder (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder::GGS_neededConversionForClusterOrder (const GGS_neededConversionForClusterOrder & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder & GGS_neededConversionForClusterOrder::operator = (const GGS_neededConversionForClusterOrder & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder GGS_neededConversionForClusterOrder::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_neededConversionForClusterOrder::getter_hasKey (const GGS_string & inKey
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_neededConversionForClusterOrder::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                    const GGS_uint & inLevel
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_neededConversionForClusterOrder::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_neededConversionForClusterOrder::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_neededConversionForClusterOrder::getter_locationForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_neededConversionForClusterOrder::getter_keyList (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_neededConversionForClusterOrder::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_neededConversionForClusterOrder_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::performInsert (const GGS_neededConversionForClusterOrder_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_neededConversionForClusterOrder_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element>
GGS_neededConversionForClusterOrder::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_neededConversionForClusterOrder::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element>>
GGS_neededConversionForClusterOrder::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_neededConversionForClusterOrder::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element_3F_ GGS_neededConversionForClusterOrder
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_neededConversionForClusterOrder_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_neededConversionForClusterOrder_2E_element_3F_::init_nil () ;
    }else{
      GGS_neededConversionForClusterOrder_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mConversions = info->mProperty_mConversions ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder GGS_neededConversionForClusterOrder::class_func_mapWithMapToOverride (const GGS_neededConversionForClusterOrder & inMapToOverride
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_neededConversionForClusterOrder_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder GGS_neededConversionForClusterOrder::getter_overriddenMap (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_neededConversionForClusterOrder result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::setter_insertKey (GGS_lstring inLKey,
                                                            GGS_uint inArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_neededConversionForClusterOrder_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::method_searchKey (GGS_lstring inLKey,
                                                            GGS_uint & outArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' key is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mConversions ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_neededConversionForClusterOrder::getter_mConversionsForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mConversions ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::setter_setMConversionsForKey (GGS_uint inValue,
                                                                        GGS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_neededConversionForClusterOrder_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mConversions = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_neededConversionForClusterOrder_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element>> & inArray,
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
    ioString.appendString ("mConversions:") ;
    inArray (i COMMA_HERE)->mProperty_mConversions.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_neededConversionForClusterOrder::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_neededConversionForClusterOrder_2E_element>> array = sortedInfoArray () ;
    GGS_neededConversionForClusterOrder_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_neededConversionForClusterOrder_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_neededConversionForClusterOrder_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @neededConversionForClusterOrder
//--------------------------------------------------------------------------------------------------

DownEnumerator_neededConversionForClusterOrder::DownEnumerator_neededConversionForClusterOrder (const GGS_neededConversionForClusterOrder & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element DownEnumerator_neededConversionForClusterOrder::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_neededConversionForClusterOrder::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_neededConversionForClusterOrder::current_mConversions (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConversions ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @neededConversionForClusterOrder
//--------------------------------------------------------------------------------------------------

UpEnumerator_neededConversionForClusterOrder::UpEnumerator_neededConversionForClusterOrder (const GGS_neededConversionForClusterOrder & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder_2E_element UpEnumerator_neededConversionForClusterOrder::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_neededConversionForClusterOrder::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_neededConversionForClusterOrder::current_mConversions (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mConversions ;
}


//--------------------------------------------------------------------------------------------------
//     @neededConversionForClusterOrder generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_neededConversionForClusterOrder ("neededConversionForClusterOrder",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_neededConversionForClusterOrder::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_neededConversionForClusterOrder ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_neededConversionForClusterOrder::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_neededConversionForClusterOrder (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_neededConversionForClusterOrder GGS_neededConversionForClusterOrder::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_neededConversionForClusterOrder result ;
  const GGS_neededConversionForClusterOrder * p = (const GGS_neededConversionForClusterOrder *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_neededConversionForClusterOrder *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("neededConversionForClusterOrder", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_intermediate_instruction generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateAssemblyCode (cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                               const GGS_baseline_5F_intermediate_5F_registerExpression constin_inSTATUSregister,
                                               const GGS_bitSliceTable constin_inStatusRegisterBitSliceTable,
                                               GGS_baseline_5F_assembly_5F_instructionList & io_ioAssemblyInstructionList,
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
//  Map type @baseline_5F_declaredRoutineMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap::GGS_baseline_5F_declaredRoutineMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap::~ GGS_baseline_5F_declaredRoutineMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap::GGS_baseline_5F_declaredRoutineMap (const GGS_baseline_5F_declaredRoutineMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap & GGS_baseline_5F_declaredRoutineMap::operator = (const GGS_baseline_5F_declaredRoutineMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap GGS_baseline_5F_declaredRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_declaredRoutineMap::getter_hasKey (const GGS_string & inKey
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_declaredRoutineMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                   const GGS_uint & inLevel
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_declaredRoutineMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_declaredRoutineMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_declaredRoutineMap::getter_locationForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_baseline_5F_declaredRoutineMap::getter_keyList (Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_declaredRoutineMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_declaredRoutineMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap::performInsert (const GGS_baseline_5F_declaredRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_baseline_5F_declaredRoutineMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element>
GGS_baseline_5F_declaredRoutineMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_baseline_5F_declaredRoutineMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element>>
GGS_baseline_5F_declaredRoutineMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_baseline_5F_declaredRoutineMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ GGS_baseline_5F_declaredRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_declaredRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_baseline_5F_declaredRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_baseline_5F_declaredRoutineMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap GGS_baseline_5F_declaredRoutineMap::class_func_mapWithMapToOverride (const GGS_baseline_5F_declaredRoutineMap & inMapToOverride
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_declaredRoutineMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap GGS_baseline_5F_declaredRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_declaredRoutineMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap::setter_insertKey (GGS_lstring inLKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_declaredRoutineMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_declaredRoutineMap::method_searchKey (GGS_lstring inLKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element> info ;
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

static void GGS_baseline_5F_declaredRoutineMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element>> & inArray,
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

void GGS_baseline_5F_declaredRoutineMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_baseline_5F_declaredRoutineMap_2E_element>> array = sortedInfoArray () ;
    GGS_baseline_5F_declaredRoutineMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_baseline_5F_declaredRoutineMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_baseline_5F_declaredRoutineMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @baseline_5F_declaredRoutineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_baseline_5F_declaredRoutineMap::DownEnumerator_baseline_5F_declaredRoutineMap (const GGS_baseline_5F_declaredRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element DownEnumerator_baseline_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_baseline_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @baseline_5F_declaredRoutineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_baseline_5F_declaredRoutineMap::UpEnumerator_baseline_5F_declaredRoutineMap (const GGS_baseline_5F_declaredRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap_2E_element UpEnumerator_baseline_5F_declaredRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_baseline_5F_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @baseline_declaredRoutineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ("baseline_declaredRoutineMap",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_declaredRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_declaredRoutineMap GGS_baseline_5F_declaredRoutineMap::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_declaredRoutineMap result ;
  const GGS_baseline_5F_declaredRoutineMap * p = (const GGS_baseline_5F_declaredRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_instruction shouldTerminateWithMOVLW'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction::method_shouldTerminateWithMOVLW (const GGS_string constinArgument_inErrorMessage,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), constinArgument_inErrorMessage, fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 16)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldTerminateWithMOVLW (cPtr_baseline_5F_instruction * inObject,
                                                   const GGS_string constin_inErrorMessage,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_shouldTerminateWithMOVLW (constin_inErrorMessage, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@baseline_instruction shouldNotContinueInSequence'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction::method_shouldNotContinueInSequence (const GGS_string constinArgument_inErrorMessage,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction temp_0 = this ;
  GenericArray <FixItDescription> fixItArray1 ;
  inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), constinArgument_inErrorMessage, fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 62)) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_shouldNotContinueInSequence (cPtr_baseline_5F_instruction * inObject,
                                                      const GGS_string constin_inErrorMessage,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_shouldNotContinueInSequence (constin_inErrorMessage, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak GGS_baseline_5F_intermediate_5F_instruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction GGS_baseline_5F_intermediate_5F_instruction_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction * p = (cPtr_baseline_5F_intermediate_5F_instruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction GGS_baseline_5F_intermediate_5F_instruction_2E_weak::bang_baseline_5F_intermediate_5F_instruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction) ;
      result = GGS_baseline_5F_intermediate_5F_instruction ((cPtr_baseline_5F_intermediate_5F_instruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak ("baseline_intermediate_instruction.weak",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_2E_weak GGS_baseline_5F_intermediate_5F_instruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@baseline_5F_intermediate_5F_instructionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_baseline_5F_intermediate_5F_instructionList : public CollectionElementPtr {
  public: GGS_baseline_5F_intermediate_5F_instructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_baseline_5F_intermediate_5F_instructionList::CollectionElementPtr_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_baseline_5F_intermediate_5F_instructionList::CollectionElementPtr_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_baseline_5F_intermediate_5F_instructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_baseline_5F_intermediate_5F_instructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_baseline_5F_intermediate_5F_instructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @baseline_5F_intermediate_5F_instructionList
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList::GGS_baseline_5F_intermediate_5F_instructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList::GGS_baseline_5F_intermediate_5F_instructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_baseline_5F_intermediate_5F_instructionList * p = (CollectionElementPtr_baseline_5F_intermediate_5F_instructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_baseline_5F_intermediate_5F_instructionList) ;
    const GGS_baseline_5F_intermediate_5F_instructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                 const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction
                                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_baseline_5F_intermediate_5F_instructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_baseline_5F_intermediate_5F_instructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_baseline_5F_intermediate_5F_instructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::description (String & ioString,
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

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::plusPlusAssignOperation (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::class_func_listWithValue (const GGS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instructionList_2E_element element (inOperand0) ;
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::addAssignOperation (const GGS_baseline_5F_intermediate_5F_instruction & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::setter_append (const GGS_baseline_5F_intermediate_5F_instruction inOperand0,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::setter_insertAtIndex (const GGS_baseline_5F_intermediate_5F_instruction inOperand0,
                                                                            const GGS_uint inInsertionIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instructionList_2E_element newElement (inOperand0) ;
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

void GGS_baseline_5F_intermediate_5F_instructionList::setter_removeAtIndex (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_baseline_5F_intermediate_5F_instructionList::setter_popFirst (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_baseline_5F_intermediate_5F_instructionList::setter_popLast (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_baseline_5F_intermediate_5F_instructionList::method_first (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
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

void GGS_baseline_5F_intermediate_5F_instructionList::method_last (GGS_baseline_5F_intermediate_5F_instruction & outOperand0,
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

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::add_operation (const GGS_baseline_5F_intermediate_5F_instructionList & inOperand,
                                                                                                                Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
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

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::subList (const int32_t inStart,
                                                                                                          const int32_t inLength,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
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

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList::plusAssignOperation (const GGS_baseline_5F_intermediate_5F_instructionList inList,
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

void GGS_baseline_5F_intermediate_5F_instructionList::setter_setMInstructionAtIndex (GGS_baseline_5F_intermediate_5F_instruction inOperand,
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
  
GGS_baseline_5F_intermediate_5F_instruction GGS_baseline_5F_intermediate_5F_instructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction result ;
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
// Down Enumerator for @baseline_5F_intermediate_5F_instructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_baseline_5F_intermediate_5F_instructionList::DownEnumerator_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element DownEnumerator_baseline_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction DownEnumerator_baseline_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @baseline_5F_intermediate_5F_instructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_baseline_5F_intermediate_5F_instructionList::UpEnumerator_baseline_5F_intermediate_5F_instructionList (const GGS_baseline_5F_intermediate_5F_instructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element UpEnumerator_baseline_5F_intermediate_5F_instructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction UpEnumerator_baseline_5F_intermediate_5F_instructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ("baseline_intermediate_instructionList",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList GGS_baseline_5F_intermediate_5F_instructionList::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instructionList result ;
  const GGS_baseline_5F_intermediate_5F_instructionList * p = (const GGS_baseline_5F_intermediate_5F_instructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_NULL reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_NULL::objectCompare (const GGS_baseline_5F_intermediate_5F_NULL & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_NULL::GGS_baseline_5F_intermediate_5F_NULL (void) :
GGS_baseline_5F_intermediate_5F_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_NULL * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_NULL (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_NULL_init (inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_NULL result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::
baseline_5F_intermediate_5F_NULL_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL::GGS_baseline_5F_intermediate_5F_NULL (const cPtr_baseline_5F_intermediate_5F_NULL * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_NULL) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_NULL class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_NULL::cPtr_baseline_5F_intermediate_5F_NULL (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_NULL::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

void cPtr_baseline_5F_intermediate_5F_NULL::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@baseline_intermediate_NULL]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_NULL::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_NULL (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_NULL::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_NULL generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ("baseline_intermediate_NULL",
                                                                                     & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_NULL::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_NULL::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_NULL (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL result ;
  const GGS_baseline_5F_intermediate_5F_NULL * p = (const GGS_baseline_5F_intermediate_5F_NULL *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_NULL *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_NULL", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_NULL_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_NULL_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_NULL_2E_weak::GGS_baseline_5F_intermediate_5F_NULL_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak & GGS_baseline_5F_intermediate_5F_NULL_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_NULL & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak::GGS_baseline_5F_intermediate_5F_NULL_2E_weak (const GGS_baseline_5F_intermediate_5F_NULL & inSource) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak GGS_baseline_5F_intermediate_5F_NULL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_NULL result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_NULL * p = (cPtr_baseline_5F_intermediate_5F_NULL *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_NULL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL GGS_baseline_5F_intermediate_5F_NULL_2E_weak::bang_baseline_5F_intermediate_5F_NULL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_NULL result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_NULL) ;
      result = GGS_baseline_5F_intermediate_5F_NULL ((cPtr_baseline_5F_intermediate_5F_NULL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_NULL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2E_weak ("baseline_intermediate_NULL.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_NULL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_NULL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_NULL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_NULL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_NULL_2E_weak GGS_baseline_5F_intermediate_5F_NULL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_NULL_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_NULL_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_NULL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_NULL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_NULL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo::GGS_baseline_5F_intermediate_5F_pseudo (void) :
GGS_baseline_5F_intermediate_5F_instruction () {
}


void cPtr_baseline_5F_intermediate_5F_pseudo::
baseline_5F_intermediate_5F_pseudo_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo::GGS_baseline_5F_intermediate_5F_pseudo (const cPtr_baseline_5F_intermediate_5F_pseudo * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo::cPtr_baseline_5F_intermediate_5F_pseudo (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ("baseline_intermediate_pseudo",
                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo GGS_baseline_5F_intermediate_5F_pseudo::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo result ;
  const GGS_baseline_5F_intermediate_5F_pseudo * p = (const GGS_baseline_5F_intermediate_5F_pseudo *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo & inSource) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_pseudo result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_pseudo * p = (cPtr_baseline_5F_intermediate_5F_pseudo *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_pseudo (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo ((cPtr_baseline_5F_intermediate_5F_pseudo *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak ("baseline_intermediate_pseudo.weak",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_pseudo_5F_PAGE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (void) :
GGS_baseline_5F_intermediate_5F_pseudo () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::
init_21_ (const GGS_uint & in_mPage,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_pseudo_5F_PAGE_init_21_ (in_mPage, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::
baseline_5F_intermediate_5F_pseudo_5F_PAGE_init_21_ (const GGS_uint & in_mPage,
                                                     Compiler * /* inCompiler */) {
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_pseudo (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::readProperty_mPage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
    return p->mProperty_mPage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_pseudo_PAGE class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mPage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (const GGS_uint & in_mPage,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_pseudo (inCompiler COMMA_THERE),
mProperty_mPage () {
  mProperty_mPage = in_mPage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_pseudo_PAGE:") ;
  mProperty_mPage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE (mProperty_mPage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_pseudo::printNonNullClassInstanceProperties () ;
    mProperty_mPage.printNonNullClassInstanceProperties ("mPage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_PAGE generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ("baseline_intermediate_pseudo_PAGE",
                                                                                               & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_PAGE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_PAGE.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak ("baseline_intermediate_pseudo_PAGE.weak",
                                                                                                       & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_PAGE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_LABEL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ("baseline_intermediate_pseudo_LABEL.weak",
                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_LABEL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_BEGIN_ROUTINE.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak ("baseline_intermediate_pseudo_BEGIN_ROUTINE.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_BEGIN_ROUTINE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak & GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE & inSource) :
GGS_baseline_5F_intermediate_5F_pseudo_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE * p = (cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::bang_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE) ;
      result = GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_pseudo_END_ROUTINE.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak ("baseline_intermediate_pseudo_END_ROUTINE.weak",
                                                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_pseudo_END_ROUTINE.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_actualInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_actualInstruction::objectCompare (const GGS_baseline_5F_intermediate_5F_actualInstruction & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_actualInstruction::GGS_baseline_5F_intermediate_5F_actualInstruction (void) :
GGS_baseline_5F_intermediate_5F_instruction () {
}


void cPtr_baseline_5F_intermediate_5F_actualInstruction::
baseline_5F_intermediate_5F_actualInstruction_init_21_ (const GGS_location & in_mInstructionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction::GGS_baseline_5F_intermediate_5F_actualInstruction (const cPtr_baseline_5F_intermediate_5F_actualInstruction * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_baseline_5F_intermediate_5F_actualInstruction::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (cPtr_baseline_5F_intermediate_5F_actualInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_actualInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_actualInstruction::cPtr_baseline_5F_intermediate_5F_actualInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_actualInstruction::cPtr_baseline_5F_intermediate_5F_actualInstruction (const GGS_location & in_mInstructionLocation,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_instruction (inCompiler COMMA_THERE),
mProperty_mInstructionLocation () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_actualInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ("baseline_intermediate_actualInstruction",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_actualInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_actualInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_actualInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction GGS_baseline_5F_intermediate_5F_actualInstruction::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_actualInstruction result ;
  const GGS_baseline_5F_intermediate_5F_actualInstruction * p = (const GGS_baseline_5F_intermediate_5F_actualInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_actualInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_actualInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak & GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_actualInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (const GGS_baseline_5F_intermediate_5F_actualInstruction & inSource) :
GGS_baseline_5F_intermediate_5F_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_actualInstruction result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_actualInstruction * p = (cPtr_baseline_5F_intermediate_5F_actualInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_actualInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::bang_baseline_5F_intermediate_5F_actualInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_actualInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_actualInstruction) ;
      result = GGS_baseline_5F_intermediate_5F_actualInstruction ((cPtr_baseline_5F_intermediate_5F_actualInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_actualInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak ("baseline_intermediate_actualInstruction.weak",
                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_actualInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_FD reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FD::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FD::GGS_baseline_5F_intermediate_5F_instruction_5F_FD (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_bool & in_m_5F_W_5F_isDestination,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_m_5F_W_5F_isDestination, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::
baseline_5F_intermediate_5F_instruction_5F_FD_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                    const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD::GGS_baseline_5F_intermediate_5F_instruction_5F_FD (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code GGS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_instruction_5F_FD::readProperty_m_5F_W_5F_isDestination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
    return p->mProperty_m_5F_W_5F_isDestination ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_FD class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code & in_mInstruction,
                                                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GGS_bool & in_m_5F_W_5F_isDestination,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_m_5F_W_5F_isDestination () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_m_5F_W_5F_isDestination = in_m_5F_W_5F_isDestination ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_FD:") ;
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

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_m_5F_W_5F_isDestination, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_m_5F_W_5F_isDestination.printNonNullClassInstanceProperties ("m_W_isDestination") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_FD generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ("baseline_intermediate_instruction_FD",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FD * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_FD (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FD) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_FD ((cPtr_baseline_5F_intermediate_5F_instruction_5F_FD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_FD.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak ("baseline_intermediate_instruction_FD.weak",
                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_F reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_F::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_F::GGS_baseline_5F_intermediate_5F_instruction_5F_F (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                  const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_F * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::
baseline_5F_intermediate_5F_instruction_5F_F_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                               const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                               const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F::GGS_baseline_5F_intermediate_5F_instruction_5F_F (const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_F_5F_instruction_5F_base_5F_code GGS_baseline_5F_intermediate_5F_instruction_5F_F::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_F_5F_instruction_5F_base_5F_code () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_F::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_F class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_F::cPtr_baseline_5F_intermediate_5F_instruction_5F_F (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_F::cPtr_baseline_5F_intermediate_5F_instruction_5F_F (const GGS_location & in_mInstructionLocation,
                                                                                                      const GGS_baseline_5F_F_5F_instruction_5F_base_5F_code & in_mInstruction,
                                                                                                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_F:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegisterDescription.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_instruction_5F_F::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_F generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ("baseline_intermediate_instruction_F",
                                                                                                 & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_F::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_F::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_F (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_F *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_F *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_F", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_F & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_F * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_F (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_F) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_F ((cPtr_baseline_5F_intermediate_5F_instruction_5F_F *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_F.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak ("baseline_intermediate_instruction_F.weak",
                                                                                                         & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_F_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_F.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_FB reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FB::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FB::GGS_baseline_5F_intermediate_5F_instruction_5F_FB (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::
baseline_5F_intermediate_5F_instruction_5F_FB_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                    const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                    const GGS_uint & in_mBitNumber,
                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB::GGS_baseline_5F_intermediate_5F_instruction_5F_FB (const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_bit_5F_oriented_5F_op GGS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_bit_5F_oriented_5F_op () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instruction_5F_FB::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_FB class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_baseline_5F_bit_5F_oriented_5F_op & in_mInstruction,
                                                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                        const GGS_uint & in_mBitNumber,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_FB:") ;
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

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_FB generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ("baseline_intermediate_instruction_FB",
                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_FB * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_FB (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_FB) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_FB ((cPtr_baseline_5F_intermediate_5F_instruction_5F_FB *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_FB.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak ("baseline_intermediate_instruction_FB.weak",
                                                                                                          & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_FB_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_FB.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_BitTestSkip reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_bool & in_mSkipIfSet,
                      const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                      const GGS_uint & in_mBitNumber,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (in_mInstructionLocation, in_mSkipIfSet, in_mRegisterDescription, in_mBitNumber, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::
baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                             const GGS_bool & in_mSkipIfSet,
                                                                             const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                             const GGS_uint & in_mBitNumber,
                                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mSkipIfSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mSkipIfSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_registerExpression GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mRegisterDescription (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_intermediate_5F_registerExpression () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mRegisterDescription ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::readProperty_mBitNumber (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
    return p->mProperty_mBitNumber ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_BitTestSkip class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (const GGS_location & in_mInstructionLocation,
                                                                                                                          const GGS_bool & in_mSkipIfSet,
                                                                                                                          const GGS_baseline_5F_intermediate_5F_registerExpression & in_mRegisterDescription,
                                                                                                                          const GGS_uint & in_mBitNumber,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSkipIfSet (),
mProperty_mRegisterDescription (),
mProperty_mBitNumber () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSkipIfSet = in_mSkipIfSet ;
  mProperty_mRegisterDescription = in_mRegisterDescription ;
  mProperty_mBitNumber = in_mBitNumber ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_BitTestSkip:") ;
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

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (mProperty_mInstructionLocation, mProperty_mSkipIfSet, mProperty_mRegisterDescription, mProperty_mBitNumber, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mSkipIfSet.printNonNullClassInstanceProperties ("mSkipIfSet") ;
    mProperty_mRegisterDescription.printNonNullClassInstanceProperties ("mRegisterDescription") ;
    mProperty_mBitNumber.printNonNullClassInstanceProperties ("mBitNumber") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_BitTestSkip generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ("baseline_intermediate_instruction_BitTestSkip",
                                                                                                           & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_BitTestSkip", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip ((cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_BitTestSkip.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ("baseline_intermediate_instruction_BitTestSkip.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_BitTestSkip.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak & GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_GOTO & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (const GGS_baseline_5F_intermediate_5F_GOTO & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_GOTO result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_GOTO * p = (cPtr_baseline_5F_intermediate_5F_GOTO *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_GOTO (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::bang_baseline_5F_intermediate_5F_GOTO_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_GOTO result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_GOTO) ;
      result = GGS_baseline_5F_intermediate_5F_GOTO ((cPtr_baseline_5F_intermediate_5F_GOTO *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_GOTO.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2E_weak ("baseline_intermediate_GOTO.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_GOTO_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_GOTO_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_GOTO_2E_weak GGS_baseline_5F_intermediate_5F_GOTO_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_GOTO_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_GOTO_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_GOTO.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak & GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_JUMP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (const GGS_baseline_5F_intermediate_5F_JUMP & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_JUMP result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_JUMP * p = (cPtr_baseline_5F_intermediate_5F_JUMP *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_JUMP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::bang_baseline_5F_intermediate_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_JUMP) ;
      result = GGS_baseline_5F_intermediate_5F_JUMP ((cPtr_baseline_5F_intermediate_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_JUMP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2E_weak ("baseline_intermediate_JUMP.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JUMP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JUMP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JUMP_2E_weak GGS_baseline_5F_intermediate_5F_JUMP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JUMP_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JUMP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JUMP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_CALL_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_CALL_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_CALL_2E_weak::GGS_baseline_5F_intermediate_5F_CALL_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak & GGS_baseline_5F_intermediate_5F_CALL_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_CALL & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak::GGS_baseline_5F_intermediate_5F_CALL_2E_weak (const GGS_baseline_5F_intermediate_5F_CALL & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak GGS_baseline_5F_intermediate_5F_CALL_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_CALL result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_CALL * p = (cPtr_baseline_5F_intermediate_5F_CALL *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_CALL (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL GGS_baseline_5F_intermediate_5F_CALL_2E_weak::bang_baseline_5F_intermediate_5F_CALL_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_CALL result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_CALL) ;
      result = GGS_baseline_5F_intermediate_5F_CALL ((cPtr_baseline_5F_intermediate_5F_CALL *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_CALL.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2E_weak ("baseline_intermediate_CALL.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_CALL_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_CALL_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_CALL_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_CALL_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_CALL_2E_weak GGS_baseline_5F_intermediate_5F_CALL_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_CALL_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_CALL_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_CALL_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_CALL_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_CALL.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_JSR_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_JSR_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_JSR_2E_weak::GGS_baseline_5F_intermediate_5F_JSR_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak & GGS_baseline_5F_intermediate_5F_JSR_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_JSR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak::GGS_baseline_5F_intermediate_5F_JSR_2E_weak (const GGS_baseline_5F_intermediate_5F_JSR & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak GGS_baseline_5F_intermediate_5F_JSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_JSR result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_JSR * p = (cPtr_baseline_5F_intermediate_5F_JSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_JSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR GGS_baseline_5F_intermediate_5F_JSR_2E_weak::bang_baseline_5F_intermediate_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_JSR) ;
      result = GGS_baseline_5F_intermediate_5F_JSR ((cPtr_baseline_5F_intermediate_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_JSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2E_weak ("baseline_intermediate_JSR.weak",
                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_JSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_JSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_JSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_JSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_JSR_2E_weak GGS_baseline_5F_intermediate_5F_JSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_JSR_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_JSR_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_JSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_JSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_JSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_WO_5F_OPERAND reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::objectCompare (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_WO_5F_OPERAND_init_21__21_ (in_mInstructionLocation, in_mInstruction, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::
baseline_5F_intermediate_5F_WO_5F_OPERAND_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_WO_5F_OPERAND_5F_group GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_WO_5F_OPERAND_5F_group () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_WO_OPERAND class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (const GGS_location & in_mInstructionLocation,
                                                                                                const GGS_baseline_5F_WO_5F_OPERAND_5F_group & in_mInstruction,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_WO_OPERAND:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND (mProperty_mInstructionLocation, mProperty_mInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_WO_OPERAND generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ("baseline_intermediate_WO_OPERAND",
                                                                                              & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_WO_OPERAND", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak & GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND * p = (cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::bang_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND) ;
      result = GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND ((cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_WO_OPERAND.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak ("baseline_intermediate_WO_OPERAND.weak",
                                                                                                      & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_WO_OPERAND.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak & GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_TRIS & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (const GGS_baseline_5F_intermediate_5F_TRIS & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_TRIS_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_TRIS result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_TRIS * p = (cPtr_baseline_5F_intermediate_5F_TRIS *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_TRIS (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::bang_baseline_5F_intermediate_5F_TRIS_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_TRIS result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_TRIS) ;
      result = GGS_baseline_5F_intermediate_5F_TRIS ((cPtr_baseline_5F_intermediate_5F_TRIS *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_TRIS.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2E_weak ("baseline_intermediate_TRIS.weak",
                                                                                             & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_TRIS_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_TRIS_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_TRIS_2E_weak GGS_baseline_5F_intermediate_5F_TRIS_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_TRIS_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_TRIS_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_TRIS.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @baseline_5F_intermediate_5F_instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                  const GGS_uint & in_mLiteralValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->baseline_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mInstruction, in_mLiteralValue, inCompiler) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::
baseline_5F_intermediate_5F_instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                              const GGS_uint & in_mLiteralValue,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * inSourcePtr) :
GGS_baseline_5F_intermediate_5F_actualInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_literal_5F_instruction_5F_opcode GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_baseline_5F_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::readProperty_mLiteralValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseline_intermediate_instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                                                    const GGS_baseline_5F_literal_5F_instruction_5F_opcode & in_mInstruction,
                                                                                                                                    const GGS_uint & in_mLiteralValue,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_baseline_5F_intermediate_5F_actualInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstruction (),
mProperty_mLiteralValue () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstruction = in_mInstruction ;
  mProperty_mLiteralValue = in_mLiteralValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@baseline_intermediate_instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mInstruction, mProperty_mLiteralValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_baseline_5F_intermediate_5F_actualInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstruction.printNonNullClassInstanceProperties ("mInstruction") ;
    mProperty_mLiteralValue.printNonNullClassInstanceProperties ("mLiteralValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_literalOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ("baseline_intermediate_instruction_literalOperation",
                                                                                                                & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation ((cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_literalOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ("baseline_intermediate_instruction_literalOperation.weak",
                                                                                                                        & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak & GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP * p = (cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::bang_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP) ;
      result = GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP ((cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instruction_MNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ("baseline_intermediate_instruction_MNOP.weak",
                                                                                                            & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::objectCompare (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & inOperand) const {
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

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (void) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak & GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::operator = (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition & inSource) :
GGS_baseline_5F_intermediate_5F_actualInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::unwrappedValue (void) const {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (isValid ()) {
    const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition * p = (cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) ptr () ;
    if (nullptr != p) {
      result = GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::bang_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition) ;
      result = GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_incDecRegisterInCondition.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ("baseline_intermediate_incDecRegisterInCondition.weak",
                                                                                                                  & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_actualInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak result ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak * p = (const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_incDecRegisterInCondition.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @bootloaderReservedRAMmap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap::GGS_bootloaderReservedRAMmap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap::~ GGS_bootloaderReservedRAMmap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap::GGS_bootloaderReservedRAMmap (const GGS_bootloaderReservedRAMmap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap & GGS_bootloaderReservedRAMmap::operator = (const GGS_bootloaderReservedRAMmap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap GGS_bootloaderReservedRAMmap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_bootloaderReservedRAMmap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bootloaderReservedRAMmap::getter_hasKey (const GGS_string & inKey
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bootloaderReservedRAMmap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                             const GGS_uint & inLevel
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bootloaderReservedRAMmap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bootloaderReservedRAMmap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_bootloaderReservedRAMmap::getter_locationForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_bootloaderReservedRAMmap::getter_keyList (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bootloaderReservedRAMmap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_bootloaderReservedRAMmap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap::performInsert (const GGS_bootloaderReservedRAMmap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_bootloaderReservedRAMmap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>
GGS_bootloaderReservedRAMmap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_bootloaderReservedRAMmap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>>
GGS_bootloaderReservedRAMmap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_bootloaderReservedRAMmap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element_3F_ GGS_bootloaderReservedRAMmap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bootloaderReservedRAMmap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_bootloaderReservedRAMmap_2E_element_3F_::init_nil () ;
    }else{
      GGS_bootloaderReservedRAMmap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mReservedSize = info->mProperty_mReservedSize ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap GGS_bootloaderReservedRAMmap::class_func_mapWithMapToOverride (const GGS_bootloaderReservedRAMmap & inMapToOverride
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_bootloaderReservedRAMmap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_bootloaderReservedRAMmap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap GGS_bootloaderReservedRAMmap::getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_bootloaderReservedRAMmap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap::setter_insertKey (GGS_lstring inLKey,
                                                     GGS_luint inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const GGS_bootloaderReservedRAMmap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the reserved size for the '%K' bank is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap::method_searchKey (GGS_lstring inLKey,
                                                     GGS_luint & outArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the reserved size for the '%K' bank is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mReservedSize ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_bootloaderReservedRAMmap::getter_mReservedSizeForKey (const GGS_string & inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReservedSize ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap::setter_setMReservedSizeForKey (GGS_luint inValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_bootloaderReservedRAMmap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReservedSize = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_bootloaderReservedRAMmap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>> & inArray,
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
    ioString.appendString ("mReservedSize:") ;
    inArray (i COMMA_HERE)->mProperty_mReservedSize.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bootloaderReservedRAMmap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_bootloaderReservedRAMmap_2E_element>> array = sortedInfoArray () ;
    GGS_bootloaderReservedRAMmap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_bootloaderReservedRAMmap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_bootloaderReservedRAMmap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @bootloaderReservedRAMmap
//--------------------------------------------------------------------------------------------------

DownEnumerator_bootloaderReservedRAMmap::DownEnumerator_bootloaderReservedRAMmap (const GGS_bootloaderReservedRAMmap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element DownEnumerator_bootloaderReservedRAMmap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_bootloaderReservedRAMmap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_bootloaderReservedRAMmap::current_mReservedSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReservedSize ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @bootloaderReservedRAMmap
//--------------------------------------------------------------------------------------------------

UpEnumerator_bootloaderReservedRAMmap::UpEnumerator_bootloaderReservedRAMmap (const GGS_bootloaderReservedRAMmap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap_2E_element UpEnumerator_bootloaderReservedRAMmap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_bootloaderReservedRAMmap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_bootloaderReservedRAMmap::current_mReservedSize (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReservedSize ;
}


//--------------------------------------------------------------------------------------------------
//     @bootloaderReservedRAMmap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bootloaderReservedRAMmap ("bootloaderReservedRAMmap",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bootloaderReservedRAMmap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bootloaderReservedRAMmap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bootloaderReservedRAMmap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bootloaderReservedRAMmap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bootloaderReservedRAMmap GGS_bootloaderReservedRAMmap::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_bootloaderReservedRAMmap result ;
  const GGS_bootloaderReservedRAMmap * p = (const GGS_bootloaderReservedRAMmap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bootloaderReservedRAMmap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bootloaderReservedRAMmap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_nobanksel reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_nobanksel::objectCompare (const GGS_pic_31__38_Instruction_5F_nobanksel & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_nobanksel::GGS_pic_31__38_Instruction_5F_nobanksel (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_nobanksel GGS_pic_31__38_Instruction_5F_nobanksel::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_nobanksel * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_nobanksel (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_nobanksel_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_nobanksel result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_nobanksel::
pic_31__38_Instruction_5F_nobanksel_init_21_ (const GGS_location & in_mInstructionLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_nobanksel::GGS_pic_31__38_Instruction_5F_nobanksel (const cPtr_pic_31__38_Instruction_5F_nobanksel * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_nobanksel class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_nobanksel::cPtr_pic_31__38_Instruction_5F_nobanksel (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_nobanksel::cPtr_pic_31__38_Instruction_5F_nobanksel (const GGS_location & in_mInstructionLocation,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_nobanksel::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;
}

void cPtr_pic_31__38_Instruction_5F_nobanksel::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_nobanksel:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_nobanksel::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_nobanksel (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_nobanksel::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_nobanksel generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ("pic18Instruction_nobanksel",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_nobanksel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_nobanksel::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_nobanksel (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_nobanksel GGS_pic_31__38_Instruction_5F_nobanksel::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_nobanksel result ;
  const GGS_pic_31__38_Instruction_5F_nobanksel * p = (const GGS_pic_31__38_Instruction_5F_nobanksel *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_nobanksel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_nobanksel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak::GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak & GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_nobanksel & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak::GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak (const GGS_pic_31__38_Instruction_5F_nobanksel & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_nobanksel GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_nobanksel result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_nobanksel * p = (cPtr_pic_31__38_Instruction_5F_nobanksel *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_nobanksel (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_nobanksel GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak::bang_pic_31__38_Instruction_5F_nobanksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_nobanksel result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_nobanksel) ;
      result = GGS_pic_31__38_Instruction_5F_nobanksel ((cPtr_pic_31__38_Instruction_5F_nobanksel *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_nobanksel.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel_2E_weak ("pic18Instruction_nobanksel.weak",
                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_nobanksel_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_nobanksel_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_nobanksel.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_checknobank reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_checknobank::objectCompare (const GGS_pic_31__38_Instruction_5F_checknobank & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_checknobank::GGS_pic_31__38_Instruction_5F_checknobank (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checknobank GGS_pic_31__38_Instruction_5F_checknobank::
init_21_ (const GGS_location & in_mInstructionLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_checknobank * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_checknobank (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_checknobank_init_21_ (in_mInstructionLocation, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_checknobank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checknobank::
pic_31__38_Instruction_5F_checknobank_init_21_ (const GGS_location & in_mInstructionLocation,
                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checknobank::GGS_pic_31__38_Instruction_5F_checknobank (const cPtr_pic_31__38_Instruction_5F_checknobank * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_checknobank) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_checknobank class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_checknobank::cPtr_pic_31__38_Instruction_5F_checknobank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_checknobank::cPtr_pic_31__38_Instruction_5F_checknobank (const GGS_location & in_mInstructionLocation,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_checknobank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;
}

void cPtr_pic_31__38_Instruction_5F_checknobank::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_checknobank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_checknobank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_checknobank (mProperty_mInstructionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_checknobank::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_checknobank generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ("pic18Instruction_checknobank",
                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_checknobank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_checknobank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_checknobank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checknobank GGS_pic_31__38_Instruction_5F_checknobank::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_checknobank result ;
  const GGS_pic_31__38_Instruction_5F_checknobank * p = (const GGS_pic_31__38_Instruction_5F_checknobank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_checknobank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checknobank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_checknobank_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_checknobank_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_checknobank_2E_weak::GGS_pic_31__38_Instruction_5F_checknobank_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checknobank_2E_weak & GGS_pic_31__38_Instruction_5F_checknobank_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_checknobank & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checknobank_2E_weak::GGS_pic_31__38_Instruction_5F_checknobank_2E_weak (const GGS_pic_31__38_Instruction_5F_checknobank & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checknobank_2E_weak GGS_pic_31__38_Instruction_5F_checknobank_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_checknobank_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checknobank GGS_pic_31__38_Instruction_5F_checknobank_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_checknobank result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_checknobank * p = (cPtr_pic_31__38_Instruction_5F_checknobank *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_checknobank (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checknobank GGS_pic_31__38_Instruction_5F_checknobank_2E_weak::bang_pic_31__38_Instruction_5F_checknobank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_checknobank result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_checknobank) ;
      result = GGS_pic_31__38_Instruction_5F_checknobank ((cPtr_pic_31__38_Instruction_5F_checknobank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_checknobank.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank_2E_weak ("pic18Instruction_checknobank.weak",
                                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_checknobank_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checknobank_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_checknobank_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_checknobank_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checknobank_2E_weak GGS_pic_31__38_Instruction_5F_checknobank_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_checknobank_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_checknobank_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_checknobank_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_checknobank_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checknobank.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_checkbank reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_checkbank::objectCompare (const GGS_pic_31__38_Instruction_5F_checkbank & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_checkbank::GGS_pic_31__38_Instruction_5F_checkbank (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checkbank GGS_pic_31__38_Instruction_5F_checkbank::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_uint & in_mBankIndex,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_checkbank * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_checkbank (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_checkbank_init_21__21_ (in_mInstructionLocation, in_mBankIndex, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_checkbank result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checkbank::
pic_31__38_Instruction_5F_checkbank_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                  const GGS_uint & in_mBankIndex,
                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checkbank::GGS_pic_31__38_Instruction_5F_checkbank (const cPtr_pic_31__38_Instruction_5F_checkbank * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_checkbank) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_Instruction_5F_checkbank::readProperty_mBankIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_checkbank * p = (cPtr_pic_31__38_Instruction_5F_checkbank *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_checkbank) ;
    return p->mProperty_mBankIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_checkbank class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_checkbank::cPtr_pic_31__38_Instruction_5F_checkbank (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mBankIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_checkbank::cPtr_pic_31__38_Instruction_5F_checkbank (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_uint & in_mBankIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mBankIndex () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mBankIndex = in_mBankIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_checkbank::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;
}

void cPtr_pic_31__38_Instruction_5F_checkbank::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_checkbank:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBankIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_checkbank::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_checkbank (mProperty_mInstructionLocation, mProperty_mBankIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_checkbank::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mBankIndex.printNonNullClassInstanceProperties ("mBankIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_checkbank generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ("pic18Instruction_checkbank",
                                                                                        & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_checkbank::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_checkbank::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_checkbank (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checkbank GGS_pic_31__38_Instruction_5F_checkbank::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_checkbank result ;
  const GGS_pic_31__38_Instruction_5F_checkbank * p = (const GGS_pic_31__38_Instruction_5F_checkbank *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_checkbank *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checkbank", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_checkbank_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_checkbank_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_checkbank_2E_weak::GGS_pic_31__38_Instruction_5F_checkbank_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checkbank_2E_weak & GGS_pic_31__38_Instruction_5F_checkbank_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_checkbank & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checkbank_2E_weak::GGS_pic_31__38_Instruction_5F_checkbank_2E_weak (const GGS_pic_31__38_Instruction_5F_checkbank & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checkbank_2E_weak GGS_pic_31__38_Instruction_5F_checkbank_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_checkbank_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checkbank GGS_pic_31__38_Instruction_5F_checkbank_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_checkbank result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_checkbank * p = (cPtr_pic_31__38_Instruction_5F_checkbank *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_checkbank (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checkbank GGS_pic_31__38_Instruction_5F_checkbank_2E_weak::bang_pic_31__38_Instruction_5F_checkbank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_checkbank result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_checkbank) ;
      result = GGS_pic_31__38_Instruction_5F_checkbank ((cPtr_pic_31__38_Instruction_5F_checkbank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_checkbank.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank_2E_weak ("pic18Instruction_checkbank.weak",
                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_checkbank_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_checkbank_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_checkbank_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_checkbank_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_checkbank_2E_weak GGS_pic_31__38_Instruction_5F_checkbank_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_checkbank_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_checkbank_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_checkbank_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_checkbank_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_checkbank.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak::objectCompare (const GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak & inOperand) const {
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

GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak::GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak & GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak::operator = (const GGS_pic_31__38_PiccoloSimpleInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak::GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (const GGS_pic_31__38_PiccoloSimpleInstruction & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloSimpleInstruction GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_PiccoloSimpleInstruction result ;
  if (isValid ()) {
    const cPtr_pic_31__38_PiccoloSimpleInstruction * p = (cPtr_pic_31__38_PiccoloSimpleInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_PiccoloSimpleInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloSimpleInstruction GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak::bang_pic_31__38_PiccoloSimpleInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_PiccoloSimpleInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_PiccoloSimpleInstruction) ;
      result = GGS_pic_31__38_PiccoloSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18PiccoloSimpleInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak ("pic18PiccoloSimpleInstruction.weak",
                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak result ;
  const GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak * p = (const GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18PiccoloSimpleInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_banksel_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_banksel_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_banksel_2E_weak::GGS_pic_31__38_Instruction_5F_banksel_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_2E_weak & GGS_pic_31__38_Instruction_5F_banksel_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_banksel & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_2E_weak::GGS_pic_31__38_Instruction_5F_banksel_2E_weak (const GGS_pic_31__38_Instruction_5F_banksel & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_2E_weak GGS_pic_31__38_Instruction_5F_banksel_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_banksel_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel GGS_pic_31__38_Instruction_5F_banksel_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_banksel result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_banksel * p = (cPtr_pic_31__38_Instruction_5F_banksel *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_banksel (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel GGS_pic_31__38_Instruction_5F_banksel_2E_weak::bang_pic_31__38_Instruction_5F_banksel_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_banksel result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_banksel) ;
      result = GGS_pic_31__38_Instruction_5F_banksel ((cPtr_pic_31__38_Instruction_5F_banksel *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_banksel.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_2E_weak ("pic18Instruction_banksel.weak",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_banksel_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_banksel_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_banksel_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_2E_weak GGS_pic_31__38_Instruction_5F_banksel_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_banksel_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_banksel_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_banksel_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_banksel_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak::GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak & GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak::GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (const GGS_pic_31__38_Instruction_5F_banksel_5F_register & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_5F_register GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_banksel_5F_register * p = (cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_banksel_5F_register (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_5F_register GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak::bang_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_banksel_5F_register result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_banksel_5F_register) ;
      result = GGS_pic_31__38_Instruction_5F_banksel_5F_register ((cPtr_pic_31__38_Instruction_5F_banksel_5F_register *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_banksel_register.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak ("pic18Instruction_banksel_register.weak",
                                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_banksel_5F_register_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_banksel_register.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_savebank_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_savebank_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_savebank_2E_weak::GGS_pic_31__38_Instruction_5F_savebank_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_savebank_2E_weak & GGS_pic_31__38_Instruction_5F_savebank_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_savebank & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_savebank_2E_weak::GGS_pic_31__38_Instruction_5F_savebank_2E_weak (const GGS_pic_31__38_Instruction_5F_savebank & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_savebank_2E_weak GGS_pic_31__38_Instruction_5F_savebank_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_savebank_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_savebank GGS_pic_31__38_Instruction_5F_savebank_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_savebank result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_savebank * p = (cPtr_pic_31__38_Instruction_5F_savebank *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_savebank (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_savebank GGS_pic_31__38_Instruction_5F_savebank_2E_weak::bang_pic_31__38_Instruction_5F_savebank_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_savebank result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_savebank) ;
      result = GGS_pic_31__38_Instruction_5F_savebank ((cPtr_pic_31__38_Instruction_5F_savebank *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_savebank.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank_2E_weak ("pic18Instruction_savebank.weak",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_savebank_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_savebank_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_savebank_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_savebank_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_savebank_2E_weak GGS_pic_31__38_Instruction_5F_savebank_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_savebank_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_savebank_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_savebank_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_savebank_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_savebank.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak::GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak & GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_repetitionStatique & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak::GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (const GGS_pic_31__38_Instruction_5F_repetitionStatique & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_repetitionStatique GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_repetitionStatique result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_repetitionStatique * p = (cPtr_pic_31__38_Instruction_5F_repetitionStatique *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_repetitionStatique (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_repetitionStatique GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak::bang_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_repetitionStatique result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_repetitionStatique) ;
      result = GGS_pic_31__38_Instruction_5F_repetitionStatique ((cPtr_pic_31__38_Instruction_5F_repetitionStatique *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_repetitionStatique.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak ("pic18Instruction_repetitionStatique.weak",
                                                                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_repetitionStatique_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_repetitionStatique.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractBlockTerminationForBlockInstruction_2E_weak::objectCompare (const GGS_abstractBlockTerminationForBlockInstruction_2E_weak & inOperand) const {
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

GGS_abstractBlockTerminationForBlockInstruction_2E_weak::GGS_abstractBlockTerminationForBlockInstruction_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction_2E_weak & GGS_abstractBlockTerminationForBlockInstruction_2E_weak::operator = (const GGS_abstractBlockTerminationForBlockInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction_2E_weak::GGS_abstractBlockTerminationForBlockInstruction_2E_weak (const GGS_abstractBlockTerminationForBlockInstruction & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction_2E_weak GGS_abstractBlockTerminationForBlockInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractBlockTerminationForBlockInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction GGS_abstractBlockTerminationForBlockInstruction_2E_weak::unwrappedValue (void) const {
  GGS_abstractBlockTerminationForBlockInstruction result ;
  if (isValid ()) {
    const cPtr_abstractBlockTerminationForBlockInstruction * p = (cPtr_abstractBlockTerminationForBlockInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractBlockTerminationForBlockInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction GGS_abstractBlockTerminationForBlockInstruction_2E_weak::bang_abstractBlockTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractBlockTerminationForBlockInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractBlockTerminationForBlockInstruction) ;
      result = GGS_abstractBlockTerminationForBlockInstruction ((cPtr_abstractBlockTerminationForBlockInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractBlockTerminationForBlockInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2E_weak ("abstractBlockTerminationForBlockInstruction.weak",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractBlockTerminationForBlockInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractBlockTerminationForBlockInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractBlockTerminationForBlockInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction_2E_weak GGS_abstractBlockTerminationForBlockInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractBlockTerminationForBlockInstruction_2E_weak result ;
  const GGS_abstractBlockTerminationForBlockInstruction_2E_weak * p = (const GGS_abstractBlockTerminationForBlockInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractBlockTerminationForBlockInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBlockTerminationForBlockInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @exitBlockTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_exitBlockTerminationForBlockInstruction::objectCompare (const GGS_exitBlockTerminationForBlockInstruction & inOperand) const {
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

GGS_exitBlockTerminationForBlockInstruction::GGS_exitBlockTerminationForBlockInstruction (void) :
GGS_abstractBlockTerminationForBlockInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_exitBlockTerminationForBlockInstruction GGS_exitBlockTerminationForBlockInstruction::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_exitBlockTerminationForBlockInstruction * object = nullptr ;
  macroMyNew (object, cPtr_exitBlockTerminationForBlockInstruction (inCompiler COMMA_THERE)) ;
  object->exitBlockTerminationForBlockInstruction_init_21_ (in_mLocation, inCompiler) ;
  const GGS_exitBlockTerminationForBlockInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_exitBlockTerminationForBlockInstruction::
exitBlockTerminationForBlockInstruction_init_21_ (const GGS_location & in_mLocation,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_exitBlockTerminationForBlockInstruction::GGS_exitBlockTerminationForBlockInstruction (const cPtr_exitBlockTerminationForBlockInstruction * inSourcePtr) :
GGS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_exitBlockTerminationForBlockInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_exitBlockTerminationForBlockInstruction::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_exitBlockTerminationForBlockInstruction * p = (cPtr_exitBlockTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_exitBlockTerminationForBlockInstruction) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @exitBlockTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_exitBlockTerminationForBlockInstruction::cPtr_exitBlockTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_exitBlockTerminationForBlockInstruction::cPtr_exitBlockTerminationForBlockInstruction (const GGS_location & in_mLocation,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_exitBlockTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;
}

void cPtr_exitBlockTerminationForBlockInstruction::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@exitBlockTerminationForBlockInstruction:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_exitBlockTerminationForBlockInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_exitBlockTerminationForBlockInstruction (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_exitBlockTerminationForBlockInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBlockTerminationForBlockInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @exitBlockTerminationForBlockInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ("exitBlockTerminationForBlockInstruction",
                                                                                            & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_exitBlockTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_exitBlockTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_exitBlockTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_exitBlockTerminationForBlockInstruction GGS_exitBlockTerminationForBlockInstruction::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_exitBlockTerminationForBlockInstruction result ;
  const GGS_exitBlockTerminationForBlockInstruction * p = (const GGS_exitBlockTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_exitBlockTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exitBlockTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_exitBlockTerminationForBlockInstruction_2E_weak::objectCompare (const GGS_exitBlockTerminationForBlockInstruction_2E_weak & inOperand) const {
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

GGS_exitBlockTerminationForBlockInstruction_2E_weak::GGS_exitBlockTerminationForBlockInstruction_2E_weak (void) :
GGS_abstractBlockTerminationForBlockInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_exitBlockTerminationForBlockInstruction_2E_weak & GGS_exitBlockTerminationForBlockInstruction_2E_weak::operator = (const GGS_exitBlockTerminationForBlockInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_exitBlockTerminationForBlockInstruction_2E_weak::GGS_exitBlockTerminationForBlockInstruction_2E_weak (const GGS_exitBlockTerminationForBlockInstruction & inSource) :
GGS_abstractBlockTerminationForBlockInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_exitBlockTerminationForBlockInstruction_2E_weak GGS_exitBlockTerminationForBlockInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_exitBlockTerminationForBlockInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_exitBlockTerminationForBlockInstruction GGS_exitBlockTerminationForBlockInstruction_2E_weak::unwrappedValue (void) const {
  GGS_exitBlockTerminationForBlockInstruction result ;
  if (isValid ()) {
    const cPtr_exitBlockTerminationForBlockInstruction * p = (cPtr_exitBlockTerminationForBlockInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_exitBlockTerminationForBlockInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_exitBlockTerminationForBlockInstruction GGS_exitBlockTerminationForBlockInstruction_2E_weak::bang_exitBlockTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_exitBlockTerminationForBlockInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_exitBlockTerminationForBlockInstruction) ;
      result = GGS_exitBlockTerminationForBlockInstruction ((cPtr_exitBlockTerminationForBlockInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @exitBlockTerminationForBlockInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction_2E_weak ("exitBlockTerminationForBlockInstruction.weak",
                                                                                                    & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_exitBlockTerminationForBlockInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_exitBlockTerminationForBlockInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_exitBlockTerminationForBlockInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_exitBlockTerminationForBlockInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_exitBlockTerminationForBlockInstruction_2E_weak GGS_exitBlockTerminationForBlockInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_exitBlockTerminationForBlockInstruction_2E_weak result ;
  const GGS_exitBlockTerminationForBlockInstruction_2E_weak * p = (const GGS_exitBlockTerminationForBlockInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_exitBlockTerminationForBlockInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("exitBlockTerminationForBlockInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_gotoTerminationForBlockInstruction_2E_weak::objectCompare (const GGS_gotoTerminationForBlockInstruction_2E_weak & inOperand) const {
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

GGS_gotoTerminationForBlockInstruction_2E_weak::GGS_gotoTerminationForBlockInstruction_2E_weak (void) :
GGS_abstractBlockTerminationForBlockInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_gotoTerminationForBlockInstruction_2E_weak & GGS_gotoTerminationForBlockInstruction_2E_weak::operator = (const GGS_gotoTerminationForBlockInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_gotoTerminationForBlockInstruction_2E_weak::GGS_gotoTerminationForBlockInstruction_2E_weak (const GGS_gotoTerminationForBlockInstruction & inSource) :
GGS_abstractBlockTerminationForBlockInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_gotoTerminationForBlockInstruction_2E_weak GGS_gotoTerminationForBlockInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_gotoTerminationForBlockInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_gotoTerminationForBlockInstruction GGS_gotoTerminationForBlockInstruction_2E_weak::unwrappedValue (void) const {
  GGS_gotoTerminationForBlockInstruction result ;
  if (isValid ()) {
    const cPtr_gotoTerminationForBlockInstruction * p = (cPtr_gotoTerminationForBlockInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_gotoTerminationForBlockInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_gotoTerminationForBlockInstruction GGS_gotoTerminationForBlockInstruction_2E_weak::bang_gotoTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_gotoTerminationForBlockInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_gotoTerminationForBlockInstruction) ;
      result = GGS_gotoTerminationForBlockInstruction ((cPtr_gotoTerminationForBlockInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @gotoTerminationForBlockInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2E_weak ("gotoTerminationForBlockInstruction.weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_gotoTerminationForBlockInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_gotoTerminationForBlockInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_gotoTerminationForBlockInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_gotoTerminationForBlockInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_gotoTerminationForBlockInstruction_2E_weak GGS_gotoTerminationForBlockInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_gotoTerminationForBlockInstruction_2E_weak result ;
  const GGS_gotoTerminationForBlockInstruction_2E_weak * p = (const GGS_gotoTerminationForBlockInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_gotoTerminationForBlockInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("gotoTerminationForBlockInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @testTerminationForBlockInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testTerminationForBlockInstruction::objectCompare (const GGS_testTerminationForBlockInstruction & inOperand) const {
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

GGS_testTerminationForBlockInstruction::GGS_testTerminationForBlockInstruction (void) :
GGS_abstractBlockTerminationForBlockInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_testTerminationForBlockInstruction GGS_testTerminationForBlockInstruction::
init_21__21__21__21_ (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                      const GGS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                      const GGS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                      const GGS_location & in_mLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_testTerminationForBlockInstruction * object = nullptr ;
  macroMyNew (object, cPtr_testTerminationForBlockInstruction (inCompiler COMMA_THERE)) ;
  object->testTerminationForBlockInstruction_init_21__21__21__21_ (in_mCondition, in_mTrueTermination, in_mFalseTermination, in_mLocation, inCompiler) ;
  const GGS_testTerminationForBlockInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testTerminationForBlockInstruction::
testTerminationForBlockInstruction_init_21__21__21__21_ (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                         const GGS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                         const GGS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                         const GGS_location & in_mLocation,
                                                         Compiler * /* inCompiler */) {
  mProperty_mCondition = in_mCondition ;
  mProperty_mTrueTermination = in_mTrueTermination ;
  mProperty_mFalseTermination = in_mFalseTermination ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction::GGS_testTerminationForBlockInstruction (const cPtr_testTerminationForBlockInstruction * inSourcePtr) :
GGS_abstractBlockTerminationForBlockInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testTerminationForBlockInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression GGS_testTerminationForBlockInstruction::readProperty_mCondition (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_ConditionExpression () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mCondition ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction GGS_testTerminationForBlockInstruction::readProperty_mTrueTermination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBlockTerminationForBlockInstruction () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mTrueTermination ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction GGS_testTerminationForBlockInstruction::readProperty_mFalseTermination (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBlockTerminationForBlockInstruction () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mFalseTermination ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_testTerminationForBlockInstruction::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testTerminationForBlockInstruction) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testTerminationForBlockInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_testTerminationForBlockInstruction::cPtr_testTerminationForBlockInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (inCompiler COMMA_THERE),
mProperty_mCondition (),
mProperty_mTrueTermination (),
mProperty_mFalseTermination (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_testTerminationForBlockInstruction::cPtr_testTerminationForBlockInstruction (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                  const GGS_abstractBlockTerminationForBlockInstruction & in_mTrueTermination,
                                                                                  const GGS_abstractBlockTerminationForBlockInstruction & in_mFalseTermination,
                                                                                  const GGS_location & in_mLocation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractBlockTerminationForBlockInstruction (inCompiler COMMA_THERE),
mProperty_mCondition (),
mProperty_mTrueTermination (),
mProperty_mFalseTermination (),
mProperty_mLocation () {
  mProperty_mCondition = in_mCondition ;
  mProperty_mTrueTermination = in_mTrueTermination ;
  mProperty_mFalseTermination = in_mFalseTermination ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_testTerminationForBlockInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;
}

void cPtr_testTerminationForBlockInstruction::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@testTerminationForBlockInstruction:") ;
  mProperty_mCondition.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTrueTermination.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFalseTermination.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_testTerminationForBlockInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testTerminationForBlockInstruction (mProperty_mCondition, mProperty_mTrueTermination, mProperty_mFalseTermination, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_testTerminationForBlockInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBlockTerminationForBlockInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mCondition.printNonNullClassInstanceProperties ("mCondition") ;
    mProperty_mTrueTermination.printNonNullClassInstanceProperties ("mTrueTermination") ;
    mProperty_mFalseTermination.printNonNullClassInstanceProperties ("mFalseTermination") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @testTerminationForBlockInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ("testTerminationForBlockInstruction",
                                                                                       & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testTerminationForBlockInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testTerminationForBlockInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testTerminationForBlockInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction GGS_testTerminationForBlockInstruction::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_testTerminationForBlockInstruction result ;
  const GGS_testTerminationForBlockInstruction * p = (const GGS_testTerminationForBlockInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testTerminationForBlockInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testTerminationForBlockInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testTerminationForBlockInstruction_2E_weak::objectCompare (const GGS_testTerminationForBlockInstruction_2E_weak & inOperand) const {
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

GGS_testTerminationForBlockInstruction_2E_weak::GGS_testTerminationForBlockInstruction_2E_weak (void) :
GGS_abstractBlockTerminationForBlockInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction_2E_weak & GGS_testTerminationForBlockInstruction_2E_weak::operator = (const GGS_testTerminationForBlockInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction_2E_weak::GGS_testTerminationForBlockInstruction_2E_weak (const GGS_testTerminationForBlockInstruction & inSource) :
GGS_abstractBlockTerminationForBlockInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction_2E_weak GGS_testTerminationForBlockInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_testTerminationForBlockInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction GGS_testTerminationForBlockInstruction_2E_weak::unwrappedValue (void) const {
  GGS_testTerminationForBlockInstruction result ;
  if (isValid ()) {
    const cPtr_testTerminationForBlockInstruction * p = (cPtr_testTerminationForBlockInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_testTerminationForBlockInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction GGS_testTerminationForBlockInstruction_2E_weak::bang_testTerminationForBlockInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_testTerminationForBlockInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testTerminationForBlockInstruction) ;
      result = GGS_testTerminationForBlockInstruction ((cPtr_testTerminationForBlockInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @testTerminationForBlockInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2E_weak ("testTerminationForBlockInstruction.weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractBlockTerminationForBlockInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testTerminationForBlockInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testTerminationForBlockInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_testTerminationForBlockInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_testTerminationForBlockInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testTerminationForBlockInstruction_2E_weak GGS_testTerminationForBlockInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_testTerminationForBlockInstruction_2E_weak result ;
  const GGS_testTerminationForBlockInstruction_2E_weak * p = (const GGS_testTerminationForBlockInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_testTerminationForBlockInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("testTerminationForBlockInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@pic_31__38_BlockInstructionBlockList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_pic_31__38_BlockInstructionBlockList : public CollectionElementPtr {
  public: GGS_pic_31__38_BlockInstructionBlockList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_pic_31__38_BlockInstructionBlockList (const GGS_lstring & in_mBlockName,
                                                                     const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                     const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                     const GGS_location & in_mEndOfBlock
                                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_pic_31__38_BlockInstructionBlockList (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_BlockInstructionBlockList::CollectionElementPtr_pic_31__38_BlockInstructionBlockList (const GGS_lstring & in_mBlockName,
                                                                                                                      const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                      const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                                                                      const GGS_location & in_mEndOfBlock
                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mBlockName, in_mInstructionList, in_mBlockTerminaisonForBlockInstruction, in_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_BlockInstructionBlockList::CollectionElementPtr_pic_31__38_BlockInstructionBlockList (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mBlockName, inElement.mProperty_mInstructionList, inElement.mProperty_mBlockTerminaisonForBlockInstruction, inElement.mProperty_mEndOfBlock) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_pic_31__38_BlockInstructionBlockList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_pic_31__38_BlockInstructionBlockList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_pic_31__38_BlockInstructionBlockList (mObject.mProperty_mBlockName, mObject.mProperty_mInstructionList, mObject.mProperty_mBlockTerminaisonForBlockInstruction, mObject.mProperty_mEndOfBlock COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_BlockInstructionBlockList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList::GGS_pic_31__38_BlockInstructionBlockList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList::GGS_pic_31__38_BlockInstructionBlockList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_pic_31__38_BlockInstructionBlockList * p = (CollectionElementPtr_pic_31__38_BlockInstructionBlockList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_pic_31__38_BlockInstructionBlockList) ;
    const GGS_pic_31__38_BlockInstructionBlockList_2E_element element (p->mObject.mProperty_mBlockName, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mBlockTerminaisonForBlockInstruction, p->mObject.mProperty_mEndOfBlock) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                          const GGS_lstring & in_mBlockName,
                                                                          const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                          const GGS_abstractBlockTerminationForBlockInstruction & in_mBlockTerminaisonForBlockInstruction,
                                                                          const GGS_location & in_mEndOfBlock
                                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_pic_31__38_BlockInstructionBlockList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_pic_31__38_BlockInstructionBlockList (in_mBlockName, in_mInstructionList, in_mBlockTerminaisonForBlockInstruction, in_mEndOfBlock COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_pic_31__38_BlockInstructionBlockList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_pic_31__38_BlockInstructionBlockList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList::description (String & ioString,
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
      ioString.appendString ("mBlockName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBlockName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBlockTerminaisonForBlockInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBlockTerminaisonForBlockInstruction.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEndOfBlock:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEndOfBlock.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList GGS_pic_31__38_BlockInstructionBlockList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_BlockInstructionBlockList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList::plusPlusAssignOperation (const GGS_pic_31__38_BlockInstructionBlockList_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList GGS_pic_31__38_BlockInstructionBlockList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                             const GGS_pic_31__38_InstructionList & inOperand1,
                                                                                                             const GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                                                             const GGS_location & inOperand3
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_BlockInstructionBlockList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_pic_31__38_BlockInstructionBlockList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                   const GGS_pic_31__38_InstructionList & inOperand1,
                                                                   const GGS_abstractBlockTerminationForBlockInstruction & inOperand2,
                                                                   const GGS_location & inOperand3
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_BlockInstructionBlockList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList::setter_append (const GGS_lstring inOperand0,
                                                              const GGS_pic_31__38_InstructionList inOperand1,
                                                              const GGS_abstractBlockTerminationForBlockInstruction inOperand2,
                                                              const GGS_location inOperand3,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_BlockInstructionBlockList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                     const GGS_pic_31__38_InstructionList inOperand1,
                                                                     const GGS_abstractBlockTerminationForBlockInstruction inOperand2,
                                                                     const GGS_location inOperand3,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_BlockInstructionBlockList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_pic_31__38_BlockInstructionBlockList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                     GGS_pic_31__38_InstructionList & outOperand1,
                                                                     GGS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                                     GGS_location & outOperand3,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBlockName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBlockTerminaisonForBlockInstruction ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mEndOfBlock ;
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

void GGS_pic_31__38_BlockInstructionBlockList::setter_popFirst (GGS_lstring & outOperand0,
                                                                GGS_pic_31__38_InstructionList & outOperand1,
                                                                GGS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                                GGS_location & outOperand3,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBlockName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBlockTerminaisonForBlockInstruction ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mEndOfBlock ;
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

void GGS_pic_31__38_BlockInstructionBlockList::setter_popLast (GGS_lstring & outOperand0,
                                                               GGS_pic_31__38_InstructionList & outOperand1,
                                                               GGS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                               GGS_location & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBlockName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBlockTerminaisonForBlockInstruction ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mEndOfBlock ;
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

void GGS_pic_31__38_BlockInstructionBlockList::method_first (GGS_lstring & outOperand0,
                                                             GGS_pic_31__38_InstructionList & outOperand1,
                                                             GGS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                             GGS_location & outOperand3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBlockName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBlockTerminaisonForBlockInstruction ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mEndOfBlock ;
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

void GGS_pic_31__38_BlockInstructionBlockList::method_last (GGS_lstring & outOperand0,
                                                            GGS_pic_31__38_InstructionList & outOperand1,
                                                            GGS_abstractBlockTerminationForBlockInstruction & outOperand2,
                                                            GGS_location & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBlockName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBlockTerminaisonForBlockInstruction ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mEndOfBlock ;
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

GGS_pic_31__38_BlockInstructionBlockList GGS_pic_31__38_BlockInstructionBlockList::add_operation (const GGS_pic_31__38_BlockInstructionBlockList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_pic_31__38_BlockInstructionBlockList result ;
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

GGS_pic_31__38_BlockInstructionBlockList GGS_pic_31__38_BlockInstructionBlockList::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_BlockInstructionBlockList result ;
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

GGS_pic_31__38_BlockInstructionBlockList GGS_pic_31__38_BlockInstructionBlockList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_BlockInstructionBlockList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList GGS_pic_31__38_BlockInstructionBlockList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_BlockInstructionBlockList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList GGS_pic_31__38_BlockInstructionBlockList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_BlockInstructionBlockList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_BlockInstructionBlockList::plusAssignOperation (const GGS_pic_31__38_BlockInstructionBlockList inList,
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

void GGS_pic_31__38_BlockInstructionBlockList::setter_setMBlockNameAtIndex (GGS_lstring inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBlockName = inOperand ;
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
  
GGS_lstring GGS_pic_31__38_BlockInstructionBlockList::getter_mBlockNameAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBlockName ;
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

void GGS_pic_31__38_BlockInstructionBlockList::setter_setMInstructionListAtIndex (GGS_pic_31__38_InstructionList inOperand,
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
  
GGS_pic_31__38_InstructionList GGS_pic_31__38_BlockInstructionBlockList::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
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

void GGS_pic_31__38_BlockInstructionBlockList::setter_setMBlockTerminaisonForBlockInstructionAtIndex (GGS_abstractBlockTerminationForBlockInstruction inOperand,
                                                                                                      GGS_uint inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBlockTerminaisonForBlockInstruction = inOperand ;
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
  
GGS_abstractBlockTerminationForBlockInstruction GGS_pic_31__38_BlockInstructionBlockList::getter_mBlockTerminaisonForBlockInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_abstractBlockTerminationForBlockInstruction result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBlockTerminaisonForBlockInstruction ;
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

void GGS_pic_31__38_BlockInstructionBlockList::setter_setMEndOfBlockAtIndex (GGS_location inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfBlock = inOperand ;
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
  
GGS_location GGS_pic_31__38_BlockInstructionBlockList::getter_mEndOfBlockAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEndOfBlock ;
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
// Down Enumerator for @pic_31__38_BlockInstructionBlockList
//--------------------------------------------------------------------------------------------------

DownEnumerator_pic_31__38_BlockInstructionBlockList::DownEnumerator_pic_31__38_BlockInstructionBlockList (const GGS_pic_31__38_BlockInstructionBlockList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element DownEnumerator_pic_31__38_BlockInstructionBlockList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_pic_31__38_BlockInstructionBlockList::current_mBlockName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlockName ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_pic_31__38_BlockInstructionBlockList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction DownEnumerator_pic_31__38_BlockInstructionBlockList::current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlockTerminaisonForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_pic_31__38_BlockInstructionBlockList::current_mEndOfBlock (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfBlock ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @pic_31__38_BlockInstructionBlockList
//--------------------------------------------------------------------------------------------------

UpEnumerator_pic_31__38_BlockInstructionBlockList::UpEnumerator_pic_31__38_BlockInstructionBlockList (const GGS_pic_31__38_BlockInstructionBlockList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList_2E_element UpEnumerator_pic_31__38_BlockInstructionBlockList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_pic_31__38_BlockInstructionBlockList::current_mBlockName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlockName ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_pic_31__38_BlockInstructionBlockList::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBlockTerminationForBlockInstruction UpEnumerator_pic_31__38_BlockInstructionBlockList::current_mBlockTerminaisonForBlockInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBlockTerminaisonForBlockInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_pic_31__38_BlockInstructionBlockList::current_mEndOfBlock (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEndOfBlock ;
}




//--------------------------------------------------------------------------------------------------
//     @pic18BlockInstructionBlockList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList ("pic18BlockInstructionBlockList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_BlockInstructionBlockList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_BlockInstructionBlockList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_BlockInstructionBlockList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_BlockInstructionBlockList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BlockInstructionBlockList GGS_pic_31__38_BlockInstructionBlockList::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_BlockInstructionBlockList result ;
  const GGS_pic_31__38_BlockInstructionBlockList * p = (const GGS_pic_31__38_BlockInstructionBlockList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_BlockInstructionBlockList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18BlockInstructionBlockList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_block_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_block_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_block_2E_weak::GGS_pic_31__38_Instruction_5F_block_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_block_2E_weak & GGS_pic_31__38_Instruction_5F_block_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_block & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_block_2E_weak::GGS_pic_31__38_Instruction_5F_block_2E_weak (const GGS_pic_31__38_Instruction_5F_block & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_block_2E_weak GGS_pic_31__38_Instruction_5F_block_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_block_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_block GGS_pic_31__38_Instruction_5F_block_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_block result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_block * p = (cPtr_pic_31__38_Instruction_5F_block *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_block (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_block GGS_pic_31__38_Instruction_5F_block_2E_weak::bang_pic_31__38_Instruction_5F_block_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_block result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_block) ;
      result = GGS_pic_31__38_Instruction_5F_block ((cPtr_pic_31__38_Instruction_5F_block *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_block.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block_2E_weak ("pic18Instruction_block.weak",
                                                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_block_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_block_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_block_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_block_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_block_2E_weak GGS_pic_31__38_Instruction_5F_block_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_block_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_block_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_block_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_block_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_block.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FDA_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_FDA_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FDA_2E_weak::GGS_pic_31__38_Instruction_5F_FDA_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_2E_weak & GGS_pic_31__38_Instruction_5F_FDA_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_FDA & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_2E_weak::GGS_pic_31__38_Instruction_5F_FDA_2E_weak (const GGS_pic_31__38_Instruction_5F_FDA & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_2E_weak GGS_pic_31__38_Instruction_5F_FDA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA GGS_pic_31__38_Instruction_5F_FDA_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_FDA result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_FDA * p = (cPtr_pic_31__38_Instruction_5F_FDA *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_FDA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA GGS_pic_31__38_Instruction_5F_FDA_2E_weak::bang_pic_31__38_Instruction_5F_FDA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_FDA result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_FDA) ;
      result = GGS_pic_31__38_Instruction_5F_FDA ((cPtr_pic_31__38_Instruction_5F_FDA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_FDA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_2E_weak ("pic18Instruction_FDA.weak",
                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_FDA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FDA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_FDA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_FDA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FDA_2E_weak GGS_pic_31__38_Instruction_5F_FDA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FDA_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_FDA_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_FDA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_FDA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FDA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FA_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_FA_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FA_2E_weak::GGS_pic_31__38_Instruction_5F_FA_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FA_2E_weak & GGS_pic_31__38_Instruction_5F_FA_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_FA & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FA_2E_weak::GGS_pic_31__38_Instruction_5F_FA_2E_weak (const GGS_pic_31__38_Instruction_5F_FA & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FA_2E_weak GGS_pic_31__38_Instruction_5F_FA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FA_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FA GGS_pic_31__38_Instruction_5F_FA_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_FA result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_FA * p = (cPtr_pic_31__38_Instruction_5F_FA *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_FA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FA GGS_pic_31__38_Instruction_5F_FA_2E_weak::bang_pic_31__38_Instruction_5F_FA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_FA result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_FA) ;
      result = GGS_pic_31__38_Instruction_5F_FA ((cPtr_pic_31__38_Instruction_5F_FA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_FA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA_2E_weak ("pic18Instruction_FA.weak",
                                                                                         & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_FA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_FA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_FA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FA_2E_weak GGS_pic_31__38_Instruction_5F_FA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FA_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_FA_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_FA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_FA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

