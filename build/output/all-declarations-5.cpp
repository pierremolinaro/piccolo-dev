#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak & GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_MOVFF & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak (const GGS_pic_31__38_Instruction_5F_MOVFF & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MOVFF GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_MOVFF result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_MOVFF * p = (cPtr_pic_31__38_Instruction_5F_MOVFF *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_MOVFF (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MOVFF GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::bang_pic_31__38_Instruction_5F_MOVFF_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_MOVFF result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_MOVFF) ;
      result = GGS_pic_31__38_Instruction_5F_MOVFF ((cPtr_pic_31__38_Instruction_5F_MOVFF *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_MOVFF.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF_2E_weak ("pic18Instruction_MOVFF.weak",
                                                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MOVFF_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_MOVFF_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MOVFF.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FBA_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_FBA_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FBA_2E_weak::GGS_pic_31__38_Instruction_5F_FBA_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FBA_2E_weak & GGS_pic_31__38_Instruction_5F_FBA_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_FBA & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FBA_2E_weak::GGS_pic_31__38_Instruction_5F_FBA_2E_weak (const GGS_pic_31__38_Instruction_5F_FBA & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FBA_2E_weak GGS_pic_31__38_Instruction_5F_FBA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FBA_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FBA GGS_pic_31__38_Instruction_5F_FBA_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_FBA result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_FBA * p = (cPtr_pic_31__38_Instruction_5F_FBA *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_FBA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FBA GGS_pic_31__38_Instruction_5F_FBA_2E_weak::bang_pic_31__38_Instruction_5F_FBA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_FBA result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_FBA) ;
      result = GGS_pic_31__38_Instruction_5F_FBA ((cPtr_pic_31__38_Instruction_5F_FBA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_FBA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA_2E_weak ("pic18Instruction_FBA.weak",
                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_FBA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FBA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_FBA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_FBA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FBA_2E_weak GGS_pic_31__38_Instruction_5F_FBA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FBA_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_FBA_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_FBA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_FBA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FBA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_JSR_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_JSR_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_JSR_2E_weak::GGS_pic_31__38_Instruction_5F_JSR_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JSR_2E_weak & GGS_pic_31__38_Instruction_5F_JSR_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_JSR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JSR_2E_weak::GGS_pic_31__38_Instruction_5F_JSR_2E_weak (const GGS_pic_31__38_Instruction_5F_JSR & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JSR_2E_weak GGS_pic_31__38_Instruction_5F_JSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JSR GGS_pic_31__38_Instruction_5F_JSR_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_JSR result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_JSR * p = (cPtr_pic_31__38_Instruction_5F_JSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_JSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JSR GGS_pic_31__38_Instruction_5F_JSR_2E_weak::bang_pic_31__38_Instruction_5F_JSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_JSR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_JSR) ;
      result = GGS_pic_31__38_Instruction_5F_JSR ((cPtr_pic_31__38_Instruction_5F_JSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_JSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR_2E_weak ("pic18Instruction_JSR.weak",
                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_JSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_JSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_JSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JSR_2E_weak GGS_pic_31__38_Instruction_5F_JSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JSR_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_JSR_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_JSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_JSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_macro_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_macro_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_macro_2E_weak::GGS_pic_31__38_Instruction_5F_macro_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_macro_2E_weak & GGS_pic_31__38_Instruction_5F_macro_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_macro & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_macro_2E_weak::GGS_pic_31__38_Instruction_5F_macro_2E_weak (const GGS_pic_31__38_Instruction_5F_macro & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_macro_2E_weak GGS_pic_31__38_Instruction_5F_macro_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_macro_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_macro GGS_pic_31__38_Instruction_5F_macro_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_macro result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_macro * p = (cPtr_pic_31__38_Instruction_5F_macro *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_macro (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_macro GGS_pic_31__38_Instruction_5F_macro_2E_weak::bang_pic_31__38_Instruction_5F_macro_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_macro result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_macro) ;
      result = GGS_pic_31__38_Instruction_5F_macro ((cPtr_pic_31__38_Instruction_5F_macro *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_macro.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro_2E_weak ("pic18Instruction_macro.weak",
                                                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_macro_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_macro_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_macro_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_macro_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_macro_2E_weak GGS_pic_31__38_Instruction_5F_macro_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_macro_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_macro_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_macro_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_macro_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_macro.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_JUMP_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::GGS_pic_31__38_Instruction_5F_JUMP_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMP_2E_weak & GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_JUMP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::GGS_pic_31__38_Instruction_5F_JUMP_2E_weak (const GGS_pic_31__38_Instruction_5F_JUMP & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMP_2E_weak GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JUMP_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMP GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_JUMP result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_JUMP * p = (cPtr_pic_31__38_Instruction_5F_JUMP *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_JUMP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMP GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::bang_pic_31__38_Instruction_5F_JUMP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_JUMP result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_JUMP) ;
      result = GGS_pic_31__38_Instruction_5F_JUMP ((cPtr_pic_31__38_Instruction_5F_JUMP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_JUMP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP_2E_weak ("pic18Instruction_JUMP.weak",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_JUMP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMP_2E_weak GGS_pic_31__38_Instruction_5F_JUMP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JUMP_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_JUMP_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_JUMP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_JUMP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak & GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_JUMPCC & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak (const GGS_pic_31__38_Instruction_5F_JUMPCC & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMPCC GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_JUMPCC result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_JUMPCC * p = (cPtr_pic_31__38_Instruction_5F_JUMPCC *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_JUMPCC (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMPCC GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::bang_pic_31__38_Instruction_5F_JUMPCC_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_JUMPCC result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_JUMPCC) ;
      result = GGS_pic_31__38_Instruction_5F_JUMPCC ((cPtr_pic_31__38_Instruction_5F_JUMPCC *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_JUMPCC.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC_2E_weak ("pic18Instruction_JUMPCC.weak",
                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_JUMPCC_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_JUMPCC_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_JUMPCC.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_withNoOperand reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_withNoOperand::objectCompare (const GGS_pic_31__38_Instruction_5F_withNoOperand & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_withNoOperand::GGS_pic_31__38_Instruction_5F_withNoOperand (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_withNoOperand GGS_pic_31__38_Instruction_5F_withNoOperand::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_withNoOperand * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_withNoOperand (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_withNoOperand_init_21__21_ (in_mInstructionLocation, in_mKind, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_withNoOperand result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::
pic_31__38_Instruction_5F_withNoOperand_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_withNoOperand::GGS_pic_31__38_Instruction_5F_withNoOperand (const cPtr_pic_31__38_Instruction_5F_withNoOperand * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionWithNoOperandKind GGS_pic_31__38_Instruction_5F_withNoOperand::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_InstructionWithNoOperandKind () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_withNoOperand * p = (cPtr_pic_31__38_Instruction_5F_withNoOperand *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_withNoOperand class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_withNoOperand::cPtr_pic_31__38_Instruction_5F_withNoOperand (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_withNoOperand::cPtr_pic_31__38_Instruction_5F_withNoOperand (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_pic_31__38_InstructionWithNoOperandKind & in_mKind,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_withNoOperand::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ;
}

void cPtr_pic_31__38_Instruction_5F_withNoOperand::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_withNoOperand:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_withNoOperand::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_withNoOperand (mProperty_mInstructionLocation, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_withNoOperand::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_withNoOperand generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ("pic18Instruction_withNoOperand",
                                                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_withNoOperand::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_withNoOperand::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_withNoOperand (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_withNoOperand GGS_pic_31__38_Instruction_5F_withNoOperand::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_withNoOperand result ;
  const GGS_pic_31__38_Instruction_5F_withNoOperand * p = (const GGS_pic_31__38_Instruction_5F_withNoOperand *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_withNoOperand *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_withNoOperand", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak & GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_withNoOperand & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak (const GGS_pic_31__38_Instruction_5F_withNoOperand & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_withNoOperand GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_withNoOperand result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_withNoOperand * p = (cPtr_pic_31__38_Instruction_5F_withNoOperand *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_withNoOperand (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_withNoOperand GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::bang_pic_31__38_Instruction_5F_withNoOperand_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_withNoOperand result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_withNoOperand) ;
      result = GGS_pic_31__38_Instruction_5F_withNoOperand ((cPtr_pic_31__38_Instruction_5F_withNoOperand *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_withNoOperand.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand_2E_weak ("pic18Instruction_withNoOperand.weak",
                                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_withNoOperand_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_withNoOperand_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_withNoOperand.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_literalOperation reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_literalOperation::objectCompare (const GGS_pic_31__38_Instruction_5F_literalOperation & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_literalOperation::GGS_pic_31__38_Instruction_5F_literalOperation (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_literalOperation GGS_pic_31__38_Instruction_5F_literalOperation::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                  const GGS_immediatExpression & in_mImmediatExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_literalOperation * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_literalOperation (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_literalOperation_init_21__21__21_ (in_mInstructionLocation, in_mLiteralInstruction, in_mImmediatExpression, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_literalOperation result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::
pic_31__38_Instruction_5F_literalOperation_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                             const GGS_immediatExpression & in_mImmediatExpression,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_literalOperation::GGS_pic_31__38_Instruction_5F_literalOperation (const cPtr_pic_31__38_Instruction_5F_literalOperation * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
}
//--------------------------------------------------------------------------------------------------

GGS_literal_5F_instruction_5F_opcode GGS_pic_31__38_Instruction_5F_literalOperation::readProperty_mLiteralInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_literal_5F_instruction_5F_opcode () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_literalOperation * p = (cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
    return p->mProperty_mLiteralInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_literalOperation::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_literalOperation * p = (cPtr_pic_31__38_Instruction_5F_literalOperation *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_literalOperation class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_literalOperation::cPtr_pic_31__38_Instruction_5F_literalOperation (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_literalOperation::cPtr_pic_31__38_Instruction_5F_literalOperation (const GGS_location & in_mInstructionLocation,
                                                                                                  const GGS_literal_5F_instruction_5F_opcode & in_mLiteralInstruction,
                                                                                                  const GGS_immediatExpression & in_mImmediatExpression,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLiteralInstruction (),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLiteralInstruction = in_mLiteralInstruction ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_literalOperation::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ;
}

void cPtr_pic_31__38_Instruction_5F_literalOperation::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_literalOperation:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_literalOperation::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_literalOperation (mProperty_mInstructionLocation, mProperty_mLiteralInstruction, mProperty_mImmediatExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_literalOperation::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInstruction.printNonNullClassInstanceProperties ("mLiteralInstruction") ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_literalOperation generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ("pic18Instruction_literalOperation",
                                                                                               & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_literalOperation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_literalOperation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_literalOperation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_literalOperation GGS_pic_31__38_Instruction_5F_literalOperation::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_literalOperation result ;
  const GGS_pic_31__38_Instruction_5F_literalOperation * p = (const GGS_pic_31__38_Instruction_5F_literalOperation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_literalOperation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_literalOperation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak & GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_literalOperation & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak (const GGS_pic_31__38_Instruction_5F_literalOperation & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_literalOperation GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_literalOperation result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_literalOperation * p = (cPtr_pic_31__38_Instruction_5F_literalOperation *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_literalOperation (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_literalOperation GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::bang_pic_31__38_Instruction_5F_literalOperation_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_literalOperation result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_literalOperation) ;
      result = GGS_pic_31__38_Instruction_5F_literalOperation ((cPtr_pic_31__38_Instruction_5F_literalOperation *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_literalOperation.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation_2E_weak ("pic18Instruction_literalOperation.weak",
                                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_literalOperation_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_literalOperation_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_literalOperation.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_fnop reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_fnop::objectCompare (const GGS_pic_31__38_Instruction_5F_fnop & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_fnop::GGS_pic_31__38_Instruction_5F_fnop (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_fnop GGS_pic_31__38_Instruction_5F_fnop::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_immediatExpression & in_mImmediatExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_fnop * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_fnop (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_fnop_init_21__21_ (in_mInstructionLocation, in_mImmediatExpression, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_fnop result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::
pic_31__38_Instruction_5F_fnop_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                             const GGS_immediatExpression & in_mImmediatExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_fnop::GGS_pic_31__38_Instruction_5F_fnop (const cPtr_pic_31__38_Instruction_5F_fnop * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_fnop) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_fnop::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_fnop * p = (cPtr_pic_31__38_Instruction_5F_fnop *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_fnop) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_fnop class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_fnop::cPtr_pic_31__38_Instruction_5F_fnop (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_fnop::cPtr_pic_31__38_Instruction_5F_fnop (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_immediatExpression & in_mImmediatExpression,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_fnop::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ;
}

void cPtr_pic_31__38_Instruction_5F_fnop::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_fnop:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_fnop::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_fnop (mProperty_mInstructionLocation, mProperty_mImmediatExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_fnop::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_fnop generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ("pic18Instruction_fnop",
                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_fnop::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_fnop::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_fnop (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_fnop GGS_pic_31__38_Instruction_5F_fnop::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_fnop result ;
  const GGS_pic_31__38_Instruction_5F_fnop * p = (const GGS_pic_31__38_Instruction_5F_fnop *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_fnop *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_fnop", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_fnop_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_fnop_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_fnop_2E_weak::GGS_pic_31__38_Instruction_5F_fnop_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_fnop_2E_weak & GGS_pic_31__38_Instruction_5F_fnop_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_fnop & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_fnop_2E_weak::GGS_pic_31__38_Instruction_5F_fnop_2E_weak (const GGS_pic_31__38_Instruction_5F_fnop & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_fnop_2E_weak GGS_pic_31__38_Instruction_5F_fnop_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_fnop_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_fnop GGS_pic_31__38_Instruction_5F_fnop_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_fnop result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_fnop * p = (cPtr_pic_31__38_Instruction_5F_fnop *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_fnop (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_fnop GGS_pic_31__38_Instruction_5F_fnop_2E_weak::bang_pic_31__38_Instruction_5F_fnop_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_fnop result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_fnop) ;
      result = GGS_pic_31__38_Instruction_5F_fnop ((cPtr_pic_31__38_Instruction_5F_fnop *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_fnop.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop_2E_weak ("pic18Instruction_fnop.weak",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_fnop_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_fnop_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_fnop_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_fnop_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_fnop_2E_weak GGS_pic_31__38_Instruction_5F_fnop_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_fnop_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_fnop_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_fnop_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_fnop_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_fnop.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_LFSR_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::GGS_pic_31__38_Instruction_5F_LFSR_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR_2E_weak & GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_LFSR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::GGS_pic_31__38_Instruction_5F_LFSR_2E_weak (const GGS_pic_31__38_Instruction_5F_LFSR & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR_2E_weak GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LFSR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_LFSR result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_LFSR * p = (cPtr_pic_31__38_Instruction_5F_LFSR *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_LFSR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::bang_pic_31__38_Instruction_5F_LFSR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_LFSR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_LFSR) ;
      result = GGS_pic_31__38_Instruction_5F_LFSR ((cPtr_pic_31__38_Instruction_5F_LFSR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_LFSR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR_2E_weak ("pic18Instruction_LFSR.weak",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LFSR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_LFSR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LFSR_2E_weak GGS_pic_31__38_Instruction_5F_LFSR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LFSR_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_LFSR_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_LFSR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_LFSR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LFSR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_LTBLPTR reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_LTBLPTR::objectCompare (const GGS_pic_31__38_Instruction_5F_LTBLPTR & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_LTBLPTR::GGS_pic_31__38_Instruction_5F_LTBLPTR (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR GGS_pic_31__38_Instruction_5F_LTBLPTR::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_immediatExpression & in_mImmediatExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_LTBLPTR * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_LTBLPTR (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_LTBLPTR_init_21__21_ (in_mInstructionLocation, in_mImmediatExpression, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_LTBLPTR result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::
pic_31__38_Instruction_5F_LTBLPTR_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                const GGS_immediatExpression & in_mImmediatExpression,
                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR::GGS_pic_31__38_Instruction_5F_LTBLPTR (const cPtr_pic_31__38_Instruction_5F_LTBLPTR * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
}
//--------------------------------------------------------------------------------------------------

GGS_immediatExpression GGS_pic_31__38_Instruction_5F_LTBLPTR::readProperty_mImmediatExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_immediatExpression () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (cPtr_pic_31__38_Instruction_5F_LTBLPTR *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
    return p->mProperty_mImmediatExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_LTBLPTR class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LTBLPTR::cPtr_pic_31__38_Instruction_5F_LTBLPTR (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mImmediatExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_LTBLPTR::cPtr_pic_31__38_Instruction_5F_LTBLPTR (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_immediatExpression & in_mImmediatExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mImmediatExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mImmediatExpression = in_mImmediatExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_LTBLPTR::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;
}

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_LTBLPTR:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImmediatExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_LTBLPTR::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_LTBLPTR (mProperty_mInstructionLocation, mProperty_mImmediatExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_LTBLPTR::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mImmediatExpression.printNonNullClassInstanceProperties ("mImmediatExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_LTBLPTR generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ("pic18Instruction_LTBLPTR",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_LTBLPTR::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_LTBLPTR::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_LTBLPTR (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR GGS_pic_31__38_Instruction_5F_LTBLPTR::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LTBLPTR result ;
  const GGS_pic_31__38_Instruction_5F_LTBLPTR * p = (const GGS_pic_31__38_Instruction_5F_LTBLPTR *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_LTBLPTR *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LTBLPTR", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak & GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_LTBLPTR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak (const GGS_pic_31__38_Instruction_5F_LTBLPTR & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_LTBLPTR result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_LTBLPTR * p = (cPtr_pic_31__38_Instruction_5F_LTBLPTR *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_LTBLPTR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::bang_pic_31__38_Instruction_5F_LTBLPTR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_LTBLPTR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_LTBLPTR) ;
      result = GGS_pic_31__38_Instruction_5F_LTBLPTR ((cPtr_pic_31__38_Instruction_5F_LTBLPTR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_LTBLPTR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak ("pic18Instruction_LTBLPTR.weak",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_LTBLPTR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LTBLPTR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak & GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak (const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_LDATA_38_PTR result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_LDATA_38_PTR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::bang_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_LDATA_38_PTR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR) ;
      result = GGS_pic_31__38_Instruction_5F_LDATA_38_PTR ((cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_LDATA8PTR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak ("pic18Instruction_LDATA8PTR.weak",
                                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LDATA8PTR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak & GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak (const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR * p = (cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::bang_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR) ;
      result = GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR ((cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_LDATA16PTR.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak ("pic18Instruction_LDATA16PTR.weak",
                                                                                                       & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_LDATA16PTR.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_TBLRD reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_TBLRD::objectCompare (const GGS_pic_31__38_Instruction_5F_TBLRD & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_TBLRD::GGS_pic_31__38_Instruction_5F_TBLRD (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD GGS_pic_31__38_Instruction_5F_TBLRD::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_tableAccessOption & in_mOption,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_TBLRD * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_TBLRD (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_TBLRD_init_21__21_ (in_mInstructionLocation, in_mOption, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_TBLRD result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::
pic_31__38_Instruction_5F_TBLRD_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_tableAccessOption & in_mOption,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOption = in_mOption ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD::GGS_pic_31__38_Instruction_5F_TBLRD (const cPtr_pic_31__38_Instruction_5F_TBLRD * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_pic_31__38_Instruction_5F_TBLRD::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableAccessOption () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_TBLRD * p = (cPtr_pic_31__38_Instruction_5F_TBLRD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_TBLRD class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_TBLRD::cPtr_pic_31__38_Instruction_5F_TBLRD (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mOption () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_TBLRD::cPtr_pic_31__38_Instruction_5F_TBLRD (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_tableAccessOption & in_mOption,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOption () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOption = in_mOption ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_TBLRD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;
}

void cPtr_pic_31__38_Instruction_5F_TBLRD::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_TBLRD:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_TBLRD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_TBLRD (mProperty_mInstructionLocation, mProperty_mOption, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_TBLRD::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_TBLRD generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ("pic18Instruction_TBLRD",
                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_TBLRD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_TBLRD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_TBLRD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD GGS_pic_31__38_Instruction_5F_TBLRD::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_TBLRD result ;
  const GGS_pic_31__38_Instruction_5F_TBLRD * p = (const GGS_pic_31__38_Instruction_5F_TBLRD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_TBLRD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_TBLRD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak & GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_TBLRD & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak (const GGS_pic_31__38_Instruction_5F_TBLRD & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_TBLRD result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_TBLRD * p = (cPtr_pic_31__38_Instruction_5F_TBLRD *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_TBLRD (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::bang_pic_31__38_Instruction_5F_TBLRD_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_TBLRD result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_TBLRD) ;
      result = GGS_pic_31__38_Instruction_5F_TBLRD ((cPtr_pic_31__38_Instruction_5F_TBLRD *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_TBLRD.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD_2E_weak ("pic18Instruction_TBLRD.weak",
                                                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLRD_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_TBLRD_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_TBLRD.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_TBLWT reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_TBLWT::objectCompare (const GGS_pic_31__38_Instruction_5F_TBLWT & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_TBLWT::GGS_pic_31__38_Instruction_5F_TBLWT (void) :
GGS_pic_31__38_PiccoloSimpleInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT GGS_pic_31__38_Instruction_5F_TBLWT::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_tableAccessOption & in_mOption,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_TBLWT * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_TBLWT (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_TBLWT_init_21__21_ (in_mInstructionLocation, in_mOption, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_TBLWT result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::
pic_31__38_Instruction_5F_TBLWT_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_tableAccessOption & in_mOption,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOption = in_mOption ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT::GGS_pic_31__38_Instruction_5F_TBLWT (const cPtr_pic_31__38_Instruction_5F_TBLWT * inSourcePtr) :
GGS_pic_31__38_PiccoloSimpleInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
}
//--------------------------------------------------------------------------------------------------

GGS_tableAccessOption GGS_pic_31__38_Instruction_5F_TBLWT::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableAccessOption () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_TBLWT * p = (cPtr_pic_31__38_Instruction_5F_TBLWT *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_TBLWT class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_TBLWT::cPtr_pic_31__38_Instruction_5F_TBLWT (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (inCompiler COMMA_THERE),
mProperty_mOption () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_TBLWT::cPtr_pic_31__38_Instruction_5F_TBLWT (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_tableAccessOption & in_mOption,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloSimpleInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mOption () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mOption = in_mOption ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_TBLWT::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ;
}

void cPtr_pic_31__38_Instruction_5F_TBLWT::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_TBLWT:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_TBLWT::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_TBLWT (mProperty_mInstructionLocation, mProperty_mOption, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_TBLWT::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloSimpleInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_TBLWT generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ("pic18Instruction_TBLWT",
                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_TBLWT::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_TBLWT::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_TBLWT (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT GGS_pic_31__38_Instruction_5F_TBLWT::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_TBLWT result ;
  const GGS_pic_31__38_Instruction_5F_TBLWT * p = (const GGS_pic_31__38_Instruction_5F_TBLWT *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_TBLWT *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_TBLWT", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak (void) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak & GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_TBLWT & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak (const GGS_pic_31__38_Instruction_5F_TBLWT & inSource) :
GGS_pic_31__38_PiccoloSimpleInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_TBLWT result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_TBLWT * p = (cPtr_pic_31__38_Instruction_5F_TBLWT *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_TBLWT (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::bang_pic_31__38_Instruction_5F_TBLWT_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_TBLWT result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_TBLWT) ;
      result = GGS_pic_31__38_Instruction_5F_TBLWT ((cPtr_pic_31__38_Instruction_5F_TBLWT *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_TBLWT.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT_2E_weak ("pic18Instruction_TBLWT.weak",
                                                                                            & kTypeDescriptor_GALGAS_pic_31__38_PiccoloSimpleInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_TBLWT_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_TBLWT_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_TBLWT.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_MNOP_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::GGS_pic_31__38_Instruction_5F_MNOP_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP_2E_weak & GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_MNOP & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::GGS_pic_31__38_Instruction_5F_MNOP_2E_weak (const GGS_pic_31__38_Instruction_5F_MNOP & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP_2E_weak GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_MNOP_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_MNOP result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_MNOP * p = (cPtr_pic_31__38_Instruction_5F_MNOP *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_MNOP (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::bang_pic_31__38_Instruction_5F_MNOP_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_MNOP result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_MNOP) ;
      result = GGS_pic_31__38_Instruction_5F_MNOP ((cPtr_pic_31__38_Instruction_5F_MNOP *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_MNOP.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP_2E_weak ("pic18Instruction_MNOP.weak",
                                                                                           & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_MNOP_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_MNOP_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_MNOP_2E_weak GGS_pic_31__38_Instruction_5F_MNOP_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_MNOP_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_MNOP_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_MNOP_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_MNOP_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_MNOP.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak & GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_NOPBRA & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak (const GGS_pic_31__38_Instruction_5F_NOPBRA & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_NOPBRA result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_NOPBRA * p = (cPtr_pic_31__38_Instruction_5F_NOPBRA *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_NOPBRA (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::bang_pic_31__38_Instruction_5F_NOPBRA_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_NOPBRA result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_NOPBRA) ;
      result = GGS_pic_31__38_Instruction_5F_NOPBRA ((cPtr_pic_31__38_Instruction_5F_NOPBRA *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_NOPBRA.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA_2E_weak ("pic18Instruction_NOPBRA.weak",
                                                                                             & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_NOPBRA_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_NOPBRA_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_NOPBRA.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_FOREVER reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FOREVER::objectCompare (const GGS_pic_31__38_Instruction_5F_FOREVER & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FOREVER::GGS_pic_31__38_Instruction_5F_FOREVER (void) :
GGS_pic_31__38_PiccoloInstruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER GGS_pic_31__38_Instruction_5F_FOREVER::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_pic_31__38_InstructionList & in_mInstructionList,
                  const GGS_location & in_mEndOfInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_pic_31__38_Instruction_5F_FOREVER * object = nullptr ;
  macroMyNew (object, cPtr_pic_31__38_Instruction_5F_FOREVER (inCompiler COMMA_THERE)) ;
  object->pic_31__38_Instruction_5F_FOREVER_init_21__21__21_ (in_mInstructionLocation, in_mInstructionList, in_mEndOfInstructionList, inCompiler) ;
  const GGS_pic_31__38_Instruction_5F_FOREVER result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::
pic_31__38_Instruction_5F_FOREVER_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                    const GGS_location & in_mEndOfInstructionList,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER::GGS_pic_31__38_Instruction_5F_FOREVER (const cPtr_pic_31__38_Instruction_5F_FOREVER * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_pic_31__38_Instruction_5F_FOREVER::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_InstructionList () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FOREVER * p = (cPtr_pic_31__38_Instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_pic_31__38_Instruction_5F_FOREVER::readProperty_mEndOfInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_FOREVER * p = (cPtr_pic_31__38_Instruction_5F_FOREVER *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
    return p->mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_FOREVER class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FOREVER::cPtr_pic_31__38_Instruction_5F_FOREVER (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_FOREVER::cPtr_pic_31__38_Instruction_5F_FOREVER (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                const GGS_location & in_mEndOfInstructionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_pic_31__38_Instruction_5F_FOREVER::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ;
}

void cPtr_pic_31__38_Instruction_5F_FOREVER::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@pic18Instruction_FOREVER:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_FOREVER::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_pic_31__38_Instruction_5F_FOREVER (mProperty_mInstructionLocation, mProperty_mInstructionList, mProperty_mEndOfInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_FOREVER::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mEndOfInstructionList.printNonNullClassInstanceProperties ("mEndOfInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_FOREVER generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ("pic18Instruction_FOREVER",
                                                                                      & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_FOREVER::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_FOREVER::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_FOREVER (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER GGS_pic_31__38_Instruction_5F_FOREVER::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FOREVER result ;
  const GGS_pic_31__38_Instruction_5F_FOREVER * p = (const GGS_pic_31__38_Instruction_5F_FOREVER *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_FOREVER *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FOREVER", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak & GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_FOREVER & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak (const GGS_pic_31__38_Instruction_5F_FOREVER & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_FOREVER result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_FOREVER * p = (cPtr_pic_31__38_Instruction_5F_FOREVER *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_FOREVER (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::bang_pic_31__38_Instruction_5F_FOREVER_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_FOREVER result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_FOREVER) ;
      result = GGS_pic_31__38_Instruction_5F_FOREVER ((cPtr_pic_31__38_Instruction_5F_FOREVER *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_FOREVER.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER_2E_weak ("pic18Instruction_FOREVER.weak",
                                                                                              & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_FOREVER_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_FOREVER_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_FOREVER.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum if_semi_colon_op
//--------------------------------------------------------------------------------------------------

GGS_if_5F_semi_5F_colon_5F_op::GGS_if_5F_semi_5F_colon_5F_op (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_if_5F_semi_5F_colon_5F_op GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSEQ (UNUSED_LOCATION_ARGS) {
  GGS_if_5F_semi_5F_colon_5F_op result ;
  result.mEnum = Enumeration::enum_CPFSEQ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_if_5F_semi_5F_colon_5F_op GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSGT (UNUSED_LOCATION_ARGS) {
  GGS_if_5F_semi_5F_colon_5F_op result ;
  result.mEnum = Enumeration::enum_CPFSGT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_if_5F_semi_5F_colon_5F_op GGS_if_5F_semi_5F_colon_5F_op::class_func_CPFSLT (UNUSED_LOCATION_ARGS) {
  GGS_if_5F_semi_5F_colon_5F_op result ;
  result.mEnum = Enumeration::enum_CPFSLT ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_if_5F_semi_5F_colon_5F_op GGS_if_5F_semi_5F_colon_5F_op::class_func_TSTFSZ (UNUSED_LOCATION_ARGS) {
  GGS_if_5F_semi_5F_colon_5F_op result ;
  result.mEnum = Enumeration::enum_TSTFSZ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_if_5F_semi_5F_colon_5F_op [5] = {
  "(not built)",
  "CPFSEQ",
  "CPFSGT",
  "CPFSLT",
  "TSTFSZ"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_if_5F_semi_5F_colon_5F_op::getter_isCPFSEQ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSEQ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_if_5F_semi_5F_colon_5F_op::getter_isCPFSGT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSGT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_if_5F_semi_5F_colon_5F_op::getter_isCPFSLT (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_CPFSLT == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_if_5F_semi_5F_colon_5F_op::getter_isTSTFSZ (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_TSTFSZ == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_if_5F_semi_5F_colon_5F_op::description (String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @if_semi_colon_op: ") ;
  ioString.appendCString (gEnumNameArrayFor_if_5F_semi_5F_colon_5F_op [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @if_semi_colon_op generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_if_5F_semi_5F_colon_5F_op ("if_semi_colon_op",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_if_5F_semi_5F_colon_5F_op::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_if_5F_semi_5F_colon_5F_op ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_if_5F_semi_5F_colon_5F_op::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_if_5F_semi_5F_colon_5F_op (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_if_5F_semi_5F_colon_5F_op GGS_if_5F_semi_5F_colon_5F_op::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_if_5F_semi_5F_colon_5F_op result ;
  const GGS_if_5F_semi_5F_colon_5F_op * p = (const GGS_if_5F_semi_5F_colon_5F_op *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_if_5F_semi_5F_colon_5F_op *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("if_semi_colon_op", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (void) :
GGS_pic_31__38_PiccoloInstruction () {
}


void cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::
pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                            const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * inSourcePtr) :
GGS_pic_31__38_PiccoloInstruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_PiccoloSimpleInstruction GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::readProperty_mEmbeddedInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_pic_31__38_PiccoloSimpleInstruction () ;
  }else{
    cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;
    return p->mProperty_mEmbeddedInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @pic18Instruction_IF_SEMI_COLON class
//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (inCompiler COMMA_THERE),
mProperty_mEmbeddedInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_pic_31__38_PiccoloSimpleInstruction & in_mEmbeddedInstruction,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_pic_31__38_PiccoloInstruction (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mEmbeddedInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEmbeddedInstruction = in_mEmbeddedInstruction ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::printNonNullClassInstanceProperties (void) const {
    cPtr_pic_31__38_PiccoloInstruction::printNonNullClassInstanceProperties () ;
    mProperty_mEmbeddedInstruction.printNonNullClassInstanceProperties ("mEmbeddedInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_IF_SEMI_COLON generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ("pic18Instruction_IF_SEMI_COLON",
                                                                                                  & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON result ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * p = (const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_SEMI_COLON", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak & GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON & inSource) :
GGS_pic_31__38_PiccoloInstruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::bang_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON) ;
      result = GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON ((cPtr_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_IF_SEMI_COLON.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ("pic18Instruction_IF_SEMI_COLON.weak",
                                                                                                          & kTypeDescriptor_GALGAS_pic_31__38_PiccoloInstruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_SEMI_COLON.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak (void) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak & GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak (const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON & inSource) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::bang_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON) ;
      result = GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON ((cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_IF_FA_SEMI_COLON.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak ("pic18Instruction_IF_FA_SEMI_COLON.weak",
                                                                                                                & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_FA_SEMI_COLON.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak (void) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak & GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak (const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest & inSource) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_IF_5F_BitTest (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::bang_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_BitTest result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest) ;
      result = GGS_pic_31__38_Instruction_5F_IF_5F_BitTest ((cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_IF_BitTest.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak ("pic18Instruction_IF_BitTest.weak",
                                                                                                    & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_BitTest.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::objectCompare (const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak & inOperand) const {
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

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak (void) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak & GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak (const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec & inSource) :
GGS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::unwrappedValue (void) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  if (isValid ()) {
    const cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec * p = (cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) ptr () ;
    if (nullptr != p) {
      result = GGS_pic_31__38_Instruction_5F_IF_5F_IncDec (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::bang_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_Instruction_5F_IF_5F_IncDec result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec) ;
      result = GGS_pic_31__38_Instruction_5F_IF_5F_IncDec ((cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18Instruction_IF_IncDec.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak ("pic18Instruction_IF_IncDec.weak",
                                                                                                   & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_SEMI_5F_COLON_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak result ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak * p = (const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18Instruction_IF_IncDec.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak & GGS_pic_31__38_Instruction_5F_computed_5F_retlw_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_computed_5F_retlw & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_computed_5F_bra::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak & GGS_pic_31__38_Instruction_5F_computed_5F_bra_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_computed_5F_bra & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_computed_5F_goto::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak & GGS_pic_31__38_Instruction_5F_computed_5F_goto_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_computed_5F_goto & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak & GGS_pic_31__38_Instruction_5F_computed_5F_rcall_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_computed_5F_rcall & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_ConditionExpression_2E_weak::GGS_pic_31__38_ConditionExpression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_ConditionExpression_2E_weak & GGS_pic_31__38_ConditionExpression_2E_weak::operator = (const GGS_pic_31__38_ConditionExpression & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_RegisterTestCondition_2E_weak::GGS_pic_31__38_RegisterTestCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterTestCondition_2E_weak & GGS_pic_31__38_RegisterTestCondition_2E_weak::operator = (const GGS_pic_31__38_RegisterTestCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_RegisterComparisonCondition_2E_weak::GGS_pic_31__38_RegisterComparisonCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RegisterComparisonCondition_2E_weak & GGS_pic_31__38_RegisterComparisonCondition_2E_weak::operator = (const GGS_pic_31__38_RegisterComparisonCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::GGS_pic_31__38_IncDecRegisterInCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_IncDecRegisterInCondition_2E_weak & GGS_pic_31__38_IncDecRegisterInCondition_2E_weak::operator = (const GGS_pic_31__38_IncDecRegisterInCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_pic_31__38_BccInStructuredCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_pic_31__38_BccInStructuredCondition_2E_weak::GGS_pic_31__38_BccInStructuredCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BccInStructuredCondition_2E_weak & GGS_pic_31__38_BccInStructuredCondition_2E_weak::operator = (const GGS_pic_31__38_BccInStructuredCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_pic_31__38_NegateCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_pic_31__38_NegateCondition_2E_weak::GGS_pic_31__38_NegateCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_NegateCondition_2E_weak & GGS_pic_31__38_NegateCondition_2E_weak::operator = (const GGS_pic_31__38_NegateCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_pic_31__38_AndCondition::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_pic_31__38_AndCondition_2E_weak::GGS_pic_31__38_AndCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_AndCondition_2E_weak & GGS_pic_31__38_AndCondition_2E_weak::operator = (const GGS_pic_31__38_AndCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::GGS_pic_31__38_BitTestInStructuredCondition_2E_weak (void) :
GGS_pic_31__38_ConditionExpression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_BitTestInStructuredCondition_2E_weak & GGS_pic_31__38_BitTestInStructuredCondition_2E_weak::operator = (const GGS_pic_31__38_BitTestInStructuredCondition & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_structured_5F_if::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak & GGS_pic_31__38_Instruction_5F_structured_5F_if_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_structured_5F_if & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

class CollectionElementPtr_pic_31__38_DoWhilePartList : public CollectionElementPtr {
  public: GGS_pic_31__38_DoWhilePartList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_pic_31__38_DoWhilePartList (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                           const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                           const GGS_location & in_mEndOfPartLocation
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_pic_31__38_DoWhilePartList (const GGS_pic_31__38_DoWhilePartList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_DoWhilePartList::CollectionElementPtr_pic_31__38_DoWhilePartList (const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                                                  const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                  const GGS_location & in_mEndOfPartLocation
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mCondition, in_mInstructionList, in_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_DoWhilePartList::CollectionElementPtr_pic_31__38_DoWhilePartList (const GGS_pic_31__38_DoWhilePartList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mCondition, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_pic_31__38_DoWhilePartList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_pic_31__38_DoWhilePartList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_pic_31__38_DoWhilePartList (mObject.mProperty_mCondition, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfPartLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_DoWhilePartList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList::GGS_pic_31__38_DoWhilePartList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_DoWhilePartList::GGS_pic_31__38_DoWhilePartList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_pic_31__38_DoWhilePartList * p = (CollectionElementPtr_pic_31__38_DoWhilePartList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_pic_31__38_DoWhilePartList) ;
    const GGS_pic_31__38_DoWhilePartList_2E_element element (p->mObject.mProperty_mCondition, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfPartLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_DoWhilePartList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_pic_31__38_ConditionExpression & in_mCondition,
                                                                const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                const GGS_location & in_mEndOfPartLocation
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_pic_31__38_DoWhilePartList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_pic_31__38_DoWhilePartList (in_mCondition, in_mInstructionList, in_mEndOfPartLocation COMMA_THERE)) ;
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

AbstractPtrClass * cPtr_pic_31__38_Instruction_5F_do_5F_while::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak (void) :
GGS_pic_31__38_PiccoloInstruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak & GGS_pic_31__38_Instruction_5F_do_5F_while_2E_weak::operator = (const GGS_pic_31__38_Instruction_5F_do_5F_while & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

class CollectionElementPtr_pic_31__38_InterruptDefinitionList : public CollectionElementPtr {
  public: GGS_pic_31__38_InterruptDefinitionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_pic_31__38_InterruptDefinitionList (const GGS_lstring & in_mInterruptName,
                                                                   const GGS_bool & in_mFastReturn,
                                                                   const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                   const GGS_location & in_mEndOfInterruptLocation
                                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_pic_31__38_InterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_InterruptDefinitionList::CollectionElementPtr_pic_31__38_InterruptDefinitionList (const GGS_lstring & in_mInterruptName,
                                                                                                                  const GGS_bool & in_mFastReturn,
                                                                                                                  const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                  const GGS_location & in_mEndOfInterruptLocation
                                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInterruptName, in_mFastReturn, in_mInstructionList, in_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_InterruptDefinitionList::CollectionElementPtr_pic_31__38_InterruptDefinitionList (const GGS_pic_31__38_InterruptDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInterruptName, inElement.mProperty_mFastReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInterruptLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_pic_31__38_InterruptDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_pic_31__38_InterruptDefinitionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_pic_31__38_InterruptDefinitionList (mObject.mProperty_mInterruptName, mObject.mProperty_mFastReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInterruptLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_InterruptDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList::GGS_pic_31__38_InterruptDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InterruptDefinitionList::GGS_pic_31__38_InterruptDefinitionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_pic_31__38_InterruptDefinitionList * p = (CollectionElementPtr_pic_31__38_InterruptDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_pic_31__38_InterruptDefinitionList) ;
    const GGS_pic_31__38_InterruptDefinitionList_2E_element element (p->mObject.mProperty_mInterruptName, p->mObject.mProperty_mFastReturn, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfInterruptLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_InterruptDefinitionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                        const GGS_lstring & in_mInterruptName,
                                                                        const GGS_bool & in_mFastReturn,
                                                                        const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                        const GGS_location & in_mEndOfInterruptLocation
                                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_pic_31__38_InterruptDefinitionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_pic_31__38_InterruptDefinitionList (in_mInterruptName, in_mFastReturn, in_mInstructionList, in_mEndOfInterruptLocation COMMA_THERE)) ;
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

class CollectionElementPtr_pic_31__38_RoutineDefinitionList : public CollectionElementPtr {
  public: GGS_pic_31__38_RoutineDefinitionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_pic_31__38_RoutineDefinitionList (const GGS_lstring & in_mRoutineName,
                                                                 const GGS_luint & in_mRequiredBank,
                                                                 const GGS_luint & in_mReturnedBank,
                                                                 const GGS_bool & in_mPreservesBank,
                                                                 const GGS_bool & in_mIsNoReturn,
                                                                 const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                 const GGS_location & in_mEndOfRoutineLocation
                                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_pic_31__38_RoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_RoutineDefinitionList::CollectionElementPtr_pic_31__38_RoutineDefinitionList (const GGS_lstring & in_mRoutineName,
                                                                                                              const GGS_luint & in_mRequiredBank,
                                                                                                              const GGS_luint & in_mReturnedBank,
                                                                                                              const GGS_bool & in_mPreservesBank,
                                                                                                              const GGS_bool & in_mIsNoReturn,
                                                                                                              const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                              const GGS_location & in_mEndOfRoutineLocation
                                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_RoutineDefinitionList::CollectionElementPtr_pic_31__38_RoutineDefinitionList (const GGS_pic_31__38_RoutineDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mRequiredBank, inElement.mProperty_mReturnedBank, inElement.mProperty_mPreservesBank, inElement.mProperty_mIsNoReturn, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfRoutineLocation) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_pic_31__38_RoutineDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_pic_31__38_RoutineDefinitionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_pic_31__38_RoutineDefinitionList (mObject.mProperty_mRoutineName, mObject.mProperty_mRequiredBank, mObject.mProperty_mReturnedBank, mObject.mProperty_mPreservesBank, mObject.mProperty_mIsNoReturn, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfRoutineLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_RoutineDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList::GGS_pic_31__38_RoutineDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_RoutineDefinitionList::GGS_pic_31__38_RoutineDefinitionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_pic_31__38_RoutineDefinitionList * p = (CollectionElementPtr_pic_31__38_RoutineDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_pic_31__38_RoutineDefinitionList) ;
    const GGS_pic_31__38_RoutineDefinitionList_2E_element element (p->mObject.mProperty_mRoutineName, p->mObject.mProperty_mRequiredBank, p->mObject.mProperty_mReturnedBank, p->mObject.mProperty_mPreservesBank, p->mObject.mProperty_mIsNoReturn, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mEndOfRoutineLocation) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_RoutineDefinitionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mRoutineName,
                                                                      const GGS_luint & in_mRequiredBank,
                                                                      const GGS_luint & in_mReturnedBank,
                                                                      const GGS_bool & in_mPreservesBank,
                                                                      const GGS_bool & in_mIsNoReturn,
                                                                      const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                      const GGS_location & in_mEndOfRoutineLocation
                                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_pic_31__38_RoutineDefinitionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_pic_31__38_RoutineDefinitionList (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn, in_mInstructionList, in_mEndOfRoutineLocation COMMA_THERE)) ;
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

class CollectionElementPtr_pic_31__38_MacroDefinitionList : public CollectionElementPtr {
  public: GGS_pic_31__38_MacroDefinitionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_pic_31__38_MacroDefinitionList (const GGS_lstring & in_mMacroName,
                                                               const GGS_lstringlist & in_mConstantNameList,
                                                               const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                               COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_pic_31__38_MacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_MacroDefinitionList::CollectionElementPtr_pic_31__38_MacroDefinitionList (const GGS_lstring & in_mMacroName,
                                                                                                          const GGS_lstringlist & in_mConstantNameList,
                                                                                                          const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mMacroName, in_mConstantNameList, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_pic_31__38_MacroDefinitionList::CollectionElementPtr_pic_31__38_MacroDefinitionList (const GGS_pic_31__38_MacroDefinitionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mMacroName, inElement.mProperty_mConstantNameList, inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_pic_31__38_MacroDefinitionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_pic_31__38_MacroDefinitionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_pic_31__38_MacroDefinitionList (mObject.mProperty_mMacroName, mObject.mProperty_mConstantNameList, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @pic_31__38_MacroDefinitionList
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList::GGS_pic_31__38_MacroDefinitionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_MacroDefinitionList::GGS_pic_31__38_MacroDefinitionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_pic_31__38_MacroDefinitionList * p = (CollectionElementPtr_pic_31__38_MacroDefinitionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_pic_31__38_MacroDefinitionList) ;
    const GGS_pic_31__38_MacroDefinitionList_2E_element element (p->mObject.mProperty_mMacroName, p->mObject.mProperty_mConstantNameList, p->mObject.mProperty_mInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_MacroDefinitionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                    const GGS_lstring & in_mMacroName,
                                                                    const GGS_lstringlist & in_mConstantNameList,
                                                                    const GGS_pic_31__38_InstructionList & in_mInstructionList
                                                                    COMMA_LOCATION_ARGS) {
  CollectionElementPtr_pic_31__38_MacroDefinitionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_pic_31__38_MacroDefinitionList (in_mMacroName, in_mConstantNameList, in_mInstructionList COMMA_THERE)) ;
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

class CollectionElementPtr_routineDeclarationList : public CollectionElementPtr {
  public: GGS_routineDeclarationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_routineDeclarationList (const GGS_lstring & in_mRoutineName,
                                                       const GGS_luint & in_mRequiredBank,
                                                       const GGS_luint & in_mReturnedBank,
                                                       const GGS_bool & in_mPreservesBank,
                                                       const GGS_bool & in_mIsNoReturn
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_routineDeclarationList (const GGS_routineDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_routineDeclarationList::CollectionElementPtr_routineDeclarationList (const GGS_lstring & in_mRoutineName,
                                                                                          const GGS_luint & in_mRequiredBank,
                                                                                          const GGS_luint & in_mReturnedBank,
                                                                                          const GGS_bool & in_mPreservesBank,
                                                                                          const GGS_bool & in_mIsNoReturn
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_routineDeclarationList::CollectionElementPtr_routineDeclarationList (const GGS_routineDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mRequiredBank, inElement.mProperty_mReturnedBank, inElement.mProperty_mPreservesBank, inElement.mProperty_mIsNoReturn) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_routineDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_routineDeclarationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_routineDeclarationList (mObject.mProperty_mRoutineName, mObject.mProperty_mRequiredBank, mObject.mProperty_mReturnedBank, mObject.mProperty_mPreservesBank, mObject.mProperty_mIsNoReturn COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @routineDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList::GGS_routineDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineDeclarationList::GGS_routineDeclarationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_routineDeclarationList * p = (CollectionElementPtr_routineDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_routineDeclarationList) ;
    const GGS_routineDeclarationList_2E_element element (p->mObject.mProperty_mRoutineName, p->mObject.mProperty_mRequiredBank, p->mObject.mProperty_mReturnedBank, p->mObject.mProperty_mPreservesBank, p->mObject.mProperty_mIsNoReturn) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_routineDeclarationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_lstring & in_mRoutineName,
                                                            const GGS_luint & in_mRequiredBank,
                                                            const GGS_luint & in_mReturnedBank,
                                                            const GGS_bool & in_mPreservesBank,
                                                            const GGS_bool & in_mIsNoReturn
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_routineDeclarationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_routineDeclarationList (in_mRoutineName, in_mRequiredBank, in_mReturnedBank, in_mPreservesBank, in_mIsNoReturn COMMA_THERE)) ;
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

class CollectionElementPtr_dataList : public CollectionElementPtr {
  public: GGS_dataList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_dataList (const GGS_lstring & in_mDataName,
                                         const GGS_immediatExpressionList & in_mValueList,
                                         const GGS_bool & in_mIsByteList
                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_dataList (const GGS_dataList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_dataList::CollectionElementPtr_dataList (const GGS_lstring & in_mDataName,
                                                              const GGS_immediatExpressionList & in_mValueList,
                                                              const GGS_bool & in_mIsByteList
                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mDataName, in_mValueList, in_mIsByteList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_dataList::CollectionElementPtr_dataList (const GGS_dataList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mDataName, inElement.mProperty_mValueList, inElement.mProperty_mIsByteList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_dataList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_dataList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_dataList (mObject.mProperty_mDataName, mObject.mProperty_mValueList, mObject.mProperty_mIsByteList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @dataList
//--------------------------------------------------------------------------------------------------

GGS_dataList::GGS_dataList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_dataList::GGS_dataList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_dataList * p = (CollectionElementPtr_dataList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_dataList) ;
    const GGS_dataList_2E_element element (p->mObject.mProperty_mDataName, p->mObject.mProperty_mValueList, p->mObject.mProperty_mIsByteList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dataList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                              const GGS_lstring & in_mDataName,
                                              const GGS_immediatExpressionList & in_mValueList,
                                              const GGS_bool & in_mIsByteList
                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_dataList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_dataList (in_mDataName, in_mValueList, in_mIsByteList COMMA_THERE)) ;
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

class CollectionElementPtr_checkpicList : public CollectionElementPtr {
  public: GGS_checkpicList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_checkpicList (const GGS_location & in_mErrorLocation,
                                             const GGS_lstringlist & in_mValueList
                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_checkpicList (const GGS_checkpicList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_checkpicList::CollectionElementPtr_checkpicList (const GGS_location & in_mErrorLocation,
                                                                      const GGS_lstringlist & in_mValueList
                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mErrorLocation, in_mValueList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_checkpicList::CollectionElementPtr_checkpicList (const GGS_checkpicList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mErrorLocation, inElement.mProperty_mValueList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_checkpicList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_checkpicList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_checkpicList (mObject.mProperty_mErrorLocation, mObject.mProperty_mValueList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @checkpicList
//--------------------------------------------------------------------------------------------------

GGS_checkpicList::GGS_checkpicList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_checkpicList::GGS_checkpicList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_checkpicList * p = (CollectionElementPtr_checkpicList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_checkpicList) ;
    const GGS_checkpicList_2E_element element (p->mObject.mProperty_mErrorLocation, p->mObject.mProperty_mValueList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_checkpicList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                  const GGS_location & in_mErrorLocation,
                                                  const GGS_lstringlist & in_mValueList
                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_checkpicList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_checkpicList (in_mErrorLocation, in_mValueList COMMA_THERE)) ;
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
//
//Abstract extension method '@baseline_assembly_instruction print'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_print (cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                GGS_string & io_ioListFileContents,
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
//  Extension Getter '@pic18InstructionWithNoOperandKind mnemonic'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_mnemonic (const GGS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_InstructionWithNoOperandKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_CLRWDT:
    {
      result_outResult = GGS_string ("CLRWDT") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_DAW:
    {
      result_outResult = GGS_string ("DAW") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_NOP:
    {
      result_outResult = GGS_string ("NOP") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_POP:
    {
      result_outResult = GGS_string ("POP") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_PUSH:
    {
      result_outResult = GGS_string ("PUSH") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_RESET:
    {
      result_outResult = GGS_string ("RESET") ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_SLEEP:
    {
      result_outResult = GGS_string ("SLEEP") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@baseline_instruction addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_addUsedRoutines (cPtr_baseline_5F_instruction * inObject,
                                          GGS_stringset & io_ioUsedRoutines,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_baseline_5F_instruction) ;
    inObject->method_addUsedRoutines (io_ioUsedRoutines, inCompiler COMMA_THERE) ;
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
//--------------------------------------------------------------------------------------------------
//  Map type @declaredRoutineMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap::GGS_declaredRoutineMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap::~ GGS_declaredRoutineMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap::GGS_declaredRoutineMap (const GGS_declaredRoutineMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap & GGS_declaredRoutineMap::operator = (const GGS_declaredRoutineMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredRoutineMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredRoutineMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declaredRoutineMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declaredRoutineMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_declaredRoutineMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_declaredRoutineMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_declaredRoutineMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_declaredRoutineMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::performInsert (const GGS_declaredRoutineMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>
GGS_declaredRoutineMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_declaredRoutineMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>>
GGS_declaredRoutineMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_declaredRoutineMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element_3F_ GGS_declaredRoutineMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declaredRoutineMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_declaredRoutineMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_declaredRoutineMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mRequiredBank = info->mProperty_mRequiredBank ;
      element.mProperty_mReturnedBank = info->mProperty_mReturnedBank ;
      element.mProperty_mPreservesBank = info->mProperty_mPreservesBank ;
      element.mProperty_mIsNoReturn = info->mProperty_mIsNoReturn ;
      element.mProperty_mInstructionList = info->mProperty_mInstructionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::class_func_mapWithMapToOverride (const GGS_declaredRoutineMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_declaredRoutineMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_declaredRoutineMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_luint inArgument0,
                                               GGS_luint inArgument1,
                                               GGS_bool inArgument2,
                                               GGS_bool inArgument3,
                                               GGS_pic_31__38_InstructionList inArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_declaredRoutineMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4) ;
  const char * kInsertErrorMessage = "the '%K' routine is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_luint & outArgument0,
                                               GGS_luint & outArgument1,
                                               GGS_bool & outArgument2,
                                               GGS_bool & outArgument3,
                                               GGS_pic_31__38_InstructionList & outArgument4,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info ;
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
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    outArgument0 = info->mProperty_mRequiredBank ;
    outArgument1 = info->mProperty_mReturnedBank ;
    outArgument2 = info->mProperty_mPreservesBank ;
    outArgument3 = info->mProperty_mIsNoReturn ;
    outArgument4 = info->mProperty_mInstructionList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_declaredRoutineMap::getter_mRequiredBankForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRequiredBank ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_declaredRoutineMap::getter_mReturnedBankForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_luint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mReturnedBank ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredRoutineMap::getter_mPreservesBankForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPreservesBank ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_declaredRoutineMap::getter_mIsNoReturnForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsNoReturn ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList GGS_declaredRoutineMap::getter_mInstructionListForKey (const GGS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_pic_31__38_InstructionList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element> info = infoForKey (key) ;
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

void GGS_declaredRoutineMap::setter_setMRequiredBankForKey (GGS_luint inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRequiredBank = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_setMReturnedBankForKey (GGS_luint inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mReturnedBank = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_setMPreservesBankForKey (GGS_bool inValue,
                                                             GGS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPreservesBank = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_setMIsNoReturnForKey (GGS_bool inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsNoReturn = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::setter_setMInstructionListForKey (GGS_pic_31__38_InstructionList inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_declaredRoutineMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

static void GGS_declaredRoutineMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>> & inArray,
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
    ioString.appendString ("mRequiredBank:") ;
    inArray (i COMMA_HERE)->mProperty_mRequiredBank.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mReturnedBank:") ;
    inArray (i COMMA_HERE)->mProperty_mReturnedBank.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPreservesBank:") ;
    inArray (i COMMA_HERE)->mProperty_mPreservesBank.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsNoReturn:") ;
    inArray (i COMMA_HERE)->mProperty_mIsNoReturn.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mInstructionList:") ;
    inArray (i COMMA_HERE)->mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declaredRoutineMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_declaredRoutineMap_2E_element>> array = sortedInfoArray () ;
    GGS_declaredRoutineMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_declaredRoutineMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_declaredRoutineMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @declaredRoutineMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_declaredRoutineMap::DownEnumerator_declaredRoutineMap (const GGS_declaredRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element DownEnumerator_declaredRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_declaredRoutineMap::current_mRequiredBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint DownEnumerator_declaredRoutineMap::current_mReturnedBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_declaredRoutineMap::current_mPreservesBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_declaredRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList DownEnumerator_declaredRoutineMap::current_mInstructionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @declaredRoutineMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_declaredRoutineMap::UpEnumerator_declaredRoutineMap (const GGS_declaredRoutineMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap_2E_element UpEnumerator_declaredRoutineMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_declaredRoutineMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_declaredRoutineMap::current_mRequiredBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRequiredBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint UpEnumerator_declaredRoutineMap::current_mReturnedBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mReturnedBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_declaredRoutineMap::current_mPreservesBank (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPreservesBank ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_declaredRoutineMap::current_mIsNoReturn (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsNoReturn ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_InstructionList UpEnumerator_declaredRoutineMap::current_mInstructionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mInstructionList ;
}


//--------------------------------------------------------------------------------------------------
//     @declaredRoutineMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declaredRoutineMap ("declaredRoutineMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declaredRoutineMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declaredRoutineMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declaredRoutineMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declaredRoutineMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declaredRoutineMap GGS_declaredRoutineMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_declaredRoutineMap result ;
  const GGS_declaredRoutineMap * p = (const GGS_declaredRoutineMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declaredRoutineMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declaredRoutineMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  ioArgument_ioInstructionList.addAssignOperation (temp_0  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 20)) ;
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

GGS_baseline_5F_assembly_5F_instructionList_2E_element::GGS_baseline_5F_assembly_5F_instructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList_2E_element::GGS_baseline_5F_assembly_5F_instructionList_2E_element (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList_2E_element & GGS_baseline_5F_assembly_5F_instructionList_2E_element::operator = (const GGS_baseline_5F_assembly_5F_instructionList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList_2E_element GGS_baseline_5F_assembly_5F_instructionList_2E_element::init_21_ (const GGS_baseline_5F_assembly_5F_instruction & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList_2E_element::GGS_baseline_5F_assembly_5F_instructionList_2E_element (const GGS_baseline_5F_assembly_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_assembly_5F_instructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_assembly_5F_instructionList_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_assembly_instructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_assembly_instructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2E_element ("baseline_assembly_instructionList.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_assembly_5F_instructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_assembly_5F_instructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_assembly_5F_instructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_assembly_5F_instructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_assembly_5F_instructionList_2E_element GGS_baseline_5F_assembly_5F_instructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_assembly_5F_instructionList_2E_element result ;
  const GGS_baseline_5F_assembly_5F_instructionList_2E_element * p = (const GGS_baseline_5F_assembly_5F_instructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_assembly_5F_instructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_assembly_instructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element::GGS_pic_31__38_CaseExpressionList_2E_element (void) :
mProperty_mCaseItem () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element::GGS_pic_31__38_CaseExpressionList_2E_element (const GGS_pic_31__38_CaseExpressionList_2E_element & inSource) :
mProperty_mCaseItem (inSource.mProperty_mCaseItem) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element & GGS_pic_31__38_CaseExpressionList_2E_element::operator = (const GGS_pic_31__38_CaseExpressionList_2E_element & inSource) {
  mProperty_mCaseItem = inSource.mProperty_mCaseItem ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element GGS_pic_31__38_CaseExpressionList_2E_element::init_21_ (const GGS_pic_31__38_AbstractCaseItem & in_mCaseItem,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_CaseExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCaseItem = in_mCaseItem ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element::GGS_pic_31__38_CaseExpressionList_2E_element (const GGS_pic_31__38_AbstractCaseItem & inOperand0) :
mProperty_mCaseItem (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_CaseExpressionList_2E_element::isValid (void) const {
  return mProperty_mCaseItem.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList_2E_element::drop (void) {
  mProperty_mCaseItem.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_CaseExpressionList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18CaseExpressionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCaseItem.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18CaseExpressionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2E_element ("pic18CaseExpressionList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_CaseExpressionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_CaseExpressionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_CaseExpressionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_CaseExpressionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_CaseExpressionList_2E_element GGS_pic_31__38_CaseExpressionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_CaseExpressionList_2E_element result ;
  const GGS_pic_31__38_CaseExpressionList_2E_element * p = (const GGS_pic_31__38_CaseExpressionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_CaseExpressionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18CaseExpressionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList_2E_element::GGS_pic_31__38_SwitchInstructionCaseList_2E_element (void) :
mProperty_mStartOfCase (),
mProperty_mCaseExpressionList (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList_2E_element::GGS_pic_31__38_SwitchInstructionCaseList_2E_element (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inSource) :
mProperty_mStartOfCase (inSource.mProperty_mStartOfCase),
mProperty_mCaseExpressionList (inSource.mProperty_mCaseExpressionList),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList_2E_element & GGS_pic_31__38_SwitchInstructionCaseList_2E_element::operator = (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element & inSource) {
  mProperty_mStartOfCase = inSource.mProperty_mStartOfCase ;
  mProperty_mCaseExpressionList = inSource.mProperty_mCaseExpressionList ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList_2E_element GGS_pic_31__38_SwitchInstructionCaseList_2E_element::init_21__21__21_ (const GGS_location & in_mStartOfCase,
                                                                                                                           const GGS_pic_31__38_CaseExpressionList & in_mCaseExpressionList,
                                                                                                                           const GGS_pic_31__38_InstructionList & in_mInstructionList,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_SwitchInstructionCaseList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mStartOfCase = in_mStartOfCase ;
  result.mProperty_mCaseExpressionList = in_mCaseExpressionList ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList_2E_element::GGS_pic_31__38_SwitchInstructionCaseList_2E_element (const GGS_location & inOperand0,
                                                                                                          const GGS_pic_31__38_CaseExpressionList & inOperand1,
                                                                                                          const GGS_pic_31__38_InstructionList & inOperand2) :
mProperty_mStartOfCase (inOperand0),
mProperty_mCaseExpressionList (inOperand1),
mProperty_mInstructionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_pic_31__38_SwitchInstructionCaseList_2E_element::isValid (void) const {
  return mProperty_mStartOfCase.isValid () && mProperty_mCaseExpressionList.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList_2E_element::drop (void) {
  mProperty_mStartOfCase.drop () ;
  mProperty_mCaseExpressionList.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_pic_31__38_SwitchInstructionCaseList_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @pic18SwitchInstructionCaseList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStartOfCase.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCaseExpressionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @pic18SwitchInstructionCaseList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2E_element ("pic18SwitchInstructionCaseList.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_pic_31__38_SwitchInstructionCaseList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_pic_31__38_SwitchInstructionCaseList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_pic_31__38_SwitchInstructionCaseList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_pic_31__38_SwitchInstructionCaseList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_pic_31__38_SwitchInstructionCaseList_2E_element GGS_pic_31__38_SwitchInstructionCaseList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_pic_31__38_SwitchInstructionCaseList_2E_element result ;
  const GGS_pic_31__38_SwitchInstructionCaseList_2E_element * p = (const GGS_pic_31__38_SwitchInstructionCaseList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_pic_31__38_SwitchInstructionCaseList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("pic18SwitchInstructionCaseList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element::GGS_declarationInRamList_2E_element (void) :
mProperty_mDeclarationInRAM () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element::GGS_declarationInRamList_2E_element (const GGS_declarationInRamList_2E_element & inSource) :
mProperty_mDeclarationInRAM (inSource.mProperty_mDeclarationInRAM) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element & GGS_declarationInRamList_2E_element::operator = (const GGS_declarationInRamList_2E_element & inSource) {
  mProperty_mDeclarationInRAM = inSource.mProperty_mDeclarationInRAM ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declarationInRamList_2E_element GGS_declarationInRamList_2E_element::init_21_ (const GGS_declarationInRam & in_mDeclarationInRAM,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationInRamList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDeclarationInRAM = in_mDeclarationInRAM ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element::GGS_declarationInRamList_2E_element (const GGS_declarationInRam & inOperand0) :
mProperty_mDeclarationInRAM (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_declarationInRamList_2E_element::isValid (void) const {
  return mProperty_mDeclarationInRAM.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList_2E_element::drop (void) {
  mProperty_mDeclarationInRAM.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationInRamList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declarationInRamList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclarationInRAM.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declarationInRamList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationInRamList_2E_element ("declarationInRamList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationInRamList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationInRamList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationInRamList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationInRamList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationInRamList_2E_element GGS_declarationInRamList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_declarationInRamList_2E_element result ;
  const GGS_declarationInRamList_2E_element * p = (const GGS_declarationInRamList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationInRamList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationInRamList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList_2E_element::GGS_configDefinitionList_2E_element (void) :
mProperty_mDefinitionLocation (),
mProperty_mSettingList () {
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList_2E_element::GGS_configDefinitionList_2E_element (const GGS_configDefinitionList_2E_element & inSource) :
mProperty_mDefinitionLocation (inSource.mProperty_mDefinitionLocation),
mProperty_mSettingList (inSource.mProperty_mSettingList) {
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList_2E_element & GGS_configDefinitionList_2E_element::operator = (const GGS_configDefinitionList_2E_element & inSource) {
  mProperty_mDefinitionLocation = inSource.mProperty_mDefinitionLocation ;
  mProperty_mSettingList = inSource.mProperty_mSettingList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_configDefinitionList_2E_element GGS_configDefinitionList_2E_element::init_21__21_ (const GGS_location & in_mDefinitionLocation,
                                                                                       const GGS_configSettingList & in_mSettingList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_configDefinitionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDefinitionLocation = in_mDefinitionLocation ;
  result.mProperty_mSettingList = in_mSettingList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList_2E_element::GGS_configDefinitionList_2E_element (const GGS_location & inOperand0,
                                                                          const GGS_configSettingList & inOperand1) :
mProperty_mDefinitionLocation (inOperand0),
mProperty_mSettingList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_configDefinitionList_2E_element::isValid (void) const {
  return mProperty_mDefinitionLocation.isValid () && mProperty_mSettingList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList_2E_element::drop (void) {
  mProperty_mDefinitionLocation.drop () ;
  mProperty_mSettingList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_configDefinitionList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @configDefinitionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDefinitionLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSettingList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @configDefinitionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_configDefinitionList_2E_element ("configDefinitionList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_configDefinitionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_configDefinitionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_configDefinitionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_configDefinitionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_configDefinitionList_2E_element GGS_configDefinitionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_configDefinitionList_2E_element result ;
  const GGS_configDefinitionList_2E_element * p = (const GGS_configDefinitionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_configDefinitionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("configDefinitionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList_2E_element::GGS_immediatExpressionList_2E_element (void) :
mProperty_mExpression (),
mProperty_mErrorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList_2E_element::GGS_immediatExpressionList_2E_element (const GGS_immediatExpressionList_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mErrorLocation (inSource.mProperty_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList_2E_element & GGS_immediatExpressionList_2E_element::operator = (const GGS_immediatExpressionList_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mErrorLocation = inSource.mProperty_mErrorLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_immediatExpressionList_2E_element GGS_immediatExpressionList_2E_element::init_21__21_ (const GGS_immediatExpression & in_mExpression,
                                                                                           const GGS_location & in_mErrorLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_immediatExpressionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mErrorLocation = in_mErrorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList_2E_element::GGS_immediatExpressionList_2E_element (const GGS_immediatExpression & inOperand0,
                                                                              const GGS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_immediatExpressionList_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mErrorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_immediatExpressionList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @immediatExpressionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @immediatExpressionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_immediatExpressionList_2E_element ("immediatExpressionList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_immediatExpressionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_immediatExpressionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_immediatExpressionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_immediatExpressionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_immediatExpressionList_2E_element GGS_immediatExpressionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_immediatExpressionList_2E_element result ;
  const GGS_immediatExpressionList_2E_element * p = (const GGS_immediatExpressionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_immediatExpressionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("immediatExpressionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element::GGS_branchOverflowMapDictionary_2E_element (void) :
mProperty_key (),
mProperty_mList () {
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element::GGS_branchOverflowMapDictionary_2E_element (const GGS_branchOverflowMapDictionary_2E_element & inSource) :
mProperty_key (inSource.mProperty_key),
mProperty_mList (inSource.mProperty_mList) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element & GGS_branchOverflowMapDictionary_2E_element::operator = (const GGS_branchOverflowMapDictionary_2E_element & inSource) {
  mProperty_key = inSource.mProperty_key ;
  mProperty_mList = inSource.mProperty_mList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element GGS_branchOverflowMapDictionary_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                     const GGS_stringlist & in_mList,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mList = in_mList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element::GGS_branchOverflowMapDictionary_2E_element (const GGS_string & inOperand0,
                                                                                        const GGS_stringlist & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_branchOverflowMapDictionary_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @branchOverflowMapDictionary.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @branchOverflowMapDictionary.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element ("branchOverflowMapDictionary.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_branchOverflowMapDictionary_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_branchOverflowMapDictionary_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_branchOverflowMapDictionary_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element GGS_branchOverflowMapDictionary_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary_2E_element result ;
  const GGS_branchOverflowMapDictionary_2E_element * p = (const GGS_branchOverflowMapDictionary_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_branchOverflowMapDictionary_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMapDictionary.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @branchOverflowMapDictionary_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element_3F_::GGS_branchOverflowMapDictionary_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element_3F_::GGS_branchOverflowMapDictionary_2E_element_3F_ (const GGS_branchOverflowMapDictionary_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element_3F_ GGS_branchOverflowMapDictionary_2E_element_3F_::init_nil (void) {
  GGS_branchOverflowMapDictionary_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_branchOverflowMapDictionary_2E_element_3F_::isValid (void) const {
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

bool GGS_branchOverflowMapDictionary_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_branchOverflowMapDictionary_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchOverflowMapDictionary_2E_element_3F_::description (String & ioString,
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
//     @branchOverflowMapDictionary.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element_3F_ ("branchOverflowMapDictionary.element?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_branchOverflowMapDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchOverflowMapDictionary_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_branchOverflowMapDictionary_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_branchOverflowMapDictionary_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchOverflowMapDictionary_2E_element_3F_ GGS_branchOverflowMapDictionary_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_branchOverflowMapDictionary_2E_element_3F_ result ;
  const GGS_branchOverflowMapDictionary_2E_element_3F_ * p = (const GGS_branchOverflowMapDictionary_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_branchOverflowMapDictionary_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchOverflowMapDictionary.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList_2E_element::GGS_codeList_2E_element (void) :
mProperty_mAssemblyCode (),
mProperty_mBinaryCode () {
}

//--------------------------------------------------------------------------------------------------

GGS_codeList_2E_element::GGS_codeList_2E_element (const GGS_codeList_2E_element & inSource) :
mProperty_mAssemblyCode (inSource.mProperty_mAssemblyCode),
mProperty_mBinaryCode (inSource.mProperty_mBinaryCode) {
}

//--------------------------------------------------------------------------------------------------

GGS_codeList_2E_element & GGS_codeList_2E_element::operator = (const GGS_codeList_2E_element & inSource) {
  mProperty_mAssemblyCode = inSource.mProperty_mAssemblyCode ;
  mProperty_mBinaryCode = inSource.mProperty_mBinaryCode ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_codeList_2E_element GGS_codeList_2E_element::init_21__21_ (const GGS_string & in_mAssemblyCode,
                                                               const GGS_uintlist & in_mBinaryCode,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_codeList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAssemblyCode = in_mAssemblyCode ;
  result.mProperty_mBinaryCode = in_mBinaryCode ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_codeList_2E_element::GGS_codeList_2E_element (const GGS_string & inOperand0,
                                                  const GGS_uintlist & inOperand1) :
mProperty_mAssemblyCode (inOperand0),
mProperty_mBinaryCode (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_codeList_2E_element::isValid (void) const {
  return mProperty_mAssemblyCode.isValid () && mProperty_mBinaryCode.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList_2E_element::drop (void) {
  mProperty_mAssemblyCode.drop () ;
  mProperty_mBinaryCode.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_codeList_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @codeList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAssemblyCode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBinaryCode.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @codeList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_codeList_2E_element ("codeList.element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_codeList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_codeList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_codeList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_codeList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_codeList_2E_element GGS_codeList_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_codeList_2E_element result ;
  const GGS_codeList_2E_element * p = (const GGS_codeList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_codeList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("codeList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList_2E_element::GGS_baseline_5F_instructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList_2E_element::GGS_baseline_5F_instructionList_2E_element (const GGS_baseline_5F_instructionList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList_2E_element & GGS_baseline_5F_instructionList_2E_element::operator = (const GGS_baseline_5F_instructionList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_instructionList_2E_element GGS_baseline_5F_instructionList_2E_element::init_21_ (const GGS_baseline_5F_instruction & in_mInstruction,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_instructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList_2E_element::GGS_baseline_5F_instructionList_2E_element (const GGS_baseline_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_instructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_instructionList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_instructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_instructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_instructionList_2E_element ("baseline_instructionList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_instructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_instructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_instructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_instructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_instructionList_2E_element GGS_baseline_5F_instructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_instructionList_2E_element result ;
  const GGS_baseline_5F_instructionList_2E_element * p = (const GGS_baseline_5F_instructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_instructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_instructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList_2E_element::GGS_baseline_5F_partList_2E_element (void) :
mProperty_mCondition (),
mProperty_mInstructionList (),
mProperty_mEndOfPartLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList_2E_element::GGS_baseline_5F_partList_2E_element (const GGS_baseline_5F_partList_2E_element & inSource) :
mProperty_mCondition (inSource.mProperty_mCondition),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfPartLocation (inSource.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList_2E_element & GGS_baseline_5F_partList_2E_element::operator = (const GGS_baseline_5F_partList_2E_element & inSource) {
  mProperty_mCondition = inSource.mProperty_mCondition ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfPartLocation = inSource.mProperty_mEndOfPartLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_partList_2E_element GGS_baseline_5F_partList_2E_element::init_21__21__21_ (const GGS_baseline_5F_conditionExpression & in_mCondition,
                                                                                           const GGS_baseline_5F_instructionList & in_mInstructionList,
                                                                                           const GGS_location & in_mEndOfPartLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_partList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCondition = in_mCondition ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfPartLocation = in_mEndOfPartLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList_2E_element::GGS_baseline_5F_partList_2E_element (const GGS_baseline_5F_conditionExpression & inOperand0,
                                                                          const GGS_baseline_5F_instructionList & inOperand1,
                                                                          const GGS_location & inOperand2) :
mProperty_mCondition (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfPartLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_partList_2E_element::isValid (void) const {
  return mProperty_mCondition.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfPartLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList_2E_element::drop (void) {
  mProperty_mCondition.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfPartLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_partList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_partList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCondition.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_partList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_partList_2E_element ("baseline_partList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_partList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_partList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_partList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_partList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_partList_2E_element GGS_baseline_5F_partList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_partList_2E_element result ;
  const GGS_baseline_5F_partList_2E_element * p = (const GGS_baseline_5F_partList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_partList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_partList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList_2E_element::GGS_midrange_5F_intermediate_5F_instructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList_2E_element::GGS_midrange_5F_intermediate_5F_instructionList_2E_element (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList_2E_element & GGS_midrange_5F_intermediate_5F_instructionList_2E_element::operator = (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList_2E_element GGS_midrange_5F_intermediate_5F_instructionList_2E_element::init_21_ (const GGS_midrange_5F_intermediate_5F_instruction & in_mInstruction,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList_2E_element::GGS_midrange_5F_intermediate_5F_instructionList_2E_element (const GGS_midrange_5F_intermediate_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_intermediate_5F_instructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_intermediate_5F_instructionList_2E_element::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_intermediate_instructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_intermediate_instructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2E_element ("midrange_intermediate_instructionList.element",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_intermediate_5F_instructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_intermediate_5F_instructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_intermediate_5F_instructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_intermediate_5F_instructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_intermediate_5F_instructionList_2E_element GGS_midrange_5F_intermediate_5F_instructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_instructionList_2E_element result ;
  const GGS_midrange_5F_intermediate_5F_instructionList_2E_element * p = (const GGS_midrange_5F_intermediate_5F_instructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_intermediate_5F_instructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_intermediate_instructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList_2E_element::GGS_midrange_5F_partList_2E_element (void) :
mProperty_mCondition (),
mProperty_mInstructionList (),
mProperty_mEndOfPartLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList_2E_element::GGS_midrange_5F_partList_2E_element (const GGS_midrange_5F_partList_2E_element & inSource) :
mProperty_mCondition (inSource.mProperty_mCondition),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfPartLocation (inSource.mProperty_mEndOfPartLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList_2E_element & GGS_midrange_5F_partList_2E_element::operator = (const GGS_midrange_5F_partList_2E_element & inSource) {
  mProperty_mCondition = inSource.mProperty_mCondition ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfPartLocation = inSource.mProperty_mEndOfPartLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_midrange_5F_partList_2E_element GGS_midrange_5F_partList_2E_element::init_21__21__21_ (const GGS_midrange_5F_conditionExpression & in_mCondition,
                                                                                           const GGS_midrange_5F_instructionList & in_mInstructionList,
                                                                                           const GGS_location & in_mEndOfPartLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_partList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mCondition = in_mCondition ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfPartLocation = in_mEndOfPartLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList_2E_element::GGS_midrange_5F_partList_2E_element (const GGS_midrange_5F_conditionExpression & inOperand0,
                                                                          const GGS_midrange_5F_instructionList & inOperand1,
                                                                          const GGS_location & inOperand2) :
mProperty_mCondition (inOperand0),
mProperty_mInstructionList (inOperand1),
mProperty_mEndOfPartLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_midrange_5F_partList_2E_element::isValid (void) const {
  return mProperty_mCondition.isValid () && mProperty_mInstructionList.isValid () && mProperty_mEndOfPartLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList_2E_element::drop (void) {
  mProperty_mCondition.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfPartLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_midrange_5F_partList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @midrange_partList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mCondition.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfPartLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @midrange_partList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_midrange_5F_partList_2E_element ("midrange_partList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_midrange_5F_partList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_midrange_5F_partList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_midrange_5F_partList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_midrange_5F_partList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_midrange_5F_partList_2E_element GGS_midrange_5F_partList_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_midrange_5F_partList_2E_element result ;
  const GGS_midrange_5F_partList_2E_element * p = (const GGS_midrange_5F_partList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_midrange_5F_partList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("midrange_partList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList_2E_element::GGS_clusterList_2E_element (void) :
mProperty_mBlockList () {
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList_2E_element::GGS_clusterList_2E_element (const GGS_clusterList_2E_element & inSource) :
mProperty_mBlockList (inSource.mProperty_mBlockList) {
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList_2E_element & GGS_clusterList_2E_element::operator = (const GGS_clusterList_2E_element & inSource) {
  mProperty_mBlockList = inSource.mProperty_mBlockList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_clusterList_2E_element GGS_clusterList_2E_element::init_21_ (const GGS_ipic_31__38_BlockList & in_mBlockList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_clusterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBlockList = in_mBlockList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList_2E_element::GGS_clusterList_2E_element (const GGS_ipic_31__38_BlockList & inOperand0) :
mProperty_mBlockList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_clusterList_2E_element::isValid (void) const {
  return mProperty_mBlockList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList_2E_element::drop (void) {
  mProperty_mBlockList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_clusterList_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @clusterList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBlockList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @clusterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_clusterList_2E_element ("clusterList.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_clusterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_clusterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_clusterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_clusterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_clusterList_2E_element GGS_clusterList_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_clusterList_2E_element result ;
  const GGS_clusterList_2E_element * p = (const GGS_clusterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_clusterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("clusterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element::GGS_baseline_5F_intermediate_5F_instructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element::GGS_baseline_5F_intermediate_5F_instructionList_2E_element (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element & GGS_baseline_5F_intermediate_5F_instructionList_2E_element::operator = (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element GGS_baseline_5F_intermediate_5F_instructionList_2E_element::init_21_ (const GGS_baseline_5F_intermediate_5F_instruction & in_mInstruction,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element::GGS_baseline_5F_intermediate_5F_instructionList_2E_element (const GGS_baseline_5F_intermediate_5F_instruction & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_baseline_5F_intermediate_5F_instructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_baseline_5F_intermediate_5F_instructionList_2E_element::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @baseline_intermediate_instructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @baseline_intermediate_instructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2E_element ("baseline_intermediate_instructionList.element",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseline_5F_intermediate_5F_instructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseline_5F_intermediate_5F_instructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseline_5F_intermediate_5F_instructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseline_5F_intermediate_5F_instructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseline_5F_intermediate_5F_instructionList_2E_element GGS_baseline_5F_intermediate_5F_instructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_baseline_5F_intermediate_5F_instructionList_2E_element result ;
  const GGS_baseline_5F_intermediate_5F_instructionList_2E_element * p = (const GGS_baseline_5F_intermediate_5F_instructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseline_5F_intermediate_5F_instructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseline_intermediate_instructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

